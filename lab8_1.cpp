#include <iostream>
#include <iomanip> //For using setw(), setprecision(), ...

using namespace std;

int main(){	

    double loan;
	double rate;
	double pay;

	cout<<"Enter initial loan : ";
	cin>>loan;
	cout<<"Enter rate per year (%) : ";
	cin>>rate;
	cout<<"Enter amout you can pay per year : ";
	cin>>pay;
	float rate1=(rate/100)*loan;
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#";
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	int i=1;
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	while(loan+rate1-pay!=0)
	{
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i;
	cout << setw(13) << left << loan;
	cout << setw(13) << left << rate1;
	cout << setw(13) << left << loan+rate1;
	if(loan+rate1<pay)
	cout<< setw(13)<<left<<loan+rate1;
	else
	cout << setw(13) << left << pay;
     if(loan+rate1<pay)
	{
		pay=loan+rate1;
	}
	cout << setw(13) << left << loan+rate1-pay;
	cout << "\n";	
	loan=loan+rate1-pay;
	if(loan==0)
	break;
	rate1=(rate/100)*loan;
	i++;
	}

	return 0;
}
