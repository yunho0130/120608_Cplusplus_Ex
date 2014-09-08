#include <iostream>
using namespace std;

class CPerson {
public:
	int age;
	char name[20]; 
	char job[20];
public:
	virtual void printdata() {
		cout << "����: " << age << endl;
		cout << "�̸�: " << name << endl;
	}
};

class CStudent : public CPerson {
public:
	int Eng;
	int Math;
	int Cplus;
	void printdata() {
		CPerson::printdata();
		cout << "����: �л�" << std::endl;
		cout << "<<���� ����>>" << std::endl;
		cout << " ���� " <<Eng << " ���� " << Math << " C++ " << Cplus << endl;
	}
};

class CProfessor : public CPerson {
public: 
	int Salary;
	void printdata() {
		CPerson::printdata();
		cout << "����: ����" << std::endl;
		cout << "����: " << Salary << endl;
		
	}
	
};

void main() {
	CPerson per;
	CStudent stu;
	CProfessor pro;
	
	per.age = 23;
	strcpy(per.name,"����ȣ");
	per.printdata();
	cout << " -------- �� �� �� ---------- " << std::endl;
	
	stu.age = 20;
	strcpy(stu.name,"�ټ�");
	stu.Eng = 100;
	stu.Cplus = 98;
	stu.Math = 80;
	stu.printdata();
	cout << " -------- �� �� �� ---------- " << std::endl;
	
	pro.age = 50;
	strcpy(pro.name,"ȫ�浿");
	pro.Salary = 4000;
	
	CPerson *p[100];
	
	p[0] = &per;
	p[1] = &stu;
	p[2] = &pro;
	
	p[2]->printdata();
	
	
	cout << " -------- �� �� �� ---------- " << endl;
	
	
	
	cout << "������ũ��(���ļ�)" << std::endl << sizeof(per) << endl << sizeof(stu) << sizeof(pro) << std::endl;
	
};