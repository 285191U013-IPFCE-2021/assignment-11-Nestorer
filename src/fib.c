/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h> /* assert */
#include <stdio.h>  /* printf */

/* Fibonacci function definition */
// the sequence in the original 1, 1, 2, 3, 5, etc.
// where fib(1) = 1, fib(2)=1, fib(3) = 2, etc.

// where old fib(1) is now fib(1, 1, 0) and old fib(2) is now fib(2, 1, 0), etc.
int fib(int n, int p, int pp)
{
    assert(n >= 1);

    if (n == 1)
        return p;

    int t = pp;
    pp = p;
    p = p + t;

    return fib(n - 1, p, pp);
}
