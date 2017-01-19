#!/bin/bash
input="a"
echo Répondez par oui ou non :

while [ "$input" != "oui" -a "$input" != "non" ]
do
  read input
done
