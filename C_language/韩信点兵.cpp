#include<stdio.h>

int main()
{
	int x;
	x = 1;
	while(1){
		if(x % 5 ==1&&x % 6 ==5&&x % 7 ==4&&x % 11 ==10){
			printf("people=%d",x);
			break;
		}
		x++;
	}
	return 0;
}
