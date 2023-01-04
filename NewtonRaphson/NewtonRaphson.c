#include<stdio.h>
#include<math.h>

#define F(x) x*log10(x)-12.34
#define dF(x) log10(exp(1)*x)
#define e 0.0001

int main(int argc, char *argv[])
{
	int i=0;
	float x0, x1, f0, f1, df0;
	puts("\n\t*** Root approximation by Newton Raphson ***\n");
	printf("x0: ");
	scanf("%f", &x0);
	printf("n\txn\t\tf(x_n)\t\tdf(x_n)\t\t(xn+1)\n\n");
	
	do{
		f0 = F(x0);
		df0 = dF(x0);
		x1= x0-(f0/df0);
		f1=F(x1);
		printf("%d\t%f\t%f\t%f\t%f\n", i, x0, f0, df0, x1);
		x0=x1;
		
		++i;
		}while(fabs(f1)>e);
	printf("%d \t%f\t%f\n", i, x0, f1);
	return 0;
}