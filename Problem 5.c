//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include <stdio.h>

int main()
{
    int num = 20, check = 19;
    while (check > 3)
    {
        if (num % check == 0) check--;
        else
        {
            check = 19;
            num += 20;
        }
    }
    printf("%d", num);
    return 0;
}

// Answer : 232792560
// Lowest Common multiple...
