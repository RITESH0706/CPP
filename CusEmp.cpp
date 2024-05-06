#include<iostream>
using namespace std;

class Person {
public:
    string name;

    Person() {
        cout << "Enter the Name : ";
        cin >> name;
    }
};

class Customer : public virtual Person {
public:
    int cus_id;
    
    Customer() {
        cout << "Enter the Customer ID : ";
        cin >> cus_id;
    }
};

class Employee : public virtual Person {
public:
    int emp_id;
    int salary;

    Employee() {
        cout << "Enter the Employee ID : ";
        cin >> emp_id;
        cout << "Enter the Salary : ";
        cin >> salary;
    }
};

class EmployeeCustomer : public Employee, public Customer {
public:
EmployeeCustomer() : Employee(), Customer() {} 
    void display() {
        cout << "Name: " << name << endl;
        cout << "Emp ID: " << emp_id << endl;
        cout << "Salary: " << salary << endl;
        cout << "Customer ID: " << cus_id << endl;
    }
};

int main() {
    EmployeeCustomer e;
    e.display();
    return 0;
}

