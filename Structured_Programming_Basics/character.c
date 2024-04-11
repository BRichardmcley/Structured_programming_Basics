#include<stdio.h>
int main()
{
	char ch;
	printf("enter any character:");
	scanf(" %c",&ch);
	switch(ch)
	{
		case 'a'...'z':
			printf("%c is a small letter\n",ch);
			break;
		case 'A'...'Z':
			printf("%c is a capital letter\n",ch);
			break;
		case '0'...'9':
			printf("%c is a digit\n",ch);
			break;
		default:
			printf("%c is a special character\n",ch);
	}
	return 0;
}
