#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr; // 数组名其实就是首元素的地址

    printf("数组内容：\n");
    for(int i = 0; i < 5; i++) {
        // 任务：利用 p 来打印当前的值，然后让 p 移动到下一个位置
        // 提示：你需要用到 *p 和 p++
        printf("%d ",*p );
		p++; 
    }
    
    return 0;
}
