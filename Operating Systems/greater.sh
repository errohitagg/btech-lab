echo
echo Enter the first number
read a
echo
echo Enter the second number
read b
echo
if [ $a -gt $b ]
	then echo $a is greater than $b.
else
	if [ $a = $b ]
		then echo Both numbers are equal.
	else
		echo $b is greater than $a.
	fi
fi
echo
