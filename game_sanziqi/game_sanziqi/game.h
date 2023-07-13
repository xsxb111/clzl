#define _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL],int row ,int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
//IsWin();
//返回四种状态
//玩家赢--‘*’
//电脑赢--‘#’
//平局--‘O’
//继续--'C'
char IsWin(char board[ROW][COL], int row, int col);