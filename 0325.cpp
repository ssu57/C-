#include<iostream>
#include<string>
using namespace std;

int main() {
	string s1, s2;
	int count = 0;

	cout << "DNA1: ";
	cin >> s1;
	cout << "DNA2: ";
	cin >> s2;

	if (s1.length() != s2.length())

		cout << "����: ���̰� �ٸ�" << endl;
	else {
		for (int i = 0; i < s1.length(); i++) {
			if (s1[i] != s2[i])
				count += 1;
		}
		cout << "�ع� �Ÿ���" << count << endl;
	}
	return 0;
}

/*
#include<iostream>
#include<string>
using namespace std;

int main() {
	string s1 = "Slow", s2 = "steady";
	string s3 = "the race";
	string s4;

	s4 = s1 + " and " + s2 + " wins " + s3;
	cout << s4 << endl;
	return 0;
}

#include<iostream>
#include<string>
using namespace std;

int main() {
	string s1 = "Hello", s2 = "World";
	if (s1 == s2)
		cout << "������ ���ڿ��Դϴ�." << endl;
	else
		cout << "������ ���ڿ��� �ƴմϴ�." << endl;
	if (s1 > s2)
		cout << "s1�� ���� �ֽ��ϴ�." << endl;
	else
		cout << "s2�� ���� �ֽ��ϴ�." << endl;
	return 0;
}

#include<iostream>
#include<string>
using namespace std;

int main() {
	string s1, s2,s3;
	cout << "�̸��� �Է��Ͻÿ� : ";
	cin >> s1;
	cout << "�ּҸ� �Է��Ͻÿ� : ";
	cin >> s2;
	s3 = s2 + "�� " + s1 + "�� �ȳ��ϼ���?";
	cout << s3 << endl;
	return 0;
}

#include<iostream>
#include<string>
using namespace std;

int main() {
	string s = "When in Rome, do as the Romans.";

	int index = s.find("Rome");
	cout << index << endl;//Rome ��ġ ã��=8
	return 0;
}

#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cout << "�ֹε�Ϲ�ȣ�� �Է��Ͻÿ�:";
	cin >> s;

	cout << "-�� ���ŵ� �ֹε�Ϲ�ȣ: ";
	for (auto& c : s) {
		if (c == '-')continue;
		cout << c;
	}
	cout << endl;
	return 0;
}

#include<iostream>
#include<string>
using namespace std;

int main() {
	string list[] = { "ö��","����","�浿" };
	for (auto& x : list)
		cout << (x + "�� �ȳ�!") << endl;
	return 0;
}

#include<iostream>
#include<string>
using namespace std;

int main() {
	string s1, s2;
	int count = 0;

	cout << "DNA1: ";
	cin >> s1;
	cout << "DNA2: ";
	cin >> s2;

	if (s1.length() != s2.length())

		cout << "����: ���̰� �ٸ�" << endl;
	else {
		for (int i = 0; i < s1.length(); i++) {
			if (s1[i] != s2[i])
				count += 1;
		}
		cout << "�ع� �Ÿ���" << count << endl;
	}
	return 0;
}
*/