echo
echo -n "Enter the number of lines : "
read n
a=1
while [ $a -le $n ]
do
	b=1
	while [ $b -le $a ]
	do
		echo -n "*"
		b=`expr $b + 1`
	done
	echo
	a=`expr $a + 1`
done
echo
