read x y z
if [ $x == $y ]; then
   if [ $x == $z ]; then
     echo "EQUILATERAL"
   else
     echo "ISOSCELES"
   fi
else
  if [ $x == $z ]; then
    echo "ISOSCELES"
  fi
  if [ $y == $z ]; then
    echo "ISOSCELES"
  fi
fi

if [ $x != $y ]; then
  if [ $x != $z ]; then
    if [ $y != $z ]; then
      echo "SCALENE"
    fi
  fi
fi
