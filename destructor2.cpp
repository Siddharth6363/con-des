#include<iostream>
using namespace std;

    class Testing
    {   private:
        int num1;
        int num2;

        public:
        Testing(int n1 , int n2)
        {
            cout<<"Currently we are inside a constructor\n";
            num1=n1;
            num2=n2;
            
        }
        void display(){
            cout<<"num1 is"<<num1<<'\n';
            cout<<"num2 is"<<num2<<'\n';
        }

        ~Testing(){
            cout<<"Now the destroyer is destroying the constructor(freeing up space)\n";
        }
    };

int main()
{       Testing obj1(10,20);
        obj1.display();
    return 0;
}