#include "iostream"
#define SIZE 100

using namespace std;

class stack {
    int stackArr[100];
    int top;
public:
    stack();
    ~stack();
    void init();
    void push(int i);
    int pop();
};
stack::stack()
{
    top=0;
    cout<< "Stack Initialized\n";
}
stack::~stack()
{
    cout<<"Stack Destroyed\n";

}
void stack::init() {
    top=0;
}
void stack::push(int i) {
    if(top==SIZE)
    {
        cout<<"Stack overflow";
        return;
    }
    stackArr[top]=i;
    top++;
}
int stack::pop() {
    if(top==0)
    {
        cout<<"Stack underflow";
        return 0;
    }
    top--;
    return stackArr[top];
}
int main()
{
    stack stack1, stack2;
// create two stack objects
    stack1.init();
    stack2.init();
    stack1.push(1);
    stack2.push(2);
    stack1.push(3);
    stack2.push(4);
    cout << stack1.pop() << " ";
    cout << stack1.pop() << " ";
    cout << stack2.pop() << " ";
    cout << stack2.pop() << "\n";
    return 0;
}




