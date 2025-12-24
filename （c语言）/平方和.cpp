#include<stdio.h>

int square(int n)
{	
	return n*n;
}

int main()
{
	int a = 3;
	int b = 4;
	int sum = square(a)+square(b);
	printf("%d\n",sum);
	return 0;
}
