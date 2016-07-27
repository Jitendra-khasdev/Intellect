#include <iostream>

using namespace std;

class student{

	int a, b;

	public:
		friend int sum();

};

int sum()
{
	student st;
	st.a = 10;
	st.b = 20;
	return st.a+st.b;
}


int main()
{
	student st;
	cout<<sum()<<"\n";
	return 0;
}
