#include <stdio.h>

// 1. 参数变了：我们要接收两个“整数的地址”
void swap(int *pa, int *pb) {
    // 2. 这里的 temp 是个普通整数，用来暂存数据
    // 我们要从 pa 指向的地址里“取值”
    int temp = *pa;  
    
    // 3. 把 pb 指向的值，填到 pa 指向的地方
    *pa = *pb;
    
    // 4. 把 temp 里的旧值，填到 pb 指向的地方
    *pb = temp;
}

int main() {
    int x = 10;
    int y = 20;
    
    // 5. 调用时：要把 x 和 y 的“地址”传进去
    swap(&x, &y); 
    
    printf("x=%d, y=%d", x, y); // 目标输出: x=20, y=10
    return 0;
}
