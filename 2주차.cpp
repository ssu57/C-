//섭씨 온도 입력하여 화씨 온도로 변환
#include<iostream>
using namespace std;
int main()
{
	double f_temp;
	double c_temp;
	cin >> c_temp;
	f_temp = (c_temp * 1.8) + 32;
	cout << "섭씨온도" << c_temp << "도는 화씨온도" << f_temp << "입니다." << endl;
	return 0;
}

/*
#include<iostream>
using namespace std;
int main()
{
	int a, b, c, largest;
	cout << "3개의 정수를 입력하시오: ";
	cin >> a >> b >> c;
	if (a > b && a > c)
		largest = a;
	else if (b<a && b>c)
		largest = b;
	else
		largest = c;
	cout << "가장 큰 정수는" << largest << endl;
	return 0;
}
//가위바위보 프로그램
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
	cout << "이름을 입력하시오: ";
	cin >> name;		//cin==scanf()
	cout << name << "님을 환영합니다." << endl;
	return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
	int money;
	int candy_price;
	cout << "현재 가지고 있는 돈: ";
	cin >> money;
	cout << "캔디의 가격: ";
	cin >> candy_price;
	int a = money / candy_price;
	int b = money % candy_price;
	cout << "최대로 살 수 있는 캔디의 개수= " << a << endl;
	cout << "캔디 구입 후 남은 돈= " << b << endl;
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	double f_temp = 60;
	double c_temp;

	c_temp = (5.0 / 9.0) * (f_temp - 32);
	cout << "화씨온도" << f_temp << "도는 섭씨온도" << c_temp << "입니다." << endl;
	return 0;
}

##화씨 온도를 사용자로부터 받게끔 수정
#include<iostream>
using namespace std;
int main()
{
	double f_temp;
	double c_temp;
	cin >> f_temp;
	c_temp = (5.0 / 9.0) * (f_temp - 32);
	cout << "화씨온도" << f_temp << "도는 섭씨온도" << c_temp << "입니다." << endl;
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	srand(time(NULL));
	int dice1 = (rand() % 6) + 1;
	int dice2 = (rand() % 6) + 1;

	cout << "두 주사위의 합= " << dice1 + dice2 << endl;
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
	//&& 모두 참이면 참, 나머지 거짓
	//|| 하나만 참이라도 참, 나머지 거짓
	int x, y;
	cout << "x값을 입력하시오: ";//입력안내 출력
	cin >> x;
	cout << "y값을 입력하시오: ";
	cin >> y;
	if (x > y)
		cout << "x가 y값보다 크다." << endl;
	else if (x = y)
		cout << "x와 y값이 같다." << endl;
	else
		cout << "x가 y값보다 작다." << endl;
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int a, b, c, largest;
	cout << "3개의 정수를 입력하시오: ";
	cin >> a >> b >> c;
	if (a > b && a > c)
		largest = a;
	else if (b<a && b>c)
		largest = b;
	else
		largest = c;
	cout << "가장 큰 정수는" << largest << endl;
	return 0;
}
*/