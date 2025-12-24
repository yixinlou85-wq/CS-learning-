#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = NULL; // 定义一个指针，暂时指为空

    // 任务1：请在这里写一行代码，让 ptr 指向 num
    ptr = &num;
    // ___________;

    printf("原本的值: %d\n", num);

    // 任务2：请在这里写一行代码，通过 ptr 把 num 的值改成 2025
    *ptr = 2025;
    // ___________;

    printf("通过指针修改后的值: %d\n", num);
    
    return 0;
}
