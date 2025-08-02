/* 24. Create a class named Employee with data members: emp_id, name, position and salary.
Now, input the records of n employees and store them in a file named “employee.dat”.
After writing the data to the file, read the records from the file and display the
information of those employees whose salary is greater than 25,000. */

#include <iostream>
#include <fstream>
using namespace std;

class Employee {
private:
    int emp_id;
    char name[50];
    char position[30];
    float salary;

public:
    void input() {
        cout << "Enter employee ID: ";
        cin >> emp_id;
        cin.ignore(); 
        cout << "Enter name: ";
        cin.getline(name, 50);
        cout << "Enter position: ";
        cin.getline(position, 30);
        cout << "Enter salary: ";
        cin >> salary;
    }

    void display() {
        cout << "\nEmployee ID: " << emp_id << endl;
        cout << "Name: " << name << endl;
        cout << "Position: " << position << endl;
        cout << "Salary: " << salary << endl;
    }

    float getSalary() const {
        return salary;
    }
};

int main() {
    Employee e;
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    fstream file("employee.dat", ios::out | ios::binary);
    if (!file) {
        cout << "Error creating file!" << endl;
        return 1;
    }


    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for employee " << i + 1 << ":\n";
        e.input();
        file.write(reinterpret_cast<char*>(&e), sizeof(e));
    }
    file.close();

    file.open("employee.dat", ios::in | ios::binary);
    if (!file) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    cout << "\nEmployees with salary greater than 25,000:\n";

    while (file.read(reinterpret_cast<char*>(&e), sizeof(e))) {
        if (e.getSalary() > 25000) {
            e.display();
        }
    }

    file.close();
    return 0;
}
