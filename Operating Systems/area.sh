echo
echo -n "Enter the radius of circle : "
read r
area=$(echo "scale=2; 3.14*($r*$r)"|bc)
echo Area of circle with radius $r is $area
echo
