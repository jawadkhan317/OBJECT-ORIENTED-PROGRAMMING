#include<iostream>
#include<string>
using namespace std;
class Employee
{
	public:
		string name;
		string cnic;
		int salary;
		int id;
		
		void sign_in();
		void sign_out();
		Employee();
		Employee(int salary);
		
		~Employee();
		
};

void Employee::sign_in()
{
	cout <<"signing in the Employee :" + name << endl;
}
Employee :: Employee()
{
	cout <<"Employee instance being created ---- " << endl;
	salary = 10000;
}
Employee :: Employee(int salary)
{
	cout <<"Employee (salary) instance being created with salary ---- " << endl;
	this->salary = salary;
}
Employee::~Employee()
{
	cout <<"employee instance being removed --" << endl;
}

int main()
{
	Employee *e;
	e=new Employee();
	delete e;
	e = new Employee(2000);
	
	cout <<"salary" << e->salary << endl;
	
	
	cout <<"End of main" << endl;
	
	delete e;
	e=NULL;
	
	
	system ("pause");
	return 0;
}

Employee
