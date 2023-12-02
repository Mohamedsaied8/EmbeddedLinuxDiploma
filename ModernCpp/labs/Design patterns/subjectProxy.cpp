#include <iostream>

using namespace std; 

class Protocol 
{
public:
    virtual void defineProtocol()=0;
	virtual void request() = 0;
	virtual ~Protocol() {}
};

class VehicleToInfrastructure : public Protocol 
{
public:

    void defineProtocol()
    {

    }
	void request() 
    { 
		cout << "RealSubject.request()" << endl; 
	}
};

class VehicleToVehicle : public Protocol 
{
public:

    void defineProtocol()
    {

    }
	void request() 
    { 
		cout << "RealSubject.request()" << endl; 
	}
};
 
class Proxy : public Protocol 
{
private:
	Protocol* protocol;

public:
	Proxy(Protocol* p) : protocol (p)  //allocation for real subject
	{}

	~Proxy() { 
		delete protocol; 
	}
    void defineProtocol()
    {
       protocol->defineProtocol(); 
    }
	// Forward calls to the RealSubject:
	void request() 
	{ 
		//do something
		protocol->request(); 
	}
};
 
 void run()
 {
	Proxy p(new VehicleToInfrastructure());
	p.request();
	
	Proxy proxy_v2v(new VehicleToVehicle());
	proxy_v2v.request();
 }

int main() 
{
	run();
}