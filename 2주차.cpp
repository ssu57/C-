//���� �µ� �Է��Ͽ� ȭ�� �µ��� ��ȯ
#include<iostream>
using namespace std;
int main()
{
	double f_temp;
	double c_temp;
	cin >> c_temp;
	f_temp = (c_temp * 1.8) + 32;
	cout << "�����µ�" << c_temp << "���� ȭ���µ�" << f_temp << "�Դϴ�." << endl;
	return 0;
}

/*
#include<iostream>
using namespace std;
int main()
{
	int a, b, c, largest;
	cout << "3���� ������ �Է��Ͻÿ�: ";
	cin >> a >> b >> c;
	if (a > b && a > c)
		largest = a;
	else if (b<a && b>c)
		largest = b;
	else
		largest = c;
	cout << "���� ū ������" << largest << endl;
	return 0;
}
//���������� ���α׷�
#include<iostream>
using namespace std;

int main()
{
	cout << "hello world!" << endl;
	return 0;
}

================================================

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1 = "good";
	string s2 = "morning";
	string s3 = s1+" "+s2+"!";
	cout << s3 << endl;
	return 0;
}

=====================================================

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name;
	cout << "�̸��� �Է��Ͻÿ�: ";
	cin >> name;		//cin==scanf()
	cout << name << "���� ȯ���մϴ�." << endl;
	return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
	int money;
	int candy_price;
	cout << "���� ������ �ִ� ��: ";
	cin >> money;
	cout << "ĵ���� ����: ";
	cin >> candy_price;
	int a = money / candy_price;
	int b = money % candy_price;
	cout << "�ִ�� �� �� �ִ� ĵ���� ����= " << a << endl;
	cout << "ĵ�� ���� �� ���� ��= " << b << endl;
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	double f_temp = 60;
	double c_temp;

	c_temp = (5.0 / 9.0) * (f_temp - 32);
	cout << "ȭ���µ�" << f_temp << "���� �����µ�" << c_temp << "�Դϴ�." << endl;
	return 0;
}

##ȭ�� �µ��� ����ڷκ��� �ްԲ� ����
#include<iostream>
using namespace std;
int main()
{
	double f_temp;
	double c_temp;
	cin >> f_temp;
	c_temp = (5.0 / 9.0) * (f_temp - 32);
	cout << "ȭ���µ�" << f_temp << "���� �����µ�" << c_temp << "�Դϴ�." << endl;
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	srand(time(NULL));
	int dice1 = (rand() % 6) + 1;
	int dice2 = (rand() % 6) + 1;

	cout << "�� �ֻ����� ��= " << dice1 + dice2 << endl;
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	bool b;
	b = (1 == 2);
	cout << std::boolalpha;
	cout << b << endl;

	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	//&& ��� ���̸� ��, ������ ����
	//|| �ϳ��� ���̶� ��, ������ ����
	int x, y;
	cout << "x���� �Է��Ͻÿ�: ";//�Է¾ȳ� ���
	cin >> x;
	cout << "y���� �Է��Ͻÿ�: ";
	cin >> y;
	if (x > y)
		cout << "x�� y������ ũ��." << endl;
	else if (x = y)
		cout << "x�� y���� ����." << endl;
	else
		cout << "x�� y������ �۴�." << endl;
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int a, b, c, largest;
	cout << "3���� ������ �Է��Ͻÿ�: ";
	cin >> a >> b >> c;
	if (a > b && a > c)
		largest = a;
	else if (b<a && b>c)
		largest = b;
	else
		largest = c;
	cout << "���� ū ������" << largest << endl;
	return 0;
}
*/