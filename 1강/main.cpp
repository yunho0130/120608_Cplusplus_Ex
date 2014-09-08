#include <iostream>
using namespace std;

class CPerson {
public:
	int age;
	char name[20]; 
	char job[20];
public:
	virtual void printdata() {
		cout << "나이: " << age << endl;
		cout << "이름: " << name << endl;
	}
};

class CStudent : public CPerson {
public:
	int Eng;
	int Math;
	int Cplus;
	void printdata() {
		CPerson::printdata();
		cout << "구분: 학생" << std::endl;
		cout << "<<과목별 성적>>" << std::endl;
		cout << " 영어 " <<Eng << " 수학 " << Math << " C++ " << Cplus << endl;
	}
};

class CProfessor : public CPerson {
public: 
	int Salary;
	void printdata() {
		CPerson::printdata();
		cout << "구분: 교수" << std::endl;
		cout << "연봉: " << Salary << endl;
		
	}
	
};

void main() {
	CPerson per;
	CStudent stu;
	CProfessor pro;
	
	per.age = 23;
	strcpy(per.name,"맹윤호");
	per.printdata();
	cout << " -------- 구 분 선 ---------- " << std::endl;
	
	stu.age = 20;
	strcpy(stu.name,"다솔");
	stu.Eng = 100;
	stu.Cplus = 98;
	stu.Math = 80;
	stu.printdata();
	cout << " -------- 구 분 선 ---------- " << std::endl;
	
	pro.age = 50;
	strcpy(pro.name,"홍길동");
	pro.Salary = 4000;
	
	CPerson *p[100];
	
	p[0] = &per;
	p[1] = &stu;
	p[2] = &pro;
	
	p[2]->printdata();
	
	
	cout << " -------- 구 분 선 ---------- " << endl;
	
	
	
	cout << "데이터크기(정렬순)" << std::endl << sizeof(per) << endl << sizeof(stu) << sizeof(pro) << std::endl;
	
};