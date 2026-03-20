#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string name;
    int age;
    float score;

public:
    Student();
    ~Student();
    void display();
    void setScore(float newScore);
    void setName(string newName);
    void setAge(int newAge);
    void getScore(float *score);
    void getName(string *name);
    void getAge(int *age);
};

Student::Student() : name(""), age(0), score(0)
{
    cout << "A student is created!" << endl;
}

Student::~Student()
{
    cout << "A student is destroyed!" << endl;
}

void Student::display()
{
    cout << "---------------------------------"<< endl;
    cout << "Student name:  " << name << endl;
    cout << "Student age:   " << age << endl;
    cout << "Student score: " << score << endl;
    cout << "---------------------------------"<< endl;
}

void Student::setScore(float newScore)
{
    Student::score = newScore;
}

void Student::setName(string newName)
{
    Student::name = newName;
}

void Student::setAge(int newAge)
{
    Student::age = newAge;
}   

int main()
{
    Student oldStudent;
    Student newStudent;

    oldStudent.setName("Nguyen Van A");
    oldStudent.setAge(18);

    newStudent.setName("Nguyen Thi B");
    newStudent.setAge(19);

    oldStudent.display();
    oldStudent.setScore(10.0);
    oldStudent.display();

    newStudent.display();
    newStudent.setScore(9.0);
    newStudent.display();

    return 0;
}

