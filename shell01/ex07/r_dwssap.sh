#!/bin/sh
awk -F : 'NR%2==0{print $1}' /etc/passwd | rev | sort -r | awk "NR>=${FT_LINE1} && NR<=${FT_LINE2}" | paste -sd ',' - | sed 's/$/./'
