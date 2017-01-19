#!/bin/sh

if [ $# != 1 ]
  then
  echo usage : $0 "nom utilisatieur"
  exit 0
fi


# who | grep -q $1
# ou bien la commande grep suivante plus affinée

who | grep  -q "^$1\>" # caractère de fin de string


if [ $? -eq 0 ]
then echo $1 present
else echo $1 "non connecte"
fi
exit 0
