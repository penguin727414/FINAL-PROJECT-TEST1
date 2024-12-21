#include <stdio.h>
#include "number_generator.h"

int main() {
    // 測試數字生成功能
    int number = generate_number();
    printf("生成的隨機數字是：%d\n", number);
    return 0;
}
