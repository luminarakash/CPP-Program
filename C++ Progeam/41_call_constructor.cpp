// how to call a constructor within another constructor of same class

#include <iostream>
#include <string.h>
using namespace std;
class stu
{
    char name[20], course[20];
    float fee;

public:
    stu(char name[20], char course[20]) //(2 arguments) (class name function name are same)
    {
        strcpy(this->name, name);
        strcpy(this->course, course);
        fee=0;
    }
    stu::stu(char name[20], char course[20], float fee) // parameterized const
    {
        stu(name, course); // calling const
        this->fee=fee;
    }
    void showstu()
    {
        cout << "name= " << name << endl;
        cout << "course= " << course << endl;
        cout<<"fee= "<<fee<<endl;
    }
};
int main()
{
    stu s1("akash", "c++");
    stu s2("akash", "c++", 5000);
    s1.showstu();
    s2.showstu();
}