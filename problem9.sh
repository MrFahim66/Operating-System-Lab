#!/bin/bash

series(){
	echo "Enter Number:"
	read num
	num2=22
	for (( i=$num2; i<=num; i+=20 ))
	do
	sum=$(($num2 + $i))
	echo "Sum: $i"
	sum2=$(($sum2 + $sum))
	done
	echo "Summation of Series: $sum2 "
}

echo "Calling Function:"
series
