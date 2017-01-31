#!/bin/bash

if [ $# -gt 2 ] ; then
	i=0
	for arg in $*
	do
		echo $i	
		if [ $i -ge 2 ] ; then
			echo "fichier"
			echo $arg
			sed -i "s/$1/$2/g" $arg
		fi
		i=$((i+1))
	done

fi

