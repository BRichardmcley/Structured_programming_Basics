#include<stdio.h>
int sumofdigits(int num){
	if(num==0)
	{
		return 0;
	} else {
		return(num%10) + sumofdigits(num/10);
	}
}
int reverse(int num)
{
	 int reversed=0;
	 while(num!=0) {
		 int digit= num%10;
		 reversed=reversed*10+digit;
		 num/=10;
	 }
	 return reversed;
}
int is_magic_number(int n) {
	      int sum= sumofdigits(n);
       	      int reversed= reverse(sum);
	      return(sum*reversed==n);
}
int main()
{
	int number;
	printf("enter an integer:");
	scanf("%d",&number);
	if(is_magic_number(number))
		 {
	                 printf(" %d is a magic number\n", number);
		} else 	{
	                 printf(" %d is not a magic number\n", number);
        	}
	 return 0;
}
