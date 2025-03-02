#!/bin/bash


read num1 num2
if [$num1 -gt $num2];
then
{
max=$num1
min=$num2
}
else
{
max=$num2;
min=$num1;
}
fi
gcd_num()
{
 i=2;
 while [$i -le $min]
 do
 {
  if ([$(($i%$num1)) -eq 0]&&[$(($i%$num2)) -eq 0]);
  then 
  {
    gcd=$i;
  }
  fi
  i=$(($i+1))
 }
 done
echo "GCD: $gcd"
}
gcd_num
lcm_num()
{
lcm=$(( (num1 * num2) / gcd ))
echo "LCM: $lcm"
}
lcm_num