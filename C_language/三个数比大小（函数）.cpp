#include<stdio.h>

int getMax(int x,int y)
{
	return (x>y)?x:y;
}

int main()
{
	int a=10,b=50,c=30;
	int max = getMax(a,getMax(b,c));
	printf("max = %d\n",max);
	return 0;
}
