// C program to multiply two floating point numbers
#include <stdio.h>

int main()
{
	float A, B, product = 0.0f;

	scanf("%f%f", &A, &B);

	product = A * B;
	printf("%.2f", product);

	return 0;
}
