#include<iostream>
using namespace std;
class Copy
{
	public :
		int x,y;
		public:
			Copy (int X1 , int Y1)
			{ 
			x=X1;
			y=Y1;
		}

copy (const Copy &obj2)
{
	x=obj2.x;
	y=obj2.y;
}
	void display()
	{
		cout<<x<<"and"<<y<<endl;
	}
};
int main()
{
	Copy obj2 (10,15);
	Copy obj1=obj2;
	cout<<"normal constructor"<<endl;
	obj1.display();
	cout<<"copy constructror"<<endl;
	obj2.display();
	return 0;
}
