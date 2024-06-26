#include<iostream>
using namespace std;
void PrintPattern (int value, char ch);
void helping(int i, int n);
int main ()
{
	int n;
	cout<<"Enter Number of :"<<endl;
	cin>>n;
	int i=1;
	helping(i,n);
}

void helping (int i, int n)
{
	
	if(i>=n)
	{
		return;
	}
	else
	{
		PrintPattern(n-i,' ');
		PrintPattern(1,'*');
		if(i>=3&&i<n)
		PrintPattern(i-2,' ');
		if(i!=1)
		{
			PrintPattern(1,'*');
		}
		
		cout<<endl;
		
		helping(i+1,n);
		if(i==(n-1))
		PrintPattern(2,'*');
		else
		PrintPattern(1,'*');
	}
}


void PrintPattern (int value, char ch)
{
	if(value==0)
	return;

else
{
cout<<ch;
PrintPattern(value-1,ch);
}
}


