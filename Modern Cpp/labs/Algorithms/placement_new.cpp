
#include <iostream>

 

class Entry
{
    public:
    int var;

};

#define ADDRESS   0x962004000
int main()
{

    //allocate in heap 
    Entry * heap_entry  = new Entry();

    char buf[20]; 
    printf("address %x", buf);
    Entry *entry = new (buf) Entry(); 

    entry->var = 10;
    return 0;
}