#include<iostream>         
using namespace std;

class Wall{
    public:
    double length;

    Wall(){       //DEFAULT CONSTRUCTOR1
        length=9.86;
        cout<<"Creating a wall";
        cout<<"Length of the wall is: "<<length;
    }
    

};

int main()
{   Wall wall1;

    return 0;
}