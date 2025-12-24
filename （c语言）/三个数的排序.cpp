#include<stdio.h>
void sortThree(int *p1,int *p2,int *p3);

int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	sortThree(&a,&b,&c);
	printf("%d %d %d\n",a,b,c);
	return 0;
}

void sortThree(int *p1,int *p2,int *p3)
{
	    int temp; // 用于交换的临时容器
	
	    // 1. 保证 p1 比 p2 小
	    if (*p1 > *p2) {
	        temp = *p1;
	        *p1 = *p2;
	        *p2 = temp;
	    }
	
	    // 2. 保证 p1 比 p3 小 (经过这一步，p1 是三个数里最小的)
	    if (*p1 > *p3) {
	        temp = *p1;
	        *p1 = *p3;
	        *p3 = temp;
	    }
	
	    // 3. 此时 p1 已经是最小了，只用对比 p2 和 p3，保证 p2 比 p3 小
	    if (*p2 > *p3) {
	        temp = *p2;
	        *p2 = *p3;
	        *p3 = temp;
	    }
}
