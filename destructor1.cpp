#include<iostream>
using namespace std;
int count =0;
class num{
    public:
    num(){
        count++;
        cout<<"This is a time when constructor was called for object number"<<count<<'\n';


    }
    ~num(){
        cout<<"This is the time when destuctor is called for object number"<<count<<'\n';
        count--;
    }

};

int main()
{   cout<<"We are inside our main function\n";
    cout<<"creating 1st object n1"<<'\n';
    num n1;  //object n1
    {
        cout<<"Entering this block\n";
        cout<<"Creating 2 more objects'\n";
        num n2,n3;
         cout<<"Exiting this block\n";
    }

    cout<<"Back to main\n";


    return 0;
}