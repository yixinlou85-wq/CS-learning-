#include <stdio.h>
#include <string.h> // 必须头文件

int main() {
    char s1[20] = "Apple";
    char s2[20] = "Banana";
    char temp[20]; // 空盘子

    // 1. 测试比较
    int result = strcmp(s1, s2);
    if (result < 0) {
        printf("结论：Apple 在 Banana 前面 (A比B小)\n");
    }

    // 2. 测试复制（模拟交换过程）
    printf("交换前: s1=%s, s2=%s\n", s1, s2);
    
    strcpy(temp, s1); // 把 Apple 倒进空盘子
    strcpy(s1, s2);   // 把 Banana 倒进 s1
    strcpy(s2, temp); // 把 Apple 倒进 s2
    
    printf("交换后: s1=%s, s2=%s\n", s1, s2);

    return 0;
}
