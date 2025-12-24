#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key; // 想找的数
    int index = -1; // 存放结果，初始化为-1表示没找到
    
    printf("请输入要找的数: ");
    scanf("%d", &key);
    for(int i=0;i<5;i++){
		if(arr[i]==key){
			index = i;
			break;
		}
	}
    // 请在这里写一个 for 循环进行顺序查找
    // 如果找到了，把下标赋值给 index，并 break 跳出循环
    
    
    if (index != -1)
        printf("找到了，下标是 %d\n",index);
    else
        printf("Not Found\n");
        
    return 0;
}
