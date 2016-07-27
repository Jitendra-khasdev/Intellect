#include <iostream>

using namespace std;

class student{

	int a, b;

	public:
		student(int x, int y)
		{
			a = x;
			b = y;
		}

		student(student &s)
		{
			a = s.a;
			b = s.b;
		}
		int get_a() {return a;}
		int get_b() {return b;}

};


int main()
{
	student st(10, 20);
	student s = st;
	
	cout<<st.get_a()<<" "<<st.get_b()<<"\n";
	cout<<s.get_a()<<" "<<s.get_b()<<"\n";

	return 0;
}
