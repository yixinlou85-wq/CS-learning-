#include<stdio.h>

int main()
{
	int guess;
	int image=78;
	int count=0;
	while(guess != image)
	{
		scanf("%d",&guess);
		count++;
	if(guess>image)

		printf("太大了\n");
	if(guess<image)
		printf("太小了\n");
	}
	printf("yes%d",count);

	return 0;	
}
