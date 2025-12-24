#include <stdio.h>

// 提示：接收数组时写 int arr[]，接收长度写 int len
int findMax(int arr[], int len) {
	
    int max = arr[0]; // 假设第一个人是冠军
    	for(int i=1;i<len;i++){
			if(arr[i]>max){
				max = arr[i];
			}
		}
    // 请写一个循环，从第2个人(下标1)开始比
    // 如果发现比 max 还可以大的，就更新 max  
    return max;
}

int main() {
    // 这是全班 5 个人的成绩
    int scores[5] = {88, 92, 70, 100, 59};
    
    // 调用函数
    // 提示：传数组的时候，只写数组名字 scores 即可，不要写 []
    int maxScore = findMax(scores, 5);
    
    printf("最高分是: %d\n", maxScore);
    return 0;
}
