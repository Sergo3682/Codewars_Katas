/*

https://www.codewars.com/kata/5a805d8cafa10f8b930005ba

Your task is to find the nearest square number, nearest_sq(n), of a positive integer n.

Goodluck :)

*/

#include <math.h>
#include <stdlib.h> 
#define x (abs ( n - (num * num ) ))
#define y (abs ( n - ( next_num * next_num ) ))
#define z (abs ( n - ( prev_num * prev_num ) ))

int nearest_sq(int n)
{
  int num = (int) sqrt(n);
  int next_num = num + 1;
  int prev_num = num - 1;
  if ( ( x < y ) && ( x < z ) )
    return num*num;
  else if ( ( y < x ) && ( y < z ) )
    return next_num * next_num;
  else if ( ( z < x ) && ( z < y ) )
    return prev_num * prev_num;
  else return 1;
}