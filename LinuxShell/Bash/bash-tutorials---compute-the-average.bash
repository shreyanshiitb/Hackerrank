read n
sum=0
for (( i = 0; i < n; i++ )); do
    read x
    sum=$((sum + x))
done
echo $sum $n | awk '{printf "%.3f", $1 / $2}'
