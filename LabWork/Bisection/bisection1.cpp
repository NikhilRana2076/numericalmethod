#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x) exp(-x)-5

int main()
{
	 float Xu, Xl, Xm, f0, f1, f2, err;
	 int itr = 1;
	 
	 up:
	 printf("\nEnter two initial guesses:\n");
	 scanf("%f%f", &Xu, &Xl);
 
	 f0 = f(Xu);
	 f1 = f(Xl);
	
	 if( f0 * f1 > 0.0)
	 {
		  printf("Incorrect Initial Guesses.\n");
		  goto up;
	 }
   
	 printf("\nIteration\tXu\t\tf(Xu)\t\tXl\t\tf(Xl)\t\tXm\t\tf(Xm)\t\tError\n");
	 do
	 {
		  Xm = (Xu + Xl)/2;
		  f2 = f(Xm);
		  err = fabs((Xm-Xu)/Xm);
		  printf("%d\t\t%f\t%f\t%f\t%f\t%f\t%f\t%f\n",itr, Xu, f(Xu), Xl, f(Xl), Xm, f2, err);
		
		  if( f0 * f2 < 0)
		  {
			  Xl = Xm;
		      f1 = f2;
		  }
		  else
		  {
			   Xu = Xm;
			   f0 = f2;
		  }
		  itr = itr + 1;
	 }
	 while(fabs(err)>0.01);
	 printf("\nRoot is: %f", Xm);
	 getch();
}
