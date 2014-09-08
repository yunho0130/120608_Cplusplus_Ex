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

};

class VIP : public Person
{
public:
	int money;

	void show_money()
	{
		cout<<"¿¬ºÀ:"<<money<<endl;
	}
};

void main()
{
	Person p1(10);
	VIP v1(10);
	p1.show_age();
	v1.age=20;
	v1.money=30000;
	v1.show_age();
	v1.show_money();
}
