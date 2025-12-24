#include <stdio.h>

int main() {
    int a[3][3] = {
	{4,3,6},
    {7,1,0},
    {9,3,2}
    };
  int max = a[0][0];
  int max_row = 0;
  int max_col = 0;
  for(int i=0;i<3;i++){
  	for(int j=0;j<3;j++){
	  	if(a[i][j]>max){
		  	max = a[i][j];
		  	max_row = i;
		  	max_col = j;
		  }		  
	  }
  }
  printf("%d",max);
  printf("位置在：第%d行，第%d列\n",max_row,max_col);
    return 0;
    
}
