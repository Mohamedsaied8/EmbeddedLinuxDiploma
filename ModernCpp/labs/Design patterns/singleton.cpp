#include <iostream>
#include <memory>
 
class Singleton
{
public:
	Singleton(){};
	static std::shared_ptr<Singleton> getInstance(); 
	Singleton(const Singleton&) = delete;
	void Send(std::string data);
	const Singleton& operator=(const Singleton&) = delete;

private:

	static std::shared_ptr<Singleton> instance;
};


std::shared_ptr<Singleton> Singleton::instance;

std::shared_ptr<Singleton> Singleton::getInstance() 
{
	if(instance == nullptr) {
		instance  = std::make_shared<Singleton>();
		std::cout << "getInstance(): First instance\n";
		return instance;
	}
	else {
		std::cout << "getInstance(): previous instance\n";
		return instance;
	}
}

void Singleton::Send(std::string data)
{
	std::cout << " sending data " << data << std::endl;
}


void AirConditioner()
{
	std::shared_ptr<Singleton> ble = Singleton::getInstance();
	ble->Send("Temperature : 42");
}
	
void Stereo()
{
	std::shared_ptr<Singleton> ble = Singleton::getInstance();
	
	ble->Send("Setereo Volume : 10");
}

int main()
{
	 
	AirConditioner();
	Stereo();
	return 0;
}
