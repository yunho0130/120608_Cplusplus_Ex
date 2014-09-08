#include <iostream>
using namespace std;

class Person
{
public:
	int age;
	void show_age()
	{
		cout<<"³ªÀÌ:"<<age<<endl;
	}
	Person(int _age)
		:age(_age)
	{
	}
	Person operator+(const Person &ref)
	{
		Person p0(age+ref.age);
		return p0;
	}
		Person operator-(const Person &ref)
	{
		Person p00(age-ref.age);
		return p00;
	}
	

};

class VIP : public Person
{
public:
	int money;

	void show_money()
	{
		cout<<"¿¬ºÀ:"<<money<<endl;
	}
	VIP(int _age2)
		: Person(_age2)
	{
	}

};

void main()
{
	Person p1(10);
	VIP v1(20);
	Person p2=p1+v1;
	Person p3=p2-p1;
	p1.show_age();
//	v1.age=40;
	v1.money=30000;
	v1.show_age();
	v1.show_money();
	p2.show_age();
	p3.show_age();
}
