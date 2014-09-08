#include <iostream>
using namespace std;

class CPerson {
public:
	int age;
	char name[20]; 
public:
	void print() {
		cout << "나이: " << age << endl;
		cout << "이름: " << name << endl;
	}
};

class CStudent : public CPerson {
public:
	int Eng;
	int Math;
	int Cplus;
	void printScore() {
		cout << "<<과목별 성적>>" << std::endl;
		cout << " 영어 " <<Eng << " 수학 " << Math << " C++ " << Cplus << endl;
	}
	
};

void main() {
	CPerson a;
	CStudent b;
	
	a.age = 23;
	strcpy(a.name,"맹윤호");
	a.print();
	b.age = 10;
	strcpy(b.name,"너");
	b.Math = 100;
	b.Eng = 100;
	b.Cplus = 100;
	b.print();
	b.printScore();
	
	cout << sizeof(a) << endl << sizeof(b) << endl;
	
}
