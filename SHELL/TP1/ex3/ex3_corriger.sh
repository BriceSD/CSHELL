#!/bin/sh
if [ $# -le 1 ]
then
  echo "Usage : $0 suffixe nom_fichier"
  exit 1
fi

suffixe=".$1"
echo "$suffixe"
shift

for i in $*
do
  if [ ! -f $i ]
  then
  echo "$i n’existe pas"
else
  mv $i $i$suffixe
fi
done
exit 0
