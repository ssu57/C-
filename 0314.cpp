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
	cout << "¹ß»ç!\n";
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int n;
	int i = 1;
	cout << "±¸±¸´Ü Áß¿¡¼­ Ãâ·ÂÇÏ°í ½ÍÀº ´ÜÀ» ÀÔ·ÂÇÏ½Ã¿À: " << endl;
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
		cout << "¹®ÀÚ¿­À» ÀÔ·ÂÇÏ½Ã¿À: ";
		getline(cin, str);
		cout << "»ç¿ëÀÚÀÇ ÀÔ·Â: " << str << endl;
	} while (str != "Á¾·á");
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
	cout<<"1ºÎÅÍ 10±îÁöÀÇ Á¤¼öÀÇ ÇÕ= "<<sum<<endl;
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
		cout << "continue ¹®Àå Àü¿¡ ÀÖ´Â ¹®Àå" << endl;
		continue;
		cout << "continue ¹®Àå ÈÄ¿¡ ÀÖ´Â ¹®Àå" << endl;
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
		cout << "Á¤´äÀ» ¸Â­º¸½Ã¿À: ";
		cin >> guess;
		tries++;

		if (guess > answer)
			cout << "´Ù¿î!";
		if(guess < answer)
			cout << "¾÷!";
	} while (guess != answer);

	cout << "ÃàÇÏÇÕ´Ï´Ù. ½ÃµµÈ½¼ö: " << tries << endl;
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int ans;
	cout << "»ê¼ö¹®Á¦ ½ÃÀÛ" << endl;
	while (true) {
		int x = rand() % 100;
		int y = rand() % 100;
		cout << x << "+" << y << "=";
		cin >> ans;
		if (x + y == ans) {
			cout << "Á¤´äÀÔ´Ï´Ù:)" << endl;
			break;
		}
		else
			cout << "¾Æ½±´Ù ´Ù½ÃÇÏÀÚ" << endl;
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
		cout << "ÇÐ»ýµéÀÇ ¼ºÀûÀ» ÀÔ·ÂÇÏ½Ã¿À: ";
		cin >> scores[i];
	}
	for (i = 0; i < STUDENTS; i++) {
		sum += scores[i];
	}
	average = sum / STUDENTS;
	cout << "¼ºÀû Æò±Õ= " << average << endl;
	return 0;
}
*/