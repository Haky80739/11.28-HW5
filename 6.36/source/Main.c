#include<stdio.h>
#include<stdlib.h>


void re(char arr[], int t);

void main()
{
	char s[] = "ABCDEFGHIJK";
	re(s, sizeof(s) - 1);
	printf("\n");
	system("pause");
	return 0;
}

void re(char a[], int t)
{
	printf("%c ", a[t]);
	if (t == 0)
	{
		return;
	}
	re(a, --t);
}