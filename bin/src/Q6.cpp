#include <iostream>
#include <conio.h>
using namespace std;
	
int main()

{
	float s, t, p;
	int n;

	cout<< "Enter the initial amount : ";cin>>s;
	cout<< "Enter the required amount : ";cin>>t;
	cout<< "Enter interest rate % by year : ";cin>>p;

	for(p=0.01*p, n=0; s<t;s+=s*p, n++);
	cout<<"Number of years to save = " << n <<endl;
	cout<<"After "<<n<<" years of savings, amount available : "<<s<<endl;
	getch();
}