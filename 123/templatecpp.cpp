#include <iostream>
using namespace std;

template <typename T>
T Add(T num1, T num2)
{
	return num1+num2;
}

int main(void)
{
	cout<< Add<<int>>(15,20)<<endl;
}

