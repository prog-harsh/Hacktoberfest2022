//To demonstrate the use of static varibles.
#include <iostream>
using namespace std;

class Test {
	static int count;
public:
	Test() {
		++count;
	}
	void display() {
		cout << "Number of objects created is " << count;
	}
};

int Test:: count = 0;

int main()
{
	Test T1;
	Test T2;
	Test T3;

	T1.display();
	return 0;
}
