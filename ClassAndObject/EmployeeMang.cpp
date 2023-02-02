#include "iostream"
#include "cstring"
using namespace std;

class employee{
    char name[100];
public:
    void setName(char *str);
    void getName(char *str);
private:
    double wage;
public:
    void setWage(double n);
    double getWage();
};

void employee::setName(char *str) {
    strcpy(name,str);
}
void employee::getName(char *str) {
    strcpy(str,name);
}
void employee::setWage(double n) {
    wage=n;
}
double employee::getWage() {
    return wage;
}

int main()
{
    employee ted;

    char nameNew[80];

    ted.setName("Jehan Hasan");
    ted.setWage(75000);

    ted.getName(nameNew);
    cout<< nameNew << " maked $ ";
    cout<<ted.getWage() << " per year";
}