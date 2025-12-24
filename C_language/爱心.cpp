#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int delay (unsigned int nDelay)
{
    unsigned int i,j,k;
    for ( j=0;j<6144;j++)
     k++;
}
int
main (int arg, char* argvll)

{
printf("亲爱的何欢：\n");
Sleep (1000);
printf("希望你天天开心：\n");
Sleep (1000);
printf("不求风生水起：\n");
Sleep (1000);
printf("只求平平安安：\n");
Sleep (1000);
printf("来自娄逸歆的祝福：\n");
Sleep (1000);
float x,y,a;
for (y = 1.5;y > -1.5;y -= 0.1){
  for (x =-1.5;x < 1.5;x += 0.05){
  	     a = x * x + y * y - 1;
         putchar(a * a * a - x * x * y * y * y <= 0.0 ? '@' : ' ');
    }
     system ("color 0c");
     putchar ('\n');
}
    return 0;
}
