#include <stdio.h>
int main(){
	int x, reverse=0;
	printf("Enter num to reverse:");
	scanf("%d",& x);
	while(x!=0){
		reverse=reverse*10;
		reverse=reverse+x%10;
		x=x/10;
	}
	printf("The number in reverse is:%d\n",reverse);
	return 0;
}
