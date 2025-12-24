#include<stdio.h>

int main()
{
	int scores[3][4] = {
	    {80, 92, 85, 100}, // 学生 A 的成绩
	    {78, 65, 88, 70},  // 学生 B 的成绩
	    {90, 95, 100, 98}  // 学生 C 的成绩
	};
	int average;
	for(int i=0;i<3;i++){
		int total = 0;
		for(int j=0;j<4;j++){
			total += scores[i][j];
			average = total/4;
		}
		printf("%d\n",average);
	}
	return 0;
}
