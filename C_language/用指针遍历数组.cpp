#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    
    // arr 是数组的名字，它其实就是指向第一个元素（10）的指针
    // 所以 *arr 就等于 10
    
    printf("用指针遍历数组：\n");
    
    for (int i = 0; i < 5; i++) {
        // 你的任务：
        // 这里的 printf 不能用 arr[i]
        // 请用指针写法 *(_____) 来代替
        
        printf("%d ", *(arr+i) ); 
    }
    
    return 0;
}
