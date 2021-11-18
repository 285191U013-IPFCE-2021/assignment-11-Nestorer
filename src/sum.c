#include "../include/sum.h"

#include <stdio.h>
#include <assert.h>

/* Sum integers 1 to n */
int sum(int n)
{
  /* pre-condition */
  assert(n >= 1);
  /* post-condition */
  if (n > 1)
    return n + sum(n - 1);
  else
    return 1;
}

// we can calculate that
/* Sum integers 1 to n */
int sumtail(int n, int total)
{
  // the ceiling is calculated at the point so we just avoid integer overflow;
  assert(n >= 1 && n <= 65535);

  if (n == 1) // base case
    return 1 + total;
  else
    return sumtail(n - 1, n + total);
}

/* Sum integers 1 to n */
int sumwhile(int n)
{

  // the ceiling is calculated at the point so we just avoid integer overflow;

  // while yes we no longer assert(n>=1), our program still calculates the sum of integers 1 to n
  // but this new assertion allows us to make the code a tiny bit tidier and well an added bonus is we
  // can now calculate sumwhile(0) too! :)
  assert(n >= 0 && n <= 65535);

  int sum = 0;

  while (n != 0)
  {
    sum += n;
    n--;
  }

  return sum;
}
