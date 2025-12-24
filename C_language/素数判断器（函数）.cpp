#include<stdio.h>
#include <math.h>
int isPrime(int n);

int main()
{
	int num;
	scanf("%d",&num);
	if(isPrime(num)){
		printf("%d是素数\n",num);
	}else{
		printf("%d不是素数\n",num);
	}
	return 0;
}

int isPrime(int n)
{
	if(n<=1){
		return 0;
	}
	for(int i=2;i<n;i++){
		if(n%i == 0){
			return 0;
		}
		else return 1;
	}
	return 1;
}
