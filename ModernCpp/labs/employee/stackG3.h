
template <class T>
class Stack{

public:
    Stack();
    void push(T element);
    T pop();
    bool isEmpty();
    bool isFull();

private:
    int size;
    int top;
    T* buffer;

};
