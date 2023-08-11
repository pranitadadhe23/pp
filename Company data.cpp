#include<iostream>
#include<string>
using namespace std;
 
class Employee{
	public:
		char name[20];
		double salary;
		char dateofjoining[20];
};
int main()
	int numemployee[10];	
	 Employee employees[numEmployees];
	 for (int i = 0; i < numEmployees; ++i) {
        cout << "Enter details for Employee " << i + 1 << ":\n";
        cout << "Name: ";
        cout << "Salary: ";
        cin >> employees[i].salary;
        cout << "Date of Joining: ";
        cin >> employees[i].dateOfJoining;
    }

    // Print employee information
    cout << "\nEmployee Information:\n";
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Employee " << i + 1 << ":\n";
        cout << "Name: " << employees[i].name << "\n";
        cout << "Salary: " << employees[i].salary << "\n";
    	cout << "Date of Joining: " << employees[i].dateOfJoining << "\n";
    }

    return 0;
}
