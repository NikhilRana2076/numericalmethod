#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

#define    f(x) exp(-x)-5

int main()
{
	 float x0, x1, x2, f0, f1, f2, err;
	 int itr = 1;
	 
	 printf("\nEnter initial guesses:\n");
	 scanf("%f%f", &x0, &x1);
	
	 printf("\nIteration\tX0\t\tf(X0)\t\tx1\t\tf(x1)\t\tx2\t\tError\n");
	 do
	 {
		  f0 = f(x0);
		  f1 = f(x1);
		  if(f0 == f1)
		  {
			   printf("Mathematical Error.");
			   exit(0);
		  }
		  
		  x2 = x1 - (x1 - x0) * f1/(f1-f0);
		  f2 = f(x2);
		  err = fabs((x2-x1)/x2);
		 printf("%d\t\t%f\t%f\t%f\t%f\t%f\t%f\n", itr, x0, f(x0), x1, f(x1), x2, err);
		  
		  x0 = x1;
		  f0 = f1;
		  x1 = x2;
		   
		  itr = itr + 1;	  

	 }while(fabs(f2)>.0001);
	
	 printf("\nRoot is: %f", x2);
	 getch();
}
