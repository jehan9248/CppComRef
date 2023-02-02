#include "iostream"

using namespace std;

class building{
    int room;
    int floor;
    int area;
public:
    void setRoom(int room);
    int getRoom();
    void setFloor(int floor);
    int getFloor();
    void setArea(int area);
    int getArea();
};

class house : public building{
    int bedroom;
    int bath;
public:
    void setBedroom(int bedroom);
    int getBedroom();
    void setBath(int bath);
    int getBath();
};

class school : public building{
    int classRoom;
    int office;
public:
    void setClassroom(int classR);
    int getClassroom();
    void setOffice(int office);
    int getOffice();
};

void building::setRoom(int room) {
    this->room=room;
}
int building::getRoom() {
    return room;
}
void building::setFloor(int floor) {
    this->floor=floor;
}
int building::getFloor() {
    return floor;
}
void building::setArea(int area) {
    this->area=area;
}
int building::getArea() {
    return area;
}

void house::setBedroom(int bedroom) {
    this->bedroom=bedroom;
}
int  house::getBedroom() {
    return bedroom;
}
void house::setBath(int bath) {
    this->bath=bath;
}
int house::getBath() {
    return bath;
}

void school::setClassroom(int classRoom) {
    this->classRoom=classRoom;
}
int school::getClassroom() {
    return classRoom;
}
void school::setOffice(int office) {
    this->office=office;
}
int school::getOffice() {
    return office;
}
int main()
{
    house h;
    school s;
    h.setRoom(12);
    h.setFloor(3);
    h.setArea(4500);
    h.setBedroom(5);
    h.setBath(3);

    cout << "House has " << h.getBedroom();
    cout << " bedroom ";

    s.setRoom(200);
    s.setClassroom(180);
    s.setOffice(5);
    s.setArea(25000);

    cout<< "   School has " << s.getClassroom();
    cout<<" classroom. ";
    cout<<"Its area is " << s.getArea();
}

