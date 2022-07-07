/*https://www.codewars.com/kata/57a083a57cb1f31db7000028*/

/* Complete the function that takes a non-negative integer n as input, and returns a list of all the powers of 2 with the exponent ranging from 0 to n ( inclusive ). */


#include <inttypes.h>
#include <stddef.h>

void powers_of_two (size_t n, uint64_t powers[n + 1])
{
  // fill the powers[] array
  for (size_t i = 0; i <= n; i++)
    {
      if (i == 0) { powers[i] = 1; }
      else 
        {
          powers[i] = 1;
          for ( size_t j = 0; j != i; j++)
            {
              powers[i] *= 2;
            }
        }
    }
}