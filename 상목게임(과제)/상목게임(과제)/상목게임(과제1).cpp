/*��� ����
1. �迭[3][3] �����
2. 2�� ����� �Է�(o,x)
3. ���� ����ڰ� �Է��� ���� �Է�x
4. �Է¹��[*.*]
5. ��,��,\,/ �� �����Ͽ� �¸� �˸�

if��, for��, case���� ����, �� á���� ���� ����
*/
/*#include<iostream>
using namespace std;

#define HIGH 3
#define WIGH 3
int main()
{
	char table[HIGH][WIGH];//char�� �� ����:
	int x, y, r, c;
	//���� �ʱ�ȭ
	for (x = 0; x < HIGH; x++)
		for (y = 0; y < WIGH; y++)
			table[x][y] = ' ';
	for (r = 0; r < 9; r++) {//3����ϱ� �ִ� 9��
		cout << "(x,y)��ǥ: "<<endl;
		cin >> x >> y;//x�� y�� scanf
		table[x][y] = (r % 2 == 0) ? ' x' : ' o';//r�� 2�� ������ 0�� ������ x, �ƴϸ� o

		for (c = 0; c < HIGH; c++) {
			cout << "---��---��---" << endl;
			cout << table[c][0] << "  ��" << table[c][1] << "  ��" << table[c][2] << "  ��" << endl;
		}
		cout << "---��---��---" << endl;
	}
	return 0;
}*/

#include <iostream>
#include<string>
using namespace std;

char board[3][3]; // 3x3 ������

int main() {
    char currentPlayer = 'o'; // ���� �÷��̾�
    bool gameOver = false; // ���� ���� ����

    // ������ �ʱ�ȭ
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            board[i][j] = '-';

    cout << "===== 3x3 ��� ���� ���� =====\n";

    while (!gameOver) {
        // ������ ���
        cout << "  1 2 3\n";
        for (int i = 0; i < 3; ++i) {
            cout << i + 1 << " ";
            for (int j = 0; j < 3; ++j) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }

        int row, col;
        cout << "�÷��̾� " << currentPlayer << "�� �����Դϴ�.\n";
        cout << "��� ���� �Է��ϼ��� (��: 1 2): ";
        cin >> row >> col;

        // �Է°��� ��ȿ���� Ȯ���ϰ� ���� ����
        if (row >= 1 && row <= 3 && col >= 1 && col <= 3 && board[row - 1][col - 1] == '-') {
            board[row - 1][col - 1] = currentPlayer;

            // �¸� ���� Ȯ��
            bool win = false;
            // ����, ���� Ȯ��
            for (int i = 0; i < 3; ++i) {
                if (board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer)
                    win = true; // ����
                if (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer)
                    win = true; // ����
            }
            // �밢�� Ȯ��
            if (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer)
                win = true; // ���� ��ܿ��� ������ �ϴ� �밢��
            if (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer)
                win = true; // ������ ��ܿ��� ���� �ϴ� �밢��
            if (win) {
                cout << "�����մϴ�! �÷��̾� " << currentPlayer << "��(��) �̰���!\n";
                gameOver = true;
            }
            else {
                // �÷��̾� ����
                currentPlayer = (currentPlayer == 'o') ? 'x' : 'o';
            }
        }
        else {
            cout << "�߸��� �Է��Դϴ�. �ٽ� �Է��ϼ���.\n";
        }
    }

    return 0;
}

