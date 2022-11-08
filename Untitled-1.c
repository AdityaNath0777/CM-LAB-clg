#include<math.h>
#include<stdio.h>
#include<conio.h>

#define F(x) x*log10(x)-12.34
#define dF(x) log10(exp(1)*x)
#define e 0.00001

int main(){
    int i=0;
    float x0, x1, f0, f1, df0;
    printf("Enter x0: ");
    scanf("%f", &x0);
    printf("\n\txn\t\tf(x_n)\t\t(x_n+1)\n\n");

    do{
        f0 = F(x0);
        df0 = dF(x0);
        x1 = x0-(f0/df0);
        f1 = F(x1);
        printf("%d\t%f\t%f\t%f\t%f\n", i, x0, f0, df0, x1);
        x0 = x1;
        ++i;
    }while(fabs(f1)>e);

    printf("%d \t%f\t%f\n", i, x0, f1);

return 0;
}