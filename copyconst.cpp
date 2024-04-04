#include<iostream>
using namespace std;

class Number{
    int a;
    public:
        Number(){
            a=0;
        }

        Number(int num)  
        {
            a=num;
        }

        Number(Number &obj){ //isko ek number object ka refrence chaiye
                cout<<"Invoking copy constructor\n\n";
            a=obj.a;
        }

        void display()
        {
            cout<<"The number for this object is"<<a<<'\n';
        }

};

int main()
{       Number x;
        Number y;
        Number z(50);

        z.display();
           y.display();
              x.display();
                //z1 should exactly be like z or x or y
                Number z1(x);
                z1.display();

    return 0;
}