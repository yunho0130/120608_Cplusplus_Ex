#include <iostream>
using namespace std;
int n=1;
class Person
{
public:
	int age;
	void show_age()
	{
		cout<<"³ªÀÌ:"<<age<<endl;
	}
	virtual	void show_money()
	{
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
	Person * container[100];
	Person &ref
	{
		ref.container[n]= new Person(10);
		n++;
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
		: Person(_age2), money(2000)
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
	Person * ptr1;
	Person * ptr2;
	ptr1= new Person(1);
	ptr1->show_age();
	ptr2= new VIP(99);
	ptr2->show_money();
	ptr2->show_age();
	delete ptr1, ptr2;



}
