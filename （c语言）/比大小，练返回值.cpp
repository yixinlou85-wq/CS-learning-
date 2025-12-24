#include<stdio.h>

int getMax(int a,int b);

int main()
{
	int x = 10,y = 20;
	int result = getMax(x,y);
	printf("较大的数是：%d\n",result);
	return 0;
}

int getMax(int a,int b)
{
	if(a>b){
		return a;
	}else{
		return b;
	}
}
