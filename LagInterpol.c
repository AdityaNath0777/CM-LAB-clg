/*
  *******************************************

        Lagrange's Interpolation

  *******************************************

*/


#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, n, k, l;
    float x[20], y[20], a[10], X[10], Y[10];

    // clrscr();

    printf("Number of Data points to be feeded(<20): ");
    scanf("%d", &n);

    printf("Values of x\n");
    for (i = 0; i < n; i++)
        scanf("%f", &x[i]);

    printf("Enter the corresponding values of y\n");
    for (i = 0; i < n; i++)
        scanf("%f", &y[i]);

    printf("Number of interpolated values required(<10): ");
    scanf("%d", &l);

    printf("Enter the %d Values of X for which values of Y are required: ", l);
    for (j = 0; j < l; ++j)
        scanf("%f", &X[j]);

    // Algorithm for Lagrange's Interpolation
    for (k = 0; k < l; k++)
    {
        for (i = 0; i <n; i++)
        {
            a[i] = 1;
            for (j = 0; j <n; ++j)
                if (i != j)
                    a[i] = a[i]*(X[k]-x[j])/(x[i]-x[j]);
        }

        Y[k] = 0;

        for (i = 0; i <n; i++)
            Y[k] = Y[k] + a[i]*y[i];

        printf("Interpolated values of X and Y are: %.3f\t\t%.3f\n", X[k], Y[k]);
    }
    getch();
    return 0;
}