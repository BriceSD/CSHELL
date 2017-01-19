#!/bin/sh

mkdir C_FILE
touch C_FILE/c_liste
ls *.c *.o > C_FILE/c_liste
last_file=`tail -1 C_FILE/c_liste`
mv $last_file C_FILE

cat C_FILE/c_liste
