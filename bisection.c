#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x) (x*log10(x))-12.34
#define e 0.01

int main(){
float a=11;
float b=12;
float x0, fx, fa, fb;
int n=0;
printf("\n n\t\ta\t\tb\t\tx0\t\tf(x0)\n");

while(fabs(b-a)>=e){
    x0= (b+a)/2;
    fx = f(x0);
    fa = f(a);
    fb = f(b);

printf("%d\t%f\t%f\t%f\t%f\n", n, a, b, x0, fx);
    if(fx*fa<0)
      b=x0;
    else if(fx*fb<0)
           a=x0;
    // else if(fx*f(b)<0)
    ++n;        
}
return 0;
}