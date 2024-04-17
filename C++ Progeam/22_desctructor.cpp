// C++ program to explain destructors

#include <iostream>
using namespace std;
class akash
{
	public:
	int id;
	
	//Definition for Destructor
	~akash()
	{
		cout << "Destructor called for id: " << id <<endl;
	}
};

int main()
{
	akash obj1;
	obj1.id=7;
	int i = 0;
	while ( i < 5 )
	{
		akash obj2;
		obj2.id=i;
		i++;	
	} // Scope for obj2 ends here

	return 0;
} // Scope for obj1 ends here
