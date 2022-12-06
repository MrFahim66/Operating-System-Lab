#!/bin/bash

read -p "Enter Grade: " grade

if [ $grade -le 50 ]
then
	echo "Grade:\t Fail"
elif [ $grade -le 59 ]
then
	echo "Grade:\t B"
elif [ $grade -le 79 ]
then
	echo "Grade:\t A"
elif [ $grade -le 100 ]
then
	echo "Grade:\t A+"
elif [ $grade -gt 100 ]
then
	echo "Invalid!!"
	 exit
fi
