echo
echo Enter the number
read a
echo
if [ `expr $a % 2` = 0 ]
	then echo $a is an even number.
else
	echo $a is an odd number.
fi
echo
