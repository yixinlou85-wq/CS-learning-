#include<stdio.h>
#include<string.h>

int main()
{
	char names[7][20] = {
	    "Tom", 
	    "Jerry", 
	    "Mike", 
	    "Tom", 
	    "Bob", 
	    "Jerry", 
	    "Alice"
	};
	
	char temp[20];
	for(int i=0;i<6;i++){
		for(int j=0;j<6-i;j++){
			if(strcmp(names[j],names[j+1])>0){
			strcpy(temp,names[j]);
			strcpy(names[j],names[j+1]);
			strcpy(names[j+1],temp);
			}
		}
	}
	printf("%s\n", names[0]);
	for(int i=1;i<7;i++){
		int result = strcmp(names[i],names[i-1]);
		if(result != 0){
			printf("%s\n",names[i]);
		}
	}
	return 0;
}
