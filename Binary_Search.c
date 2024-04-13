#include <stdio.h>
int main(){
	int c, first, last, middle, n, X, A[100];
	printf("Enter size of Array:");
	scanf("%d",&n);
	printf("Enter %d numbers:\n",n);
	for (c=0;c<n;c++)
		scanf("%d",&A[c]);
	printf("Enter value X:");
	scanf("%d",&X);
	first=0;
	last=n-1;
	middle=(first+last)/2;
	while(first<=last){
		if(A[middle]<X)
			first=middle+1;
		else if(A[middle]==X){
			printf("The value X=%d found at the %d location\n",X,middle+1);
			break;}
		else
			last=middle-1;
		middle=(first+last)/2;
	}
	if(first>last)
		printf("X :%d is not fond\n",X);
		return 0;
}

