#include<iostream>
#include<string.h>
using namespace std;

class teacher {

    int id;
public:
    teacher(int id) {
        this->id = id;
    }
    virtual void display() {
        cout<<"Teacher's Id is "<<this->id<<endl;
    }
};

class hod:public teacher {

    char name[30];
    void display() {
        cout<<"HOD's name is "<<name<<endl;
    }

public:
    hod(char *nm,int id):teacher(id) {
        strcpy(name,nm);
    }
};

int main() {

teacher *ptr;
hod h("SADIK",4);
ptr = &h;
ptr->display();
//h.display();

return 0;

}
