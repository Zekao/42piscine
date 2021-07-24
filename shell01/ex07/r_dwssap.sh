cat /etc/passwd | grep -v '#' | sed -n 'n;p' | cut -d : -f 1 | awk "NR >= 7 && NR <= 15" | rev | sort -r | sed 's/$/,/g' | tr '\n' ' ' | sed 's/, $/./g'
