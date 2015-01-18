/*
The sum of the squares of the first ten natural numbers is,

1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)^2 = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <stdio.h>

int main()
{
    int sumsq = 0, sqsum = (100 * 101 / 2) * (100 * 101 / 2), num = 1, limit = 100;
    while (num <= limit)
    {
        sumsq += num * num;
        num++;
    }
    if (sumsq >= sqsum) printf("%d", sumsq - sqsum);
    else printf("%d", sqsum - sumsq);
    return 0;
}

// Answer : 25164150
