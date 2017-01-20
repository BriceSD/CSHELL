#!/bin/sh

if [ $# -lt 2 ]
then
  echo "Usage : $0 chaîne nom"
  exit 1
fi

suffixe=$1

shift
for i in $*
do
  preffixe=`cut -d . -f1 <<< $i`
  if [ $suffixe == "-" ]
  then
    mv $i $preffixe
  else
    mv $i $preffixe.$suffixe
  fi
done
exit 0

