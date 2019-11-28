#include<stdio.h>
#include<stdlib.h>

int Max(int a[], int l, int t);

void main()
{
	int a[10] = { 1,8,6,5,2,9,11,34,7,10 };
	printf("Max value is %d\n", Max(a, 10, 0));
	system("pause");
	return 0;
}

int Max(int a[], int l, int t)
{
	if (t + 1 >= l)
	{
		return a[0];
	}
	if (a[t] > a[0])
	{
		a[0] = a[t];
	}
	return Max(a, l, t + 1);
}