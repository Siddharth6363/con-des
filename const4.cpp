#include<iostream>
using namespace std;   //parameterized constructor

class Si{
    public:
    double p , r, t;
     
        Si(double x , double y , double z){
            p=x;
            r=y;
            t=z;

        };

            double calculate(){
                return (p*r*t)/100;
            }
};

int main()
{       Si obj1(3.5 , 4.5 , 6.5);
        cout<<"The simple interest is:"<<obj1.calculate();


    return 0;
}