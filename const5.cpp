
#include <iostream>
using namespace std;
class student {           //default constructor
	int rno;
	char name[50];
	double fee;

public:
	
	student()
	{
		cout << "Enter the RollNo:";
		cin >> rno;
		cout << "Enter the Name:";
		cin >> name;
		cout << "Enter the Fee:";
		cin >> fee;
	}

	void display()
	{
		cout << endl << rno << "\t" << name << "\t" << fee;
	}
    void discount()
    {
        if (fee>=5000)
        {
            cout<<"\nYou got 9.9 %  Discount on fees";
        }
        
    }
};

int main()
{
	student s; // constructor gets called automatically 
		
	s.display();
    s.discount();
	return 0;
}
