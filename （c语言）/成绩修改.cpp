#include <stdio.h>

void addPoints(int arr[], int len) {
	for(int i=0;i<len;i++){
		arr[i] = arr[i] + 5;
	}
    // 请在这里写一个循环
    // 把 arr[i] 变成 arr[i] + 5
}

int main() {
    int scores[5] = {88, 92, 70, 100, 59};
    
    // 调用函数
    addPoints(scores, 5);
    
    // 打印看看变了没
    for(int i=0; i<5; i++) {
        printf("%d ", scores[i]);
    }
    return 0;
}
