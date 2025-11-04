#!/bin/sh
echo $FT_NBR1 + $FT_NBR2 | tr "'\\\"?!mrdoc" "0123401234" | xargs echo | bc | tr "0123456789ABCDEF" "gtaoi luSnemf"

