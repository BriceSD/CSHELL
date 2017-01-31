#!/bin/bash

if [ $# -eq 1 ] ; then

	if [ -f $1 ] ; then
		
		i=0
			
		cat $1 | while read LINE
		do
			if [ "$LINE" != "" ] ; then
				echo $i $LINE
				i=$((i+1))
			fi
		done

	fi

fi
