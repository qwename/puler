#include <stdio.h>
#include <math.h>

int sq(int x)
{
    return x*x;
}

int main(void)
{
    int a, b;
    double c;
    a = 1; b = 2;

    while (a < 997)
    {
        c = sqrt(sq(a) + sq(b));
        if (c - trunc(c) == 0.0 && a+b+(int)c == 1000)
            printf("%d * %d * %d = %d\n", a, b, (int)c, a*b*(int)c);
        // printf("%d %d %g\n", a, b, c);
        if (b == 999)
        {
            ++a;
            b = a + 1;
        }
        else
            ++b;
    }
    return 0;
}
