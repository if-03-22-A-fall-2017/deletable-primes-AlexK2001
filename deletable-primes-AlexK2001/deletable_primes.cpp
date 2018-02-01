/*----------------------------------------------------------
 *				HTBLA-Leonding / Class
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			deletable_primes.c
 * Author:			Alexander. Kirchmair
 * Due Date:		January 25, 2018
 * ----------------------------------------------------------
 * Description:
 * Implementation of deletable_primes.h.
 * ----------------------------------------------------------
 */
#include <stdio.h>
#include <math.h>
#include "deletable_primes.h"

int count_ways = 0;
unsigned long remove_digit(int index, unsigned long n)
{
  long m = n;
  n = n / pow(10, index + 1);
  int modulo = pow(10,index );
  int numberToAdd = m % modulo;
  n = (n * pow(10, index)) + numberToAdd;

  return n;
}
int get_ways(unsigned long p)
{
  int ways = 0;
   if(p < 10)
   {
     if(is_prime(p))
     {
       return 1;
     }
     return 0;
   }
    int count = 0;
    int length = get_length(p);
    while (count < length) {
      long n = remove_digit(count,p);
      if(is_prime(n))
      {
        int the_way = get_ways(n);
        ways += the_way;
      }
      count++;
    }
   return ways;
}

bool is_prime(unsigned long p)
{
    unsigned int divisor = 2;
    bool prime = true;

    if(p < 2)
    {
        prime = false;
    }

    else if (p == 2)
    {
        prime = true;
    }

    else if (p > 2)
    {

        while (divisor < p && p != 1)
        {
            if (p % divisor == 0)
            {
                prime = false;
            }
            divisor++;
        }

        if (prime && p != 1)
        {
            prime = true;
        }

      }
      return prime;
    }
int get_length(unsigned long p)
{
  int count_length = 0;
  int number = 0;
  do{
    count_length++;
    number = p/pow(10,count_length);
  }while(number != 0);
  return count_length;
}
