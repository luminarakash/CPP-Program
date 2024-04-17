// C++ program to demonstrate constructors

#include <iostream>
using namespace std;
class akash
{
	public:
	int id;
	
	//Default Constructor
	akash()
	{
		cout << "Default Constructor called" << endl;
		id=-1;
	}
	
	//Parameterized Constructor
	akash(int x)
	{
		cout << "Parameterized Constructor called" << endl;
		id=x;
	}
};
int main() {
	
	// obj1 will call Default Constructor
	akash obj1;
	cout << "Geek id is: " <<obj1.id << endl;
	
	// obj2 will call Parameterized Constructor
	akash obj2(21);
	cout << "Geek id is: " <<obj2.id << endl;
	return 0;
}
