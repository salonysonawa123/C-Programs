#include<iostream>
using namespace std;
class student
{
	private:
		
			char name[20],roll[10],branch[10];
			int sem;
	public:
		void input();
		void display();
			
		
};
void student::input()
{
	cout<<"\n  Enter your Name:";
	cin>>name;
	cout<<"\n  Enter your Roll no.:";
	cin>>roll;
	cout<<"\n  Enter your Branch:";
	cin>>branch;
	cout<<"\n  Enter your Sem:";
	cin>>sem;
}
void student::display()
{
	cout<<"\n  Name:"<<name;
	cout<<"\n  Roll no.:"<<roll;
	cout<<"\n  Branch:"<<branch;
	cout<<"\n  Sem:"<<sem;
}
int main()
{
	student s;
	s.input();
	s.display();
}
