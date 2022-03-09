/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<conio.h>
class Qsort
{   
void quicksort(int p,int q)
{
    int i,j,m,v;
	int arry[8]={10,5,13,4,8,15,13,9};
	arry[int p::int q];
	 j=q;
    if(p<q)
	{
		int j = partition(int arry,int p,int q);
		quicksort(p,j-1);
		quicksort(j+1,q);
}
}
	void partition(int arry,int m,int p)
	{
		v=arry[m];
		i=m;
		j=p;
		for(i=0;arry[i]>=v;i++)
		{
			for (j=0;arry[j]=<v;j--)
			{
				if(i<j)
				{
				
				interchange (arry,i,j);
				}
				else {
					arry[m]=arry[j];
					a[j]=v;
					return j;
				}
				void interchange(arry,i,j)
				{
					p=arry[i];
					arry[i]=arry[j];
					arry[j]=p;
				}
				
			}
		}
	}
	
};
int main()
{
Qsort A;
A.partition(int arry,p,q);
A.quicksort(int p,int q);
A.partition(int arry,int m,int p);
A.interchange(arry,i,j)


}

