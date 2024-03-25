/*
#include<iostream>
using namespace std;

//함수 정의
int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int n;
	n = max(2, 3);//함수 호출
	cout << "연산결과= " << n << endl;
	return 0;
}


#include<iostream>
using namespace std;
int Add(int x, int y)
{
	int add = x + y;
	cout << "연산결과= " << add << endl;
	return add;
}
int Sub(int x, int y)
{
	int sub = x - y;
	cout << "연산결과= " << sub << endl;
	return sub;
}
int Mul(int x, int y)
{
	int mul = x / y;
	cout << "연산결과= " << mul << endl;
	return mul;
}
int Div(int x, int y)
{
	int div = x * y;
	cout << "연산결과= " << div << endl;
	return div;
}
int main() {
	int x, y;
	char cal;
	cout << "계산할 숫자를 입력하시오(예시:3+5)" << endl;
	cin >> x>>cal>> y;
	switch(cal) {
	case '+':
		cout<<Add(x,y);
		break;
	case '-':
		cout<<Sub(x, y);
		break;
	case '/':
		cout<<Mul(x, y);
		break;
	case '*':
		cout<<Div(x, y);
		break;
	default:
		cout << "잘못된 연산자입니다." << endl;
	}

}

#include<iostream>
using namespace std;
int main()
{
	int a = 100, b = 200;

	cout << "a=" << a << "  b=" << b << endl;
	swap(a, b);
	cout << "a=" << a << "  b=" << b << endl;
	return 0;
}

#include<iostream>
using namespace std;
void swap(int& x, int& y)//매개변수& 차이
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}
int main()
{
	int a = 100, b = 200;

	cout << "a=" << a << "  b=" << b << endl;
	swap(a, b);
	cout << "a=" << a << "  b=" << b << endl;
	return 0;
}

#include<iostream>
using namespace std;
void swap(int x, int y)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}
int main()
{
	int a = 100, b = 200;

	cout << "a=" << a << "  b=" << b << endl;
	swap(a, b);
	cout << "a=" << a << "  b=" << b << endl;
	return 0;
}
*/

#include<iostream>
using namespace std;
int square(int i) {
	cout << "square(int)호출" << endl;
	return i * i;
}
double square(double i) {
	cout << "square(double)호출" << endl;
	return i * i;
}
int main() {
	cout << square(10) << endl;
	cout << square(2.0) << endl;
	return 0;
}