#!/usr/perl5/bin/perl -w
#
# Copyright 2007 Sun Microsystems, Inc.  All rights reserved.
# Use is subject to license terms.
#
# Permission is hereby granted, free of charge, to any person obtaining a
# copy of this software and associated documentation files (the "Software"),
# to deal in the Software without restriction, including without limitation
# the rights to use, copy, modify, merge, publish, distribute, sublicense,
# and/or sell copies of the Software, and to permit persons to whom the
# Software is furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice (including the next
# paragraph) shall be included in all copies or substantial portions of the
# Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
# THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
# DEALINGS IN THE SOFTWARE.
#
#
#

use strict;

%main::directories_in = ();
%main::directories_out = ();

my $pman = 0;	# 0 = end-user docs, 1 = programmer docs
my $type = "end-user";

if ($ARGV[0] eq "-pman") {
  shift @ARGV;
  $pman = 1;
  $type = "developer";
}

print "# X Window System $type man pages for localization\n",
  "# Autogenerated by $0\n\n",
  "i pkginfo\n",
  "i copyright=../copyright\n",
  "i depend=../depend\n\n";

foreach my $protoin (@ARGV) {
  print "\n## Man pages from $protoin\n\n";

  open(PROTOIN, "<$protoin") or die "Can't open $protoin";

  while (my $in = <PROTOIN>) {
    if ($in =~ /^![A-Z]+=/) {
      print "\n", $in;
    } elsif ($in =~ /^!search\s+(.*man.*)/) {
      my $dir = $1;

      if ($dir =~ m|/man3|) {
	if ($pman == 1) {
	  print "\n", $in;
	}
      } elsif ($dir =~ m|/man|) {
	if ($pman == 0) {
	  print "\n", $in;
	}
      }
    } elsif ($in =~ m|^d none ([^\s]+)|) {
      my $dir = $1;
      $main::directories_in{$dir} = $in;

      if ($dir =~ m|man/man3|) {
	if ($pman == 1) {
	  $dir =~ s|man/man|man/C/man|;
	  &output_dirs($dir);
	}
      } elsif ($dir =~ m|man/man|) {
	if ($pman == 0) {
	  $dir =~ s|man/man|man/C/man|;
	  &output_dirs($dir);
	}
      }
    } elsif ($in =~ m|^[fs] none ([^\s]+)|) { 
      my $file = $1;

      $in =~ s|man/man|man/C/man|;
            
      if ($file =~ m|man/man3|) {
	if ($pman == 1) {
	  print $in;
	}
      } elsif ($file =~ m|man/man|) {
	if ($pman == 0) {
	  print $in;
	}
      }
    }   
  }
  close(PROTOIN);
}

sub output_dirs {
  my ($dir) = @_;

  return if ($dir eq "");

  return if (exists $main::directories_out{$dir});

  if ($dir =~ m|/|) {
    my $parent = $dir;
    $parent =~ s|/\w*$||;
    
    &output_dirs($parent);
  }
  
  if (exists $main::directories_in{$dir}) {
    print $main::directories_in{$dir};
  } else {
    my $d = $dir;
    $d =~ s|/C||;
    if (exists$main::directories_in{$d}) {
      my $o = $main::directories_in{$d};
      $o =~ s/$d/$dir/;
      print $o;
    } else {
      print STDERR "WARNING: could not find 'd' entry for directory $dir\n";
    }
  }

  $main::directories_out{$dir} = 1;
}
