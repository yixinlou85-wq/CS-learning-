#include<stdio.h>

int main()
{
	int a,b,c,max;
	scanf("%d %d %d",&a,&b,&c);
	max = a;
	if(b>max)
	{
		max=b;
		{if(max<c)
		max=c;
		}
	
	}
	else{
		max=a;
		if(c<max){
			max=a;
		}
	}	
	printf("%d",max);
	return 0;
}
