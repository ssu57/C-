class TicTacToe {
public:
	TicTacToe();
	void play();
private:
	char board[3][3]; // 3x3 ������
	char currentPlayer;
	bool gameOver;
};