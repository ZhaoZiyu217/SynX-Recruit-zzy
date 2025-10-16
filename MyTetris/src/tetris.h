// 这是tetris.h的全部内容，直接替换你原来的tetris.h
#ifndef TETRIS_H  // 防止头文件被重复包含（必须加）
#define TETRIS_H

#include<stdbool.h>

// 1. 定义棋盘的宽高（和你game.c里用的一致）
#define BOARD_WIDTH 10
#define BOARD_HEIGHT 20

// 2. 定义游戏状态的结构体（存储棋盘、分数等信息）
typedef struct {
    int board[BOARD_HEIGHT][BOARD_WIDTH];  // 游戏棋盘（对应你game.c里的game->board）
    int score;                             // 分数（对应game->score）
    bool game_over;                         // 游戏结束标记（对应game->game_over）
} GameState;

// 3. 声明函数（告诉其他文件这些函数的存在）
// 初始化游戏的函数（对应你game.c里的init_game）
void init_game(GameState *game);

// 碰撞检测的函数（对应你game.c里的check_collision）
bool check_collision(const GameState *game);

#endif  // 结束头文件保护