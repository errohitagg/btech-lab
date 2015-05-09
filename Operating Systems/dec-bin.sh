echo
echo -n "Enter the decimal number : "
read a
res=$(echo "obase=2;$a"|bc)
echo $res
echo
