//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

//What is the 10 001st prime number?

#include <stdio.h>

int isPrime(unsigned __int64 x)
{
    if (x == 2) return 1;
    if (x % 2 == 0) return 0;
    int p = 3;
    while (p * p <= x)
    {
        if (x % p > 0) p += 2;
        else return 0;
    }
    return 1;
}
int main()
{
    int pos = 1, prime = 3;
    while (pos < 10001)
    {
        if (isPrime(prime)) pos++;
        prime += 2;
    }
    printf("%d", prime-2);
    return 0;
}

// Answer : 104743
