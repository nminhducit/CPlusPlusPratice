#include <iostream>
#define ll long long
#define MAX 1000000

using namespace std;

ll a[MAX], b[MAX];

int main(){
	int N, t;
	cin >> N >> t;
	
	ll sum = 0;
	for (int i = 1; i <= N; i++){
		cin >> a[i] >> b[i];
		sum += a[i];
	}
	cout << sum << endl;

	for (int i = 1; i <= t; i++){
		for (int k = 1; k <= N; k++){
			if (a[k] > 0){
				a[k] -= b[k];
			}
		}
		sum = 0;
		for (int j = 1; j <= N; j++){
			if (a[j] >= 0){
				sum += a[j];
			}
		}		
		
		cout << sum << endl;
	}

	return 0;
}

//Cách khác
#include <iostream>
using namespace std;
#define ll long long

int main()
{
	int N, t, sum = 0;
	cin >> N >> t ;
	ll a[N], b[N];
	for (int i =0; i<N; i++)
	{
		cin >> a[i] >> b[i];
		sum = sum + a[i];
	} 
	cout << sum <<endl;
	for (int j = 0; j<t;j++)
	{
		int i = 0;
		while (i<N)
		{
			if (a[i] >= b[i])
			{
				sum = sum - b[i];
				a[i] = a[i] - b[i];
		    }
		    else
	        {
			    sum = sum - a[i];
				a[i] = 0; 	
		    }
		i++ ;
		}
	cout << sum << endl;
	}
	return 0;
}