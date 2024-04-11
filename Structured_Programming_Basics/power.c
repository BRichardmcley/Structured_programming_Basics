#include<stdio.h>
int _pow_recursion (int x, int y)
{
	if(y==0){
		return 1;
	} else if(y<0) {
		return -1;
	} else {
		return x* _pow_recursion(x,y-1);
	}
}
int main()
{
	int base;
	   int exponent;
	    printf("enter base:");
	     scanf("%d",&base);
	      printf("enter exponent:");
	       scanf("%d",&exponent);
	       int answer = _pow_recursion(base, exponent);
	        if (answer==-1)
		{

			printf("error problem with your input\n");

		} else
		{
			printf("%d raised to the power of %d is %d\n", base,exponent,answer);
		  																			                   }
               return 0;
}
