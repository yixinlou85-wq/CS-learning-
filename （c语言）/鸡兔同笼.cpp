#include<stdio.h>

int main()
{
	int x,y;
	x=1;
	while(1){
		y=98-x;
		if(2*x+4*y==386)
		{
		printf("x=%d y=%d",x,y);
		break;
		}
		x++;
		
	}
	return 0;
}
