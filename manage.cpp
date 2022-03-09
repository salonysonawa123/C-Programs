#include<iostream>
using namespace std;
class book
{
    public:
    char bn[30],an[20];
    public :
    int n;
    cout<<"how many books u want enter:";
    cin>>n;
    for(i=0;i<n;n++){
    cout<<"enter book name:"
    cin>>bn;
    cout<<"enter authore name:"
    cin>>an;
}
}
class bookcd::public book
{
    public :
    int cd;
    for(i=0;i<n;i++)
    {
    cout<<"enter book code:";
    cin>>cd;
}
}
void display()
{
    cout<<"---detail--";
    cout<<"book -"<<bn;
    cout<<"author -"an;
    cout<<"book code-"<<cd;
}
void search()
{
    int cod,i;
    cout<<"enter book code:";
    cin>>cod;
    for(i=0;i<cd;i++)
    {
        if (cd==cod)
        {
            cout<<"book at no."<<cd;
            break;
        }
    }
    
    
int main()
{
    int choice;
    switch(choice)
    {
        case 1 :
        bookcd b;
        break;
        case 2:
        b.display();
        break;
        case 3:
        b.search();
        break;
        default:
        cout<<"plz enter valid choice...!!";
    }
    cout<<"welcome to library management system";
    cout<<"enter 1 for add book:";
    cout<<"eneter 2 for show detail:";
    cout<<"enter 3 for search book";
        
    }
