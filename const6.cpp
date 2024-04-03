#include<iostream>
using namespace std;       //cel to fahrenheit

class Temp{
    public:
    double temp;
        Temp(double t)        //parameterized constructors
        {
                temp=t;
        }

        double calculate(){
           return(temp* 9/5) + 32;
        }



};

int main()
{    Temp obj1(9);
    cout<<"The value of temp from celsius to fahrenheit is "<<obj1.calculate();
    return 0;
}