#include<stdio.h>

int main()
{
	int revenue[3][4] = {
	{41,33,2,77},
	{54,32,27,55},
	{78,43,55,23}};
	int (*p)[4] = revenue;
	int target = *(*(p+1)+2);
	printf("%d\n",target);
	
	return 0;
}
