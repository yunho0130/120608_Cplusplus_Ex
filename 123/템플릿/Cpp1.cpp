#include <iostream>
using namespace std;

template <typename T>
T Add(T x, T y)
{
	return x+y;
}

void main()
{
	cout<<Add(2,3)<<endl;
	cout<<Add(2.5,3.7)<<endl;

}