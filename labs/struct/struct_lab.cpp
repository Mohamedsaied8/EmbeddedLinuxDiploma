#include<iostream>
using namespace std;

enum class Nationality{ EGYPTIAN=1, ITALIAN, AMERICAN};

struct Person
{
    Nationality nationality;
	int age;
    string name;
    void func()
    {
	    cout << " Person citizenship: " << static_cast<int>(nationality) << " name: " << name << endl;
    }
};


int main()
{

    Person first; //statically allocated

    Person *second = new Person; //dynamically allocated
        
    first.nationality = Nationality::AMERICAN;
    first.age = 40;
    first.name = "Alfonso";
    first.func();

    second->nationality = Nationality::EGYPTIAN;
    second->name = "Hesham";
    second->age = 30;
    second->func();

	return 0;
}

	