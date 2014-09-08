#include <iostream>
using namespace std;


class Person {
	char *name;
	static int count;
	const int id;
	int age;
public:
	Person(char* _name, int _age) : id(count+1000)
	{
		name=new char[strlen(_name)+1];
		strcpy(name, _name);
		age=_age;
		cout<<count<<"번째 Person 객체 생성"<< endl;
		count++;
	}
	Person(const Person &copy) : age(copy.age), id(count+1000)
	{
		name=new char[strlen(copy.name)+1];
		strcpy(name, copy.name);
	}

	void ShowData(){
		cout<<"이름 :"<< name << endl;
		cout<<"학번:"<< id << endl;
	}
	~Person()
	{
		delete []name;
		cout<<"delete"<<endl;
	}
};

class Tester : public Person
{
	char *test;
	Tester(char *_test)
	{
		test=new char[strlen(_test)+1];
		strcpy(test,_test);
	}
public:
	ShowTestMessage()
	{
		cout<<"test finish"<<endl;
	}
};
~Tester()
{
	delete []test;
}



int Person::count=1;

void main(void){
	Person p1("Lee", 13);
	Person p2("Hong", 22);
	Person p3(p1);
	p1.ShowData();
	p2.ShowData();
	p3.ShowData();
}
