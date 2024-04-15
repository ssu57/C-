#include "TicTacToe.h"
#include <iostream>
#include<string>
using namespace std;

TicTacToe::TicTacToe() {
    currentPlayer = 'o';
    gameOver = false;
    // 보드 초기화
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            board[i][j] = '-';
    cout << "===== 3x3 상목 게임 시작 =====\n";
}


// 오목판 출력
void printBoard(char board[3][3]) {
    cout << "  1 2 3\n";
    for (int i = 0; i < 3; ++i) {
        cout << i + 1 << " ";
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// 돌 놓기
bool placePiece(char board[3][3], int row, int col, char piece) {
    if (row >= 1 && row <= 3 && col >= 1 && col <= 3 && board[row - 1][col - 1] == '-') {
        board[row - 1][col - 1] = piece;
        return true;
    }
    return false;
}

// 승리 여부 확인
bool checkWin(char board[3][3], char player) {
    // 가로, 세로 확인
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true; // 가로
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true; // 세로
    }
    // 대각선 확인
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true; // 왼쪽 상단에서 오른쪽 하단 대각선
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true; // 오른쪽 상단에서 왼쪽 하단 대각선
    return false;
}

// 비겼는지 확인
bool checkDraw(char board[3][3]) {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (board[i][j] == '-')
                return false;
    return true;
}

// 게임 실행
void TicTacToe::play() {
    while (!gameOver) {
        printBoard(board); // 오목판 출력

        int row, col;
        cout << "플레이어 " << currentPlayer << "의 차례입니다.\n";
        cout << "행과 열을 입력하세요 (예: 1 2): ";
        cin >> row >> col;

        if (placePiece(board, row, col, currentPlayer)) {
            if (checkWin(board, currentPlayer)) {
                printBoard(board);
                cout << "축하합니다! 플레이어 " << currentPlayer << "이(가) 이겼어요!\n";
                gameOver = true;
            }
            else if (checkDraw(board)) {
                printBoard(board);
                cout << "게임이 비겼습니다!\n";
                gameOver = true;
            }
            else {
                currentPlayer = (currentPlayer == 'o') ? 'x' : 'o';
            }
        }
        else {
            cout << "잘못된 입력입니다. 다시 입력하세요.\n";
        }
    }
}
