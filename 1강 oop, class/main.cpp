#include <iostream>
using namespace std;

class CPerson {
public:
	int age;
	char name[20]; 
public:
	void print() {
		cout << "����: " << age << endl;
		cout << "�̸�: " << name << endl;
	}
};

class CStudent : public CPerson {
public:
	int Eng;
	int Math;
	int Cplus;
	void printScore() {
		cout << "<<���� ����>>" << std::endl;
		cout << " ���� " <<Eng << " ���� " << Math << " C++ " << Cplus << endl;
	}
	
};

void main() {
	CPerson a;
	CStudent b;
	
	a.age = 23;
	strcpy(a.name,"����ȣ");
	a.print();
	b.age = 10;
	strcpy(b.name,"��");
	b.Math = 100;
	b.Eng = 100;
	b.Cplus = 100;
	b.print();
	b.printScore();
	
	cout << sizeof(a) << endl << sizeof(b) << endl;
	
}
