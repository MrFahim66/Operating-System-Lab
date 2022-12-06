#!/bin/bash

echo "Enter Number:"
read number
rows=$number
for((i=1; i<=rows; i++))
do
  for((j=1; j<=i; j++))
  do
    echo -n "$i "
    number=$number
  done
  echo
number=$((number + 1))
done
