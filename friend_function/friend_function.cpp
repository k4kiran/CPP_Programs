#include <iostream>
#include <string>

using namespace std;

class Student
{
string name;
int age;

public:
	Student(string newname, int newage)
	{
		name = newname;
		age = newage;
	}
	void show()
	{
		cout << name << endl;
		cout << age << endl;
	}
	friend void display(Student man);
};


void display(Student man)
{
	cout << man.name << endl;
	cout << man.age <<endl;
}

int main()
{
	Student man1("akhil", 24);
	display(man1);
	return 0;
}
