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
    Student s1(101, "Arun");
    s1.display();
    return 0;
}