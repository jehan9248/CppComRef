#include "iostream"
using namespace std;

class myclass{
    int a,b;
public:
    friend int sum(myclass my);
    void set_AB(int i,int j);
};
void myclass::set_AB(int i, int j) {
    a=i;
    b=j;
}

int sum(myclass my)
{
    return my.a+my.b;
}

int main()
{
    myclass n;
    n.set_AB(3,4);
    cout<< sum(n);
    return 0;
}