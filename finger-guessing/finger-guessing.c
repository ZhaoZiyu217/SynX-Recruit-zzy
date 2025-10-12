#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player_choice, computer_choice;
    int player_score = 0, computer_score = 0;
    int round = 1;
    
    srand(time(NULL));
    
    printf("=== 猜拳游戏（三局两胜制） ===\n");
    
    while (player_score < 2 && computer_score < 2 && round <= 3) {
        printf("\n=== 第%d局 ===\n", round);
        printf("当前比分：玩家 %d - %d 电脑\n", player_score, computer_score);
        printf("请出拳：1-石头 2-剪刀 3-布\n");
        printf("请输入你的选择：");
        scanf("%d", &player_choice);
        
        // 验证输入
        if (player_choice < 1 || player_choice > 3) {
            printf("输入无效！请重新输入。\n");
            continue;
        }
        
        // 电脑随机出拳
        computer_choice = rand() % 3 + 1;
        
        // 显示双方选择
        printf("你出了：");
        switch(player_choice) {
            case 1: printf("石头\n"); break;
            case 2: printf("剪刀\n"); break;
            case 3: printf("布\n"); break;
        }
        
        printf("电脑出了：");
        switch(computer_choice) {
            case 1: printf("石头\n"); break;
            case 2: printf("剪刀\n"); break;
            case 3: printf("布\n"); break;
        }
        
        // 判断胜负
        if (player_choice == computer_choice) {
            printf("平局！不计分，重新开始本局\n");
            continue; // 平局不进入下一轮，重新开始本局
        } else if ((player_choice == 1 && computer_choice == 2) ||
                   (player_choice == 2 && computer_choice == 3) ||
                   (player_choice == 3 && computer_choice == 1)) {
            printf("你赢了这一局！\n");
            player_score++;
        } else {
            printf("电脑赢了这一局！\n");
            computer_score++;
        }
        
        round++;
    }
    
    // 显示最终结果
    printf("\n=== 游戏结束 ===\n");
    printf("最终比分：玩家 %d - %d 电脑\n", player_score, computer_score);
    if (player_score > computer_score) {
        printf("恭喜你获得最终胜利！\n");
    } else if (computer_score > player_score) {
        printf("很遗憾，电脑获得了胜利！\n");
    } else {
        printf("平局！\n");
    }
    
    return 0;
}