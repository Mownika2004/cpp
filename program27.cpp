#include<iostream>
 using namespace std;
 class Employee
 {
     private:
         int empno;
         char empname[20];
         char department[20];
         char designation[20];
     public:
     	Employee();
         void GetData();
         void DispData();
 };
 void Employee::GetData()
 {
     cout<<"Enter the employee number: ";
     cin>>empno;
     cout<<"Enter the employee name: ";
     cin>>empname;
     cout<<"Enter the employee department:";
     cin>>department;
     cout<<"Enter the employee designation";
     cin>>designation;
 }
 void Employee::DispData()
 {
    cout<<"emp no:"<<empno<<"\n";
    cout<<"emp name:"<<empname<<"\n";
	cout<<"emp dept name:"<<department<<"\n";
	cout<<"emp designation:"<<designation<<"\n";    
 }
 int main()
 {
 	Employee employee;
 	employee.GetData();
 	employee.DispData();
 	return 0;
 }
