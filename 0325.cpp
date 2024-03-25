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

		cout << "오류: 길이가 다름" << endl;
	else {
		for (int i = 0; i < s1.length(); i++) {
			if (s1[i] != s2[i])
				count += 1;
		}
		cout << "해밍 거리는" << count << endl;
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
		cout << "동일한 문자열입니다." << endl;
	else
		cout << "동일한 문자열이 아닙니다." << endl;
	if (s1 > s2)
		cout << "s1이 앞이 있습니다." << endl;
	else
		cout << "s2가 앞이 있습니다." << endl;
	return 0;
}

#include<iostream>
#include<string>
using namespace std;

int main() {
	string s1, s2,s3;
	cout << "이름을 입력하시오 : ";
	cin >> s1;
	cout << "주소를 입력하시오 : ";
	cin >> s2;
	s3 = s2 + "의 " + s1 + "씨 안녕하세요?";
	cout << s3 << endl;
	return 0;
}

#include<iostream>
#include<string>
using namespace std;

int main() {
	string s = "When in Rome, do as the Romans.";

	int index = s.find("Rome");
	cout << index << endl;//Rome 위치 찾기=8
	return 0;
}

#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cout << "주민등록번호를 입력하시오:";
	cin >> s;

	cout << "-가 제거된 주민등록번호: ";
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
	string list[] = { "철수","영희","길동" };
	for (auto& x : list)
		cout << (x + "야 안녕!") << endl;
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

		cout << "오류: 길이가 다름" << endl;
	else {
		for (int i = 0; i < s1.length(); i++) {
			if (s1[i] != s2[i])
				count += 1;
		}
		cout << "해밍 거리는" << count << endl;
	}
	return 0;
}
*/