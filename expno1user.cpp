#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    int RollNo;
    string Name;

public:
    Student(int r, string n)
    {
        RollNo = r;
        Name = n;
        cout << "Student object is created" << endl;
    }
    void display()
    {
        cout << "RollNo:" << RollNo << endl;
        cout << "Name:" << Name << endl;
    }
    ~Student()
    {
        cout << "Student object destroyed" << endl;
    }
};
int main()
{
    int inputRollNo;
    string inputName;
    cout << "Enter Student Roll No:";
    cin >> inputRollNo;
    cout << "Enter student Name:";
    cin >> inputName;
    Student s1(inputRollNo, inputName);
    s1.display();
    return 0;
}