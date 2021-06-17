#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x) log(x)+6*x-5
#define g(x) 1/(x)+6

int main()
{
	 float x, xm, f0, f1, err;
	 int itr = 1;
	 
	 printf("\nEnter initial guess:\n");
	 scanf("%f", &x);
 	
	 printf("\n Iter\t\tx\t\tf(x)\t\tg(x)\t\t x1\t\tError");
		  
	 do
	 {
	 f0 = f(x);
	 f1 = g(x);
	
	 if( g(x) == 0.0)
	 {
		  printf("Incorrect Initial Guesses.\n");
		  exit(0);
		  
	 }

		  xm = x - (f0/f1);
		  err = fabs((xm-x)/xm);
		  
	      printf("\n %d\t\t%f\t%f\t%f\t%f\t%f",itr, x, f(x), g(x), xm, err);
	      x = xm;
	      itr = itr + 1;
	 }
	 while(fabs(err)>.0005);
	 printf("\n\nRoot is: %f", xm); 
	 getch();
}
