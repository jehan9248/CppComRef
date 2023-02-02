#include "iostream"

using namespace std;

const int IDLE=0;
const int INUSE=1;

class C2;

class C1{
    int status;
public:
    void setStatus(int state);
    friend int idle(C1 a,C2 b);
};

class C2{
    int status;
public:
    void setStatus(int state);
    friend int idle(C1 a,C2 b);
};

void C1::setStatus(int state) {
    status=state;
}
void C2::setStatus(int state) {
    status=state;
}

int idle(C1 x,C2 y)
{
    if(x.status || y.status)
    {
        return 0;
    } else{
        return 1;
    }
}

int main()
{
    C1 x;
    C2 y;
    x.setStatus(IDLE);
    y.setStatus(IDLE);

    if(idle(x,y)){
        cout<< "Screen can be used1\n";
    } else{
        cout<< "In use1\n";
    }

    x.setStatus(INUSE);
    if(idle(x,y)){
        cout<< "Screen can be used2\n";
    } else{
        cout<< "In use2\n";
    }
}