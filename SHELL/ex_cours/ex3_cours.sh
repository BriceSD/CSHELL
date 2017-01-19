#!/bin/sh

if test $# -le 1
then
  echo "usage : $0 nom liste_de_noms"
  exit 1
fi

nom=$1
shift

for i in $*
do
  if [ $i != $nom ]
  then echo -n "$i"
  fi
done


echo
exit 0
