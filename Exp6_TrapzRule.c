#include <stdio.h>
#include <conio.h>
#include <math.h>
#define F(x) 1 / (1 + x * x)
void main()
{
    // clrscr();
    int i, j, n;
    float a, b, h, k, I, x[20], y[20];
    printf("Lower Integral Limit (a): ");
    scanf("%f", &a);
    printf("Upper Integral Limit (b): ");
    scanf("%f", &b);
    printf("Trapezoidal Increment (h): ");
    scanf("%f", &h);
    k = a;
    n = 0;
    while (k <= b)
    {
        x[n] = a + n * h;
        k = k + h;
        n++;
    }
    for (i = 0; i < n; i++)
    {
        y[i] = F(x[i]);
        printf("%f\t%f\n", x[i], y[i]);
    }
    I = 0;
    for (j = 0; j < n - 1; j++)
        I = I + (h / 2) * (y[j] + y[j + 1]);
    printf("The value of the integral is %f", I);
    getch();
}