#include<iostream>
using namespace std;

class Time {
public:
	Time(int h, int m);
	void inc_hour();
	void print();

	int getHour() { return hour; }
	int getMinute() { return minute; }
	void setHour(int h) { hour = h; }
	void setMinute(int m) { minute = m; }
private:
	int hour;
	int minute;
};
int main()
{
	Time a{ 0,0 };
	a.setHour(6);
	a.setMinute(30);

	a.print();
	return 0;
}


/*
#include<windows.h>
using namespace std;

class Circle {
public:
	void init(int xval, int yval, int r);
	void draw();
	void move();
private:
	int x, y, radius;

};
//
void Circle::init(int xval, int yval, int r)
{
	x = xval;
	y = yval;
	radius = r;
}
void Circle::draw() {
	HDC hdc = GetWindowDC(GetForegroundWindow());
	Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
}
void Circle::move() {
	x += rand() % 50;
}
//
int main() {
	Circle c1;
	Circle c2;

	c1.init(100, 100, 50);
	c2.init(100, 200, 40);
	for (int i = 0; i < 20; i++) {
		c1.move();
		c1.draw();
		c2.move();
		c2.draw();
		Sleep(10000);
	}
	return 0;
}

#include<iostream>
using namespace std;

class Time {
public:
	int hour;
	int minute;
	Time() {
		hour = 0;
		minute = 0;
	}
	Time(int h, int m) {
		hour = h;
		minute = m;
	}
	void print() {
		cout << hour << ":" << minute << endl;
	}
};
int main()
{
	Time a;
	Time b{ 10,25 };
	a.print();
	b.print();
	return 0;
}

#include<iostream>
using namespace std;

class Time {
public:
	int hour;
	int minute;

	Time(int h = 0, int m = 0) {
		hour = h;
		minute = m;
	}
	void print() {
		cout << hour << ":" << minute << endl;
	}
};
int main()
{
	Time a;
	Time b{ 10,25 };
	a.print();
	b.print();
	return 0;
}
*/