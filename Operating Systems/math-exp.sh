echo
echo Enter the first number
read a
echo
echo Enter the second number
read b
echo
c=`expr $a + $b`
echo Addition of $a and $b is $c
echo
c=`expr $a - $b`
echo Subtraction of $a and $b is $c
echo
c=`expr $a \* $b`
echo Multiplication of $a and $b is $c
echo
c=`expr $a / $b`
echo Division of $a and $b is $c
echo
c=`expr $a % $b`
echo Modulus of $a and $b is $c
echo
