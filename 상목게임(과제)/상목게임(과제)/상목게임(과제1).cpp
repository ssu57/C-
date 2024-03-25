/*상목 게임
1. 배열[3][3] 만들기
2. 2인 사용자 입력(o,x)
3. 기존 사용자가 입력한 곳에 입력x
4. 입력방법[*.*]
5. ㅡ,ㅣ,\,/ 을 인지하여 승리 알림

if문, for문, case문도 괜츈, 다 찼으면 게임 오버
*/
/*#include<iostream>
using namespace std;

#define HIGH 3
#define WIGH 3
int main()
{
	char table[HIGH][WIGH];//char로 한 이유:
	int x, y, r, c;
	//보드 초기화
	for (x = 0; x < HIGH; x++)
		for (y = 0; y < WIGH; y++)
			table[x][y] = ' ';
	for (r = 0; r < 9; r++) {//3빙고니까 최대 9번
		cout << "(x,y)좌표: "<<endl;
		cin >> x >> y;//x에 y를 scanf
		table[x][y] = (r % 2 == 0) ? ' x' : ' o';//r을 2로 나눌때 0과 같으면 x, 아니면 o

		for (c = 0; c < HIGH; c++) {
			cout << "---ㅣ---ㅣ---" << endl;
			cout << table[c][0] << "  ㅣ" << table[c][1] << "  ㅣ" << table[c][2] << "  ㅣ" << endl;
		}
		cout << "---ㅣ---ㅣ---" << endl;
	}
	return 0;
}*/

#include <iostream>
#include<string>
using namespace std;

char board[3][3]; // 3x3 오목판

int main() {
    char currentPlayer = 'o'; // 선공 플레이어
    bool gameOver = false; // 게임 종료 여부

    // 오목판 초기화
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            board[i][j] = '-';

    cout << "===== 3x3 상목 게임 시작 =====\n";

    while (!gameOver) {
        // 오목판 출력
        cout << "  1 2 3\n";
        for (int i = 0; i < 3; ++i) {
            cout << i + 1 << " ";
            for (int j = 0; j < 3; ++j) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }

        int row, col;
        cout << "플레이어 " << currentPlayer << "의 차례입니다.\n";
        cout << "행과 열을 입력하세요 (예: 1 2): ";
        cin >> row >> col;

        // 입력값이 유효한지 확인하고 돌을 놓음
        if (row >= 1 && row <= 3 && col >= 1 && col <= 3 && board[row - 1][col - 1] == '-') {
            board[row - 1][col - 1] = currentPlayer;

            // 승리 여부 확인
            bool win = false;
            // 가로, 세로 확인
            for (int i = 0; i < 3; ++i) {
                if (board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer)
                    win = true; // 가로
                if (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer)
                    win = true; // 세로
            }
            // 대각선 확인
            if (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer)
                win = true; // 왼쪽 상단에서 오른쪽 하단 대각선
            if (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer)
                win = true; // 오른쪽 상단에서 왼쪽 하단 대각선
            if (win) {
                cout << "축하합니다! 플레이어 " << currentPlayer << "이(가) 이겼어요!\n";
                gameOver = true;
            }
            else {
                // 플레이어 변경
                currentPlayer = (currentPlayer == 'o') ? 'x' : 'o';
            }
        }
        else {
            cout << "잘못된 입력입니다. 다시 입력하세요.\n";
        }
    }

    return 0;
}

