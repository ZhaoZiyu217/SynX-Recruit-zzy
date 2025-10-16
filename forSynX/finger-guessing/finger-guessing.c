#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    int player_choice, computer_choice;
    int player_score = 0, computer_score = 0;
    int round = 1;
    char input[10];
    int cheat_mode = 0; // 作弊模式标志
    
    srand(time(NULL));
    
    printf("=== 猜拳游戏（五局三胜制） ===\n");
    printf("提示：输入 zzz 进入作弊模式\n");
    
    while (player_score < 3 && computer_score < 3 && round <= 5) {
        printf("\n=== 第%d局 ===\n", round);
        printf("当前比分：玩家 %d - %d 电脑\n", player_score, computer_score);
        printf("请出拳：1-石头 2-剪刀 3-布（或输入zzz作弊）\n");
        printf("请输入你的选择：");
        
        // 读取输入
        scanf("%s", input);
        
        // 检查是否输入zzz进入作弊模式
        if (strcmp(input, "zzz") == 0) {
            cheat_mode = 1;
            printf("已进入作弊模式！每把必胜！\n");
            continue; // 重新输入选择
        }
        
        // 转换为数字
        player_choice = atoi(input);
        
        // 验证输入
        if (player_choice < 1 || player_choice > 3) {
            printf("输入无效！请重新输入。\n");
            continue;
        }
        
        // 电脑随机出拳（作弊模式下电脑永远输）
        if (cheat_mode) {
            // 作弊模式：电脑永远出输给你的拳
            computer_choice = (player_choice == 1) ? 2 : 
                             (player_choice == 2) ? 3 : 1;
        } else {
            computer_choice = rand() % 3 + 1;
        }
        
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
            continue;
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
    if (cheat_mode) {
        printf("（作弊模式）");
    }
    if (player_score > computer_score) {
        printf("恭喜你获得最终胜利！\n");
    } else if (computer_score > player_score) {
        printf("很遗憾，电脑获得了胜利！\n");
    } else {
        printf("平局！\n");
    }
    
    return 0;
}