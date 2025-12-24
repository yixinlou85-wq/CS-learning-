#include <stdio.h>

// 函数定义：接收一个整型指针
void addFive(int *p) {
    // 任务：在这里写代码，让 p 指向的那个整数增加 5
    // 提示：不能只写 p + 5，因为 p 是地址
    // __________________; 
    *p = *p+5;
}

int main() {
    int score = 80;
    
    // 调用函数，注意这里传的是地址
    addFive(&score); 
    
    printf("现在的分数: %d\n", score); // 期望输出 85
    return 0;
}
