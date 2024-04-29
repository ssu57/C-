#include<iostream>
#include<string>
#include <cstdlib>
using namespace std;

int main(){
	int tjd[10][5] = {0,};
	int i,j;
	int min = INT_MAX;
	srand((unsigned int)time(NULL));
	cout << "학번 | 국어 | 영어 | 수학 | 평균"<<endl;
	for (i = 0; i < 10; i++) {
		cout << tjd[i][0] << i<<"\t";//학번
		for (j = 0; j < 1; j++) {
			tjd[j][1] = rand() % 100 + 1;
			cout << tjd[j][1]<<"\t";	//국어 점수
			tjd[j][2] = rand() % 100 + 1;
			cout << tjd[j][2]<<"\t";	//영어 점수
			tjd[j][3] = rand() % 100 + 1;
			cout << tjd[j][3]<<"\t";	//수학 점수
			tjd[j][4] = tjd[j][1] + tjd[j][2] + tjd[j][3] / 3;
			cout << tjd[j][4];	//평균값
		}
		cout << endl;
	}
	for (i = 0; i < tjd[i][j]; i++) {
		if (i > min) {
			min = i;
		}
		cout << "국어|" << tjd[i][0] << "|" << min << endl;
	}
	
}