#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n ;
	cin >> n;
	for (int i = int(sqrt(n)); i > 0 ;i--)
	{
		if (n%i ==0 )
		{	
		cout << i <<" " << n/i<<endl; 
	    break;
		}
	}
	return 0 ;
}