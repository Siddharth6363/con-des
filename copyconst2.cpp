#include<iostream>
using namespace std;

class Point{
    private:
    int x;
    int y;

    public:
        Point(int x1 , int y1)   //NORMAL CONSTRUCTOR
        {
            x = x1;
            y = y1;
        }

        Point(Point &p1)
        {
            x=p1.x;
            y=p1.y;
        }

        int getvalX()
        {
            return x;
        }

         int getvalY()
        {
            return y;
        }
};

int main()
{       Point p1(10,12);   //normal const call kia hai yaha
        Point p2=p1;            //copy const call kia hai yaha

        cout<<"p1.x= "<<p1.getvalX()<<" p1.y= "<<p1.getvalY()<<'\n';
        cout<<"p2.x= "<<p2.getvalX()<<" p2.y= "<<p2.getvalY()<<'\n';

    return 0;
}