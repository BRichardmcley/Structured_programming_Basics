#include <stdio.h>

int sumdigits(int x) {
       	if (x== 0)
		return 0;
	return (x % 10 + sumdigits(x / 10));
}

int main() {
       	int num ;
	printf("Enter digit:");
	scanf("%d",&num);
	int result = sumdigits(num);
	printf("The sum of the digits of: %d\nIs %d\n", num, result);
	return 0;
}
