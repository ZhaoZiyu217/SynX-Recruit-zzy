#include "tetris.h"
#include <stdlib.h>
#include <time.h>


// 初始化游戏
void init_game(GameState *game) {
    // 初始化棋盘为全空（用0表示空）
    for (int y = 0; y < BOARD_HEIGHT; y++) {
        for (int x = 0; x < BOARD_WIDTH; x++) {
            game->board[y][x] = 0;
        }
    }
    
    // 初始化游戏状态
    game->score = 0;
    game->game_over = false;
    
    // 设置随机种子
    srand(time(NULL));
}

// 碰撞检测
bool check_collision(const GameState *game) {
    // 暂时返回false，后面再完善
    return false;
}