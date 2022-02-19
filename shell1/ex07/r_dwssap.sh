#!/bin/bash
cat /etc/passwd | cut -d ":" -f 1 | sed '1~2d' | rev | sort -r | sed -n "$FT_LINE1","$FT_LINE2"p | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./g'