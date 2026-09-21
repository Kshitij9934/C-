# include <iostream>
#include <string>
using namespace std;
class Employee {
private:
int empId;
string name;
float basicSalary;
float bonus;
float totalSalary;
public:
Employee () : empId (0),name("Unknow") , basicSalary(0) , bonus
(0) , totalSalary (0) {
cout << "Default constructor called" << endl;
}
Employee (int id, string n, float salary,float b) {
empId = id;
name =n;
basicSalary = salary;
bonus = b;
calculateTotalSalary();
cout << "Parameterized constructor called" <<endl;
}
void calculateTotalSalary() {
totalSalary = basicSalary + bonus;
}
void display() const {
cout <<"Employee ID:"<<empId  <<endl;
cout <<"Name:" << name << endl;
cout <<"Bonus:" << bonus << endl;
cout <<"Basic Salary:" << basicSalary << endl;
cout <<"total Salary:" << totalSalary << endl;
}
};
int main() {
Employee emp1;emp1.display();
Employee emp2(101, "John Doe",50000,10000);
emp2.display();
return 0;
}
