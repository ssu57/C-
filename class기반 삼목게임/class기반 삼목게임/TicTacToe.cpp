#include "TicTacToe.h"
#include <iostream>
#include<string>
using namespace std;

TicTacToe::TicTacToe() {
    currentPlayer = 'o';
    gameOver = false;
    // ���� �ʱ�ȭ
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            board[i][j] = '-';
    cout << "===== 3x3 ��� ���� ���� =====\n";
}


// ������ ���
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

// �� ����
bool placePiece(char board[3][3], int row, int col, char piece) {
    if (row >= 1 && row <= 3 && col >= 1 && col <= 3 && board[row - 1][col - 1] == '-') {
        board[row - 1][col - 1] = piece;
        return true;
    }
    return false;
}

// �¸� ���� Ȯ��
bool checkWin(char board[3][3], char player) {
    // ����, ���� Ȯ��
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true; // ����
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true; // ����
    }
    // �밢�� Ȯ��
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true; // ���� ��ܿ��� ������ �ϴ� �밢��
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true; // ������ ��ܿ��� ���� �ϴ� �밢��
    return false;
}

// ������ Ȯ��
bool checkDraw(char board[3][3]) {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (board[i][j] == '-')
                return false;
    return true;
}

// ���� ����
void TicTacToe::play() {
    while (!gameOver) {
        printBoard(board); // ������ ���

        int row, col;
        cout << "�÷��̾� " << currentPlayer << "�� �����Դϴ�.\n";
        cout << "��� ���� �Է��ϼ��� (��: 1 2): ";
        cin >> row >> col;

        if (placePiece(board, row, col, currentPlayer)) {
            if (checkWin(board, currentPlayer)) {
                printBoard(board);
                cout << "�����մϴ�! �÷��̾� " << currentPlayer << "��(��) �̰���!\n";
                gameOver = true;
            }
            else if (checkDraw(board)) {
                printBoard(board);
                cout << "������ �����ϴ�!\n";
                gameOver = true;
            }
            else {
                currentPlayer = (currentPlayer == 'o') ? 'x' : 'o';
            }
        }
        else {
            cout << "�߸��� �Է��Դϴ�. �ٽ� �Է��ϼ���.\n";
        }
    }
}
