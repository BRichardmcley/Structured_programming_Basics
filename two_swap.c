#include <stdio.h>
int main(){
	int x,y;
	printf("Enter numX: ");
	scanf("%d",& x);
	printf("Enter numY: ");
	scanf("%d",& y);
	printf("values before swap are:\n x=%d \n y=%d \n", x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("Values after swap are:\n x=%d \n y=%d \n", x,y);
	return 0;
}
		
