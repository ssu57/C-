#include<iostream>
using namespace std;

class Circle {
public:
	double calcArea();

	int radius;
	string color;
};
double Circle::calcArea() {
	return 3.14 * radius * radius;
}
int main() {
	Circle c;
	c.radius = 10;
	cout << c.calcArea() << endl;
	return 0;
}
/*
#include<iostream>
using namespace std;

class Circle {
public:
	int radius;//������
	string color;//����

	double calcArea() {
		return 3.14 * radius * radius;
	}
};
int main() {
	Circle obj;

	obj.radius = 100;
	obj.color = "blue";

	cout << "���� ����= " << obj.calcArea() << "\n";
}

#include<iostream>
using namespace std;

class Rectangle {
public:
	int width, height;
	int calcArea() {
		return width * height;
	}
};
int main() {
	Rectangle obj;

	obj.width = 3;
	obj.height = 4;
	int area = obj.calcArea();
	cout << "������� ���� = " << area << endl;
	return 0;
}

#include<iostream>
#include<string>
using namespace std;

class PrintData {
public:
	void print(int i) { cout << i << endl; }
	void print(double f) { cout << f << endl; }
	void print(string s = "No Data!") { cout << s << endl; }//s�� ���� �ƹ��͵� ������ no data����
};
int main() {
	PrintData obj;

	obj.print(1);
	obj.print(3.14);
	obj.print("C++14 is cool.");
	obj.print();
	return 0;
}
*/