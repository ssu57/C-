#include<iostream>
using namespace std;
int main()
{
	
	return 0;
}

/*
#include<iostream>
using namespace std;
int main()
{
	int n = 10;
	while (n > 0) {
		cout << n << " ";
		n--;
	}
	cout << "�߻�!\n";
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int n;
	int i = 1;
	cout << "������ �߿��� ����ϰ� ���� ���� �Է��Ͻÿ�: " << endl;
	cin >> n;
	while (i<=9) {
		cout << n << "*" << i << "=" << n * i << endl;
		i++;
	}
	return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	do {
		cout << "���ڿ��� �Է��Ͻÿ�: ";
		getline(cin, str);
		cout << "������� �Է�: " << str << endl;
	} while (str != "����");
	return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
	int sum = 0;
	for (int i = 0; i <= 10; i++) {
		sum += i;

	}
	cout<<"1���� 10������ ������ ��= "<<sum<<endl;
	return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
	for (int i = 1; i < 10; i++) {
		cout << i << " ";
		if (i == 7)
			break;
	}
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	do {
		i++;
		cout << "continue ���� ���� �ִ� ����" << endl;
		continue;
		cout << "continue ���� �Ŀ� �ִ� ����" << endl;
	} while (i < 3);
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	srand(time(NULL));
	int answer = rand() % 100;
	int guess;
	int tries = 0;

	do {
		cout << "������ �­����ÿ�: ";
		cin >> guess;
		tries++;

		if (guess > answer)
			cout << "�ٿ�!";
		if(guess < answer)
			cout << "��!";
	} while (guess != answer);

	cout << "�����մϴ�. �õ�Ƚ��: " << tries << endl;
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int ans;
	cout << "������� ����" << endl;
	while (true) {
		int x = rand() % 100;
		int y = rand() % 100;
		cout << x << "+" << y << "=";
		cin >> ans;
		if (x + y == ans) {
			cout << "�����Դϴ�:)" << endl;
			break;
		}
		else
			cout << "�ƽ��� �ٽ�����" << endl;
	}
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	const int STUDENTS = 10;
	int scores[STUDENTS];
	int sum = 0;
	int i, average;

	for (i = 0; i < STUDENTS; i++) {
		cout << "�л����� ������ �Է��Ͻÿ�: ";
		cin >> scores[i];
	}
	for (i = 0; i < STUDENTS; i++) {
		sum += scores[i];
	}
	average = sum / STUDENTS;
	cout << "���� ���= " << average << endl;
	return 0;
}
*/