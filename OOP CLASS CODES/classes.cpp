#include<iostream>
#include<string>
using namespace std;

class Employee
{
	public:
		string name;
		long int cnic;
		int id;
	void sign_in();
	void sign_out();
};

void Employee::sign_in()
{
	cout <<" signing in ---- " << endl;
}
void Employee::sign_out()
{
	cout << "signing out --- " << endl;
}
int main()
{
	Employee e1;
	e1.name = "jawad";
	cout << e1.name << endl;
	
	e1.sign_in();
	e1.sign_out();
	
	Employee *e;
	e = new Employee;
	e->name = "usman";
	cout << e->name << endl;
	e->sign_in();
	
	system ("pause");
	return 0;
}
