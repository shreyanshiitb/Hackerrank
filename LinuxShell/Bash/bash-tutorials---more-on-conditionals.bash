read a
read b
read c

d1=$((a - b))
d2=$((b - c))
d3=$((a - c))

product=$((d1*d2*d3))
sum=$((d1*d1+d2*d2+d3*d3))

if [ $product == 0 ]
then
    if [ $sum == 0 ]
    then
        echo "EQUILATERAL"
    else
        echo "ISOSCELES"
    fi
else
    echo "SCALENE"
fi
