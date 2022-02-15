echo `cat /etc/passwd | sed '/^#/d' | awk -F ':' '(NR % 2) {print $1}' | rev | sort -r | awk -v start=$FT_LINE1 -v end=$FT_LINE2 '(NR>=start && NR<=end) {print}'` | sed 's/ /, /g' | tr '\n' '.'
