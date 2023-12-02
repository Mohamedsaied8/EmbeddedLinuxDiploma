#include <iostream>
#include <vector>

class Singleton
{
public:
	static Singleton *getInstance(); 
    void send(std::string data);
private:
	Singleton(){}
    Singleton(const Singleton&);
	const Singleton& operator=(const Singleton&);
	static Singleton* instance;
};


Singleton* Singleton::instance = 0;

Singleton* Singleton::getInstance() 
{
	if(!instance) {
 		instance = new  Singleton();
		std::cout << "getInstance(): First instance\n";
		return instance;
	}
	else {
		std::cout << "getInstance(): previous instance\n";
		return instance;
	}
}

void Singleton::send(std::string data)
{
    std::cout << data;
}
void AirConditioner()
{
	Singleton *s1 = Singleton::getInstance();
    s1->send("Temperature 35 Degree\n");
 }

void Stereo()
{
	Singleton *s2 = Singleton::getInstance();
    s2->send("Sound Volume is 10\n");
 }
int main()
{
	Stereo();
    AirConditioner();
	return 0;
}