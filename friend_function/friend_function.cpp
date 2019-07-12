#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string szName;
    int nAge;

public:
    Student(string szNewName, int nNewage)
    {
        szName = szNewName;
        nAge = nNewage;
    }
    void show()
    {
        cout << szName << endl;
        cout << nAge << endl;
    }
     friend void display(Student man);
};

void display(Student man)
{
    cout << man.szName << endl;
    cout << man.nAge <<endl;
}

int main()
{
    Student man("akhil", 23);
    display(man);
    return 0;
}
