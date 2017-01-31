#!/bin/bash

files=`ls *.c`

for a in $files
do
	counter=`grep -c "#include <stdio.h>" $a | head -n 1`
	if [ $counter -eq 1 ] ; then
		echo $a
	fi
done
