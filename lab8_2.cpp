#include<iostream>
#include <string.h>

using namespace std;

//Write the function printO() here

void printO(int a,int b)
{
	if(a<=0 || b<=0)
	cout<<"Invalid value !!!"<<endl;
	
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			cout<<"o";
		}
		cout<<endl;
	}
	
}

int main(){
	
	printO(2,2);
	cout<<"\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
