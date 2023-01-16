#include<stdio.h>
#include<math.h>

#define f(x) (x*log10(x) - 12.34)
#define e 0.0001

int main(){
  float x0, x1, fx0, fx1;
  float x, fx;
  int n=0;

  printf("\n\t*** Root Approximation by Secant Method ***\n\n");
  printf("Enter initial values, x0 and x1: ");
  scanf("%f %f", &x0, &x1);

  printf("n \t x \t\tf(x0) \t\t x1\t\tf(x1) \t\t x\t\t f(x)\n");
  do{
      fx0 = f(x0);
      fx1 = f(x1);
      x = ((fx1*x0) - (fx0*x1)) / (fx1 - fx0);
      fx = f(x);
      printf("%d\t %f\t %f\t %f\t %f\t %f\t %f\n", n, x0, fx0, x1, fx0, x, fx);

      x0 = x1;
      x1 = x;
      ++n;
  }while(fabs(fx)>=e);
return 0;
}