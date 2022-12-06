#!/bin/bash

echo "--Even Or Odd--"
echo -n "Enter Number:"
read n
echo -n "Result:"
if [ `expr $n % 2` == 0 ]
then
	echo "$n is Even"
else
	echo "$n is Odd"
fi
