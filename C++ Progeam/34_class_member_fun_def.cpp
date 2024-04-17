#include <iostream>
using namespace std;
class stu // class dec
{
    int id;
    char name[10];

public:
    void readstu() // fun def
    {
        cout << "enter stu id, name" << endl;
        cin >> id >> name;
    }
    void showstu(); // fun dec
};

void stu :: showstu() // fun def
{
    cout << "stu id=" << id << endl;
    cout << "stu name=" << name << endl;
}
int main()
{
    stu s;       // obj
    s.readstu(); // fun calling
    s.showstu(); // fun calling
}