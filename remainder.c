#include <stdio.h>
int mod(int numdend, int numvisor){
	if (numdend<numvisor){
		return numdend;
	}
	return mod(numdend-numvisor, numvisor);
			}

int main(){
	int num1, num2;
	printf("Enter num1: ");
	scanf("%d",&num1);
	printf("Enter num2: ");
	scanf("%d", & num2);
	float remainder=mod(num1,num2);
	printf("The ramainder when :%d\nis divided by:%d\nIs:%.2f\n", num1,num2,remainder);
	return 0;

}
