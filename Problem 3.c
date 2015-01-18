//The prime factors of 13195 are 5, 7, 13 and 29.

//What is the largest prime factor of the number 600851475143 ?

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
    unsigned __int64 limit = 600851475143ULL, prime = 2, power = 0, num = 0;
    while (prime <= limit)
    {
        if (isPrime(prime))
        {
            while (limit % prime == 0)
            {
                power++;
                limit = limit / prime;
            }
            if (power > 0)
            {
                if (num > 0) printf(" x ");
                num++;
                if (power > 1)
                {
                    printf("%d", prime);
                    printf("^%d", power);
                }
                else printf("%d", prime);
                power = 0;
            }
        }
        if (prime & 1 == 1) prime += 2;
        else prime++;
    }
    return 0;
}


//Asnwer : 6857
