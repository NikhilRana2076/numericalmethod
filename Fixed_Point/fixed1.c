#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x) pow(x,4)-x-10
#define g(x) pow(x+10,0.5)

int main()
{
    float x, err,xn;
int itr = 1;

    printf("\nEnter initial guess:\n");
scanf("%f", &x);
 
printf("\n Iter\t\tx\t\txn\t\tError");
 
do
{
    xn= g(x);
    err = fabs((xn-x)/xn);
     printf("\n %d\t\t%f\t%f\t%f",itr, x, xn, err);
    x = xn;
     itr = itr + 1;
}

while(fabs(err)>.05);
printf("\n\nRoot is: %f", xn);
getch();
}
