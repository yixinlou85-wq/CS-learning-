#include<stdio.h>

int main()
{
	int num = 0;
	int count = 0;
	scanf("%d",&num);
	if(num<0){
		num = -num;
	}
		if(num == 0){
			count = 1;
		}else{
	while(num != 0){
		num = num/10;
		count++;
	}
		}
	printf("the number of digits is %d\n",count);
	return 0;
}
