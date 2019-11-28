#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 13

int main(void)
{
	int count=0;
	int face1;
	int face2;
	int roll=0;
	int frequency[SIZE] = { 0 };

	srand(time(NULL));

	while (roll<36000)
	{
		face1 = 1 + rand() % 6;
		face2 = 1 + rand() % 6;
		count = face1 + face2;
		roll++;
		++frequency[count];
	}


	printf("%5s%20s\n","Count","Frequency");
	for (count = 2; count < 13; count++)
	{
		printf("%5d%20d\n", count, frequency[count]);
	}
		
	system("pause");
	return 0;
}
