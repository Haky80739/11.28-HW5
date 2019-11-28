#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int A[], int x, int left, int right);

void main() {
	int x;      
	int result; 

	int DATA[11] = { 0, 1, 5, 6, 8, 9, 12, 14, 15, 19, 25 };

	int size = sizeof(DATA) / sizeof(int);

	
	printf("Input the searched element: ");
	scanf_s("%d", &x);
	
	result = BinarySearch(DATA, x, 0, size);

	printf("rqÉˆÊ‰—‘æ %d ŒÂ", result+1);
	system("pause");
	return 0;
}

int BinarySearch(int A[], int x, int left, int right) {
	if (left <= right) {
		int middle = (left + right) / 2;
		
		if (x < A[middle]) {
			return BinarySearch(A, x, left, middle - 1);
		}
		if (x > A[middle]) {
			return BinarySearch(A, x, middle + 1, right);
		}
		if (x == A[middle]) {
			return middle;
		}
	}  
	return -1;  
} 