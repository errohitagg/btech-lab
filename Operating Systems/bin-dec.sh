echo
echo -n "Enter the binary number : "
read a
res=$(echo "ibase=2;$a"|bc)
echo $res
echo

