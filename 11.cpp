/* 11.The Books class derives information from both the Student and Teacher classes, which in turn
derive information from the College class. Define all four classes with at least one parameterized
constructor and a void display() method in each class. In the main() function, create an object of
the Books class, initialize all data members, and display them. */

#include <iostream>
#include <cstring>
using namespace std;

//College class
class College 
{
private:
    char name[20], location[20];
public:
    College(char n[], char l[]) 
    {
        strcpy(name, n);
        strcpy(location, l);
    }
    void display()
     {
        cout << "College Name = " << name << endl;
        cout << "Location     = " << location << endl;
    }
};

//Student and Teacher classes inherit from College class
class Student : virtual public College 
{
protected:
    char sname[20];
    int roll;
public:
    Student(char n[], char l[], char s[], int r) : College(n, l) {
        strcpy(sname, s);
        roll = r;
    }
    void display() 
    {
        cout << "Student Name = " << sname << endl;
        cout << "Roll Number  = " << roll << endl;
    }
};

class Teacher : virtual public College
 {
protected:
    char tname[20];
    int code;
public:
    Teacher(char n[], char l[], char t[], int c) : College(n, l) {
        strcpy(tname, t);
        code = c;
    }
    void display() 
    {
        cout << "Teacher Name = " << tname << endl;
        cout << "Code         = " << code << endl;
    }
};

//Books class inherits from both Student and Teacher classes
class Books : public Student, public Teacher 
{
private:
    char bname[20], wname[20];
    int cod;
public:
    Books(char n[], char l[], char s[], int r, char t[], int c, char b[], char w[], int co)
        : College(n, l), Student(n, l, s, r), Teacher(n, l, t, c) 
        {
        strcpy(bname, b);
        strcpy(wname, w);
        cod = co;
    }

    void display() 
    {
        cout << "Book Name    = " << bname << endl;
        cout << "Writer Name  = " << wname << endl;
        cout << "Book Code    = " << cod << endl;
    }
};

int main() 
{
    char name[50];
    char location[20];
    char sname[20];
    int roll;
    char tname[20];
    int code;
    char bname[20];
    char wname[20];
    int cod;

    cout << "Enter college name: "<<endl;
    cin>>name; 
    cout << "Enter college location: ";
    cin >> location;
    cout << "Enter student name: ";
    cin >> sname;
    cout << "Enter roll number: ";
    cin >> roll;
    cout << "Enter teacher name: ";
    cin >> tname;
    cout << "Enter teacher code: ";
    cin >> code;
    cout << "Enter book name: ";
    cin >> bname;
    cout << "Enter writer name: ";
    cin >> wname;
    cout << "Enter book code: ";
    cin >> cod;

    Books b1(name, location, sname, roll, tname, code, bname, wname, cod);
    cout << "\nDetails of Books, Student, Teacher and College:" << endl;
    cout << "----------------------------------------" << endl;
    b1.College::display();
    b1.Student::display();
    b1.Teacher::display();
    b1.display();
    cout << "----------------------------------------" << endl;
    return 0;
}
