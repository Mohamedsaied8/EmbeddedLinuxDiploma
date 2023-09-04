/*
    CreateNode
    InsertNode
    DeleteNode
    Append
    Traverse
*/
#include <iostream>

using namespace std;

namespace Container
{
    struct Record
    {
        string name; 
        string address; 
    };

    struct Node
    {
        Record record;
        Node *Next;
    };

    void Traverse(Node *Head, void (*callback)(Container::Node*))
    {
        while(Head)
        {
            callback(Head);
            Head = Head->Next;
        }
    }

    void Traverse(Node *Head, void (*callback)(Node*, std::string key, std::string&), std::string key, std::string &result)
    {
        while(Head)
        {
            callback(Head, key, result);
            Head = Head->Next;
        }
    }

}

void print(Container::Node *Head)
{
    cout << Head->record.name <<" " << Head->record.address << endl;        

}

void Search(Container::Node *Head, std::string key, std::string &result)
{
    if(Head->record.name == key)
    {
        result =  Head->record.address;
    }
}

void Searching(Container::Node *Head, std::string key , std::string &result)
{
    //Traverse
    Container::Traverse(Head, Search, key, result);
}

int main()
{

    Container::Node *Head = new Container::Node; //in heap

    Container::Node *FirstNode = new Container::Node;
    Container::Node *SecondNode = new Container::Node;

    Head->record.name = "Mohamed";
    Head->record.address = "Maadi";

    Head->Next = FirstNode;

    FirstNode->record.name = "Robotics";
    FirstNode->record.address = "Corner";
    FirstNode->Next = SecondNode;

    SecondNode->record.name = "Embedded Center";
    SecondNode->record.address = "Cairo-Egypt";
    SecondNode->Next = nullptr;
    
    Container::Traverse(Head, print);

    return 0;
}