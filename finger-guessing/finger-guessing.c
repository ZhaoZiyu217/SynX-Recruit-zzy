#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user_choice, comp_choice;
    // 初始化随机数种子，使每次随机结果不同
    srand((unsigned int)time(NULL));

    while (1) {
        printf("欢迎来到猜拳小游戏！赢一次即退出，输或平继续\n");
        printf("请出拳：1.剪刀 2.石头 3.布\n");
        scanf("%d", &user_choice);

        // 生成电脑的随机出拳（1 - 3）
        comp_choice = rand() % 3 + 1;

        printf("电脑出拳：");
        if (comp_choice == 1) printf("剪刀\n");
        else if (comp_choice == 2) printf("石头\n");
        else printf("布\n");

        // 判断胜负
        if ((user_choice == 1 && comp_choice == 3) || 
            (user_choice == 2 && comp_choice == 1) || 
            (user_choice == 3 && comp_choice == 2)) {
            printf("恭喜你赢了！游戏结束\n");
            break; // 赢了就退出循环，结束游戏
        } else if (user_choice == comp_choice) {
            printf("平局！继续游戏\n");
        } else {
            printf("你输了！继续游戏\n");
        }
    }

    return 0;
}