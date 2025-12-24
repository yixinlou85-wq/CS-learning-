#include <stdio.h>

int main() {
    char *depts[] = {"Sales", "IT"};
    
    printf("交换前: 1-%s, 2-%s\n", depts[0], depts[1]);

    // 任务：请写三行代码，交换 depts[0] 和 depts[1] 里存的地址
    // 提示：需要一个临时变量 char *temp;
    char *temp;
    
    // 请在此处填代码:
 	temp = depts[0];      // 把 "Sales" 的地址暂存给 temp
	depts[0] = depts[1];  // 把 "IT" 的地址给第一个格子
	depts[1] = temp;      // 把 temp 里的地址给第二个格子
	    // 1. ________
    // 2. ________
    // 3. ________

    printf("交换后: 1-%s, 2-%s\n", depts[0], depts[1]);
    return 0;
}
