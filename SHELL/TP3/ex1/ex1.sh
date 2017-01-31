Audit :
find $HOME -type f -exec ls -l {}\; | grep '........x'

vire_ligne_vide
grep -v '^$' $1 | cat -n

grep_rec
find "$1" type f -name "$3" -print | xargs grep "$2"
