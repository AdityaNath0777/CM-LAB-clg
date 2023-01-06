#include <stdio.h>
int main(int argc, char *argv[])
{
    int i, j, k, l, n;
    int p;
    float x[20], y[20], X[10], Y[10], d[10][10];

    printf("\n\t*** Newton Divided Difference ***\n\n");
    printf("Enter no. of data points to be feeded: ");
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

    // Algorithm of Newton Divided Difference
    for(k=0; k<l; ++k){
        for(j=0; j<n; ++j){
            d[0][j]=y[j];
        }

        for(i=1; i<n; ++i){
            for(j=0; j<n-i; ++j){
                d[i][j]=(d[i-1][j+1] - d[i-1][j]) / (x[i+j]-x[j]);
            }
        }
        Y[k]=y[0];
        p=1;
        for(i=0; i<n-1; ++i){
            p=p*(X[k]-x[i]);
            Y[k]=Y[k] + p*d[i+1][0];
        }
        printf("The values of X and Y are: %.3f\t%.3f\n", X[k], Y[k]);
    }
    return 0;
}