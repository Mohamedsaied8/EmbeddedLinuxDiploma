#include <iostream>
extern "C"
{
    #include <string.h> 
}

class String
{
    public:

    String(const char* string)
    {
        printf("created\n");
        mSize = strlen(string);
        m_data = new char[mSize];
        memcpy(m_data, string, mSize);
    }

    String(const String& other) //copy constructor
    {
        printf("Copied\n");
        mSize = other.mSize;
        m_data = new char[mSize];
        memcpy(m_data,other.m_data,mSize);
    }

    String(String&& other) //rvalue referene in move constructor
    {
        printf("moved\n");
        mSize = other.mSize;
        m_data = other.m_data;
        other.mSize = 0;
        other.m_data = nullptr;
    }
    
    void print()
    {
        for(int i;i < mSize;i++)
            printf("%c",m_data[i]);
        printf("\n");
    }

    ~String()
    {
        delete m_data;
    }
    private:
    char *m_data;
    uint32_t mSize;
};

class Entity
{
    public:
    Entity(const String& name) : mName(name)
    {

    }
    
    Entity(String&& name) : mName(std::move(name))  
    { 
        std::cout << "Entity move constructor";
    }

    void printName()
    {
        mName.print();
    }
    private:
    String mName;

};

int main()
{ 
    //1st copy in main
    //2nd copy
    String str("RoboticsCorner");
    Entity entity(str);
    
    Entity entity2(String("EmbeddedC++"));

    entity.printName();

    return 0;
}