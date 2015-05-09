echo
echo -n "Enter the number of terms : "
read n
x=0
y=1
i=3
echo -n "$x $y "
while [ $i -le $n ]
	do
		z=`expr $x + $y`
		echo -n "$z "
		x=$y
		y=$z
		i=`expr $i + 1`
	done
echo
echo
