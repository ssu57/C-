#include<iostream>
using namespace std;

#define WIDTH 9
#define HEIGHT 3
int main() 
{
	int table[HEIGHT][WIDTH];
	int r, c;

	for (r = 0; r < HEIGHT; r++) {
		for (c = 0; c < WIDTH; c++) {
			table[r][c] = (r + 1) * (c + 1);
		}
	}
	for (r = 0; r < HEIGHT; r++) {
		for (c = 0; c < WIDTH; c++) {
			cout << table[r][c] << ", ";
		}
		cout << endl;
	}
	return 0;
}

/*
#include<iostream>
#include<string>
using namespace std;

int main() 
{
	int list[] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i : list) {
		cout << i << " ";
	}
	cout << endl;
	return 0;
}

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int list[10];
	int max;

	for (int& elem : list) {	//&: 포인터
		elem = rand() % 100;
		cout << elem << " ";
	}
	cout << endl;
	max = list[0];
	for (auto& elem : list) {
		if (elem > max)
			max = elem;
	}
	cout << "최대값= " << max << endl;
	return 0;
}

#include<iostream>
using namespace std;

#define WIDTH 9
#define HEIGHT 3
int main()
{
	int table[HEIGHT][WIDTH];
	int r, c;

	for (r = 0; r < HEIGHT; r++) {
		for (c = 0; c < WIDTH; c++) {
			table[r][c] = (r + 1) * (c + 1);
		}
	}
	for (r = 0; r < HEIGHT; r++) {
		for (c = 0; c < WIDTH; c++) {
			cout << table[r][c] << ", ";
		}
		cout << endl;
	}
	return 0;
}
*/