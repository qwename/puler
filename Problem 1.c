//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

//Find the sum of all the multiples of 3 or 5 below 1000.

#include <stdio.h>

int main()
{
    int i = 1, end = 0, limit = 1000;
    while (3 * i < limit)
    {
        if (5 * i < limit) end += 5 * i;
        if (15 * i < 1000) end -= 15 * i;
        end += 3 * i;
        i++;
    }
    printf("%d", end);
    return 0;
}


// Answer : T = 3*333*(1+333)/2 + 5*199*(1+199)/2 - 15*66*(1+66)/2 = 233168
