#!/bin/sh

dir="dir"

file=`cmp $dir/f1.txt $dir/f3.txt`
if [ $file -ne 0 ]
then
  echo $file
fi

