#include <iostream>
using namespace std;


class Person {
	static int count;
	char *name;
	const int id;
	int age;
public:

	Person(char* _name, int _age)
		: 	id(1000+count)
	{
		name=new char[strlen(_name)+1];	
		strcpy(name, _name);
		age=_age;
		cout<<count<<"번째 Person 객체 생성"<<endl;
		count++;

	}
	void ShowData(){
		cout <<"이름:"<< name<<endl;
		cout<<"학번:"<<id<<endl;
	}
	Person(Person &copy)
		:id(1000+count), age(copy.age)
	{
		name=new char[strlen(copy.name)+1];
		strcpy(name, copy.name);
		cout<<count<<"번째 Person 객체 생성"<<endl;
	}
	~Person()
	{
		delete []name;
		cout<<"소멸자 호출 완료"<<endl;
	}

};
int Person::count=1;

void main(void){
	Person p1("Lee", 13);
	Person p2("Hong", 22);
	Person p3(p1);
	p1.ShowData();
	p2.ShowData();
	p3.ShowData();
}
