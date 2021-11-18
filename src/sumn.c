#include "sumn.h"

#include <stdio.h>

int sumn(int n)
{
    if (n > 1)
        return 2 * n - 1 + sumn(n - 1); // (2n-1) is largest odd number, do it again with 2nd largest, etc.
    return 1;
}