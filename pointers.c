#include <stdio.h>

int main()
{

	
	int a;
	
	int arr[5] = {4, 2, 9, 3, 0};
	
	
	int *p;
	
	printf("Enter a number: ");
	scanf("%d", &a);
	

	p = &a;
	
	printf("\n");
	printf("Value stored in a: %d \n", a);
	printf("Value that *p points towards: %d \n", *p);
	printf("Memory address of a, &x: %d \n", &a);
	printf("Memory address stored in p: %d \n", p);
	printf("Memory address of p, &p : %d \n\n\n", &p);
	
	
	
	
	int *h = arr;
	
	printf("*h pointing towards: %d \n", *h);
	h++;
	printf("after incrementing, *h pointing towards: %d \n", *h);
	
	return 0;
	
}