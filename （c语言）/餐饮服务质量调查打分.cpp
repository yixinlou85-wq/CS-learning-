#include<stdio.h>
#include<random>
#include<time.h>
#include<stdlib.h>

int main()
{
	int grade,i,Gradecount[11] = {0};//评分次数
	int  magic;//打印星号;
	srand(time(NULL));
	printf("随机生成的40个评分:\n");
	for(i=0;i<=40;i++)
	{	
		grade = rand()%10+1;
		Gradecount[grade]++;//评分次数增加
			printf("%d",grade);	
	}
	
	printf("\n\tGrade\tCount Histogram\n");
	for(i=1;i<=10;i++){
		printf("\t%d\t%d",i,Gradecount[i]);
		for(magic=0;magic<Gradecount[i];magic++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
