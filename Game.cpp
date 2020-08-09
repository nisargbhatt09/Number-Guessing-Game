#include<iostream>
#include <unistd.h>
#include <cstdlib>
using namespace std;
int main()
{
	int stop=0,s[100000],k;
	for (k=0;stop!=1;k++)
	{
		int i,j,n,flag=1,desire,diff;
		char dic;
		cout<<"Enter Difficulty(10 to 100000): "<<endl;
		cin>>diff;
		desire=rand();
		while(desire>diff)
		{
			desire=desire/10;
		}
		for(i=0;i!=diff;i++)
		{
			s[i]=i+1;
		}
		cout<<endl;
		for(j=0;j!=diff;j++)
		{
			if(j!=diff-1)
				cout<<s[j]<<",";
			else
				cout<<s[j]<<endl;
		}
		for(j=0;flag>0;j++)
		{
			cout<<"\n* Enter Number *: ";
			cin>>n;
			if(n==desire)
			{
				flag=0;
				cout<<endl<<"**********************************************"<<endl<<" Well! Well! Well! "<<endl<<"**********************************************"<<endl;
				usleep(1000000);
				cout<<endl<<"**********************************************"<<endl<<" You Won "<<endl<<"**********************************************"<<endl;
				usleep(2000000);
				cout<<endl<<"Total TRYs : "<<j+1<<endl;
			}
			else if(n>desire)
			{
				cout<<"Desire < "<<n<<endl;
			}
			else
			{
				cout<<"Desire > "<<n<<endl;
			}
		}
		c:
		cout<<endl<<" * Again? * [Y/N]"<<endl;
		cin>>dic;
		if(dic=='Y' || dic=='y' )
		{
			stop=0;
		}
		else if(dic=='N' || dic=='n')
		{
			stop=1;
			break;
		}
		else
		{
			cout<<"Wrong_Input!"<<endl;
			goto c;
		}
	}
}
