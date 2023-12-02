#include <iostream>
 
 namespace mystd{

    template<typename T>
    class SmartPtr {
        T* ptr; // Actual pointer
    public:
        SmartPtr() {} //default
        // Constructor: Refer https:// www.geeksforgeeks.org/g-fact-93/
        // for use of explicit keyword
        explicit SmartPtr(T* p) 
        {
             ptr = p; 
        }

        // static SmartPtr& MakeSmartPtr()
        // {
        //     this->ptr = new T;
        //     return *this;
        // }
         SmartPtr(const SmartPtr& copy) = delete;

        SmartPtr& operator=(SmartPtr & other) = delete;

        //move constructor
        SmartPtr(SmartPtr & other)
        {
            this->ptr = other.ptr;
            other.ptr = nullptr;
        }

        // Destructor
        ~SmartPtr() { delete (ptr); }
        // Overloading dereferencing operator
        T& operator*()
         {
            return *ptr; 
         }
    };
 }
 
int main()
{
    mystd::SmartPtr<int> Smart(new int()); //address : value
    *Smart = 20;
     printf("%d", *Smart);
 
    // auto smartx = mystd::SmartPtr<int>::MakeSmartPtr();
    // *smartx = 80;
    // We don't need to call delete ptr: when the object
    // ptr goes out of scope, the destructor for it is automatically
    // called and destructor does delete ptr.
 
    return 0;
}