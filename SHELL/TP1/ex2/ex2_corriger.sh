#!/bin/sh
if [ $# -ne 1 ]
then echo "Usage : $0 nom_commande"
  exit 1
fi
chemin=`echo $PATH | tr ':' ' '`
for  i in $chemin
do
  if [ -x $i/$1 -a -f $i/$1 ]
  then
    echo "$1 dans $i"
    exit 0
  fi
done
echo "$1 non trouvé"
exit 0
