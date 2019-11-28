#include <stdio.h>
#include <stdlib.h>

int cubeByReference(int *nPtr);

int main(void)
{
	int num = 5;
	printf("The original value of number is %d", num);

	cubeByReference(&num);

	printf("\nThe new value of number is %d\n", num);
	system("pause");
	return 0;
}

int cubeByReference(int *nPtr)
{
	*nPtr= *nPtr * *nPtr * *nPtr;
}