#!/bin/bash
read num1 num2
x=$num1
y=$num2
gcd_num()
{
    while [ $y -gt 0 ]
do
 temp=$y
 y= $((x%y))
 x=$temp
done
gcd=$x
echo "GCD: $gcd"
}
gcd_num
lcm_num()
{
lcm=$(( (num1 * num2) / gcd ))
echo "LCM: $lcm"
}
lcm_num







