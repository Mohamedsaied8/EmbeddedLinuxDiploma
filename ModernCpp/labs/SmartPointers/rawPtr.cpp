
#include <iostream>
class Title{
public:
    Title()
    {
        std::cout << "default constructor";
    }
    Title(int size)
    {
        word = new char[size]; //heap memory allocation 
    }
    ~Title()
    {
        delete word;
    }
private:
char *word;
int size;
};

char* global_Function()
{
    char *p = (char *) malloc(sizeof(char)*10); //malloc or new //10 bytes -> Heap memory
   // delete p;
    return p;
}
int main()
{
 
    while(1)
    {
        char *p = global_Function();
        p[0] = 'h';
        p[1] = 'e';
        p[2] = 'l';
        p[3] = 'l';
        p[4] = 'o';
        p[5] = '\0';

        printf("%s",p);
        
        delete p;
        delete p; //double free
    }

    return 0;
}
