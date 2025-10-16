#include "tetris.h"
#include <stdio.h>
#include<stdlib.h>

int main() {
    system("chcp 65001");
    GameState game;
    
    // 初始化游戏
    init_game(&game);
    
    printf("俄罗斯方块游戏初始化成功！\n");
    printf("棋盘大小: %d x %d\n", BOARD_WIDTH, BOARD_HEIGHT);
    printf("当前分数: %d\n", game.score);
    
    if (game.game_over) {
        printf("游戏结束状态: 是\n");
    } else {
        printf("游戏结束状态: 否\n");
    }
    
    return 0;
}