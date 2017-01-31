#!/bin/bash

if [ -f ~/.pensebete ] ; then
	cat ~/.pensebete
else
	echo "touch"
	touch ~/.pensebete
fi

if [ $# -ge 2 ] ; then

	if [ $1 == "-c" ] ; then

		grep $2 ~/.pensebete
	
	else
	
		for a in $*
		do
			echo $a >> ~/.pensebete
		done	
	fi
else
	cat - >> ~/.pensebete
fi

