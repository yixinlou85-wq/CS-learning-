#include<stdio.h>

int sumToN(int n)
{
	int sum = 0;
	for(int i=0;i<=n;i++){
		sum = sum + i;
	}
	return sum;
}

int main()
{
	int s = sumToN(100);
	printf("%d\n",s);
	return 0;
}
