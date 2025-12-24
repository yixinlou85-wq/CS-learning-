#include<stdio.h>
#include<string.h>

int main()
{
	char book[5][20] = {"C Primer Plus",
	"Java","Python Crash Course","C","Algorithms"};
	
	char temp[20];
	
	for(int i=0;i<4;i++){
			for(int j=0;j<4-i;j++){
				if((strlen(book[j]) < strlen(book[j+1])) || 
				    (strlen(book[j]) == strlen(book[j+1]) && strcmp(book[j], book[j+1]) > 0)){				
			strcpy(temp,book[j]);
			strcpy(book[j],book[j+1]);
			strcpy(book[j+1],temp);
			}
		}
	}
		for(int i=0;i<5;i++){
			printf("%s\n",book[i]);
		}
	return 0;
}
