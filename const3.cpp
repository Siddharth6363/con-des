#include<iostream>
using namespace std;

class Area{
        public:
        double length;
        double height;
        double result=0;

        Area(double len , double hei){
            length = len;
            height = hei;
        }

        double calculateArea(){
            return length*height;

        }

};

int main()
{    Area a1(10,5);
    Area a2(3.5 , 6.2);

    cout<<"Area of a1="<<a1.calculateArea()<<'\n';
      cout<<"Area of a2="<<a2.calculateArea()<<'\n';


    return 0;
}