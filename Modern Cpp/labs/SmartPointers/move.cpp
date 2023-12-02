#include<iostream>
#include <string.h>

class String
{

public:
    String(const char* string)
    {
      printf("Created\n");
      mSize = strlen(string);
      m_data = new char[mSize];
      memcpy(m_data,string,mSize);
    }

    String(const String& other)
    {
      printf("Copied\n");
      this->mSize = other.mSize;
      this->m_data = new char[mSize];
      memcpy(this->m_data, other.m_data, mSize);
    }
    
    String(String&& other)
    {
      printf("Move\n");
      this->mSize = other.mSize;
      this->m_data = other.m_data;
     
      other.mSize = 0;
      other.m_data = nullptr;
    }

    ~String()
    {
        delete m_data;
    }
    void print()
    {
        for(int i=0;i<mSize;i++)
            printf("%c",m_data[i]);
        
        printf("\n");
    }
private:
    char * m_data;
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
    Entity entity(String("RoboticsCorner"));
    entity.printName();
    return 0;
}