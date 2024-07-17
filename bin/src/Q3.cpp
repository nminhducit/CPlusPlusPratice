#include <iostream>
using namespace std;

int main() {

	int ngay , thang , nam ;
	cin >> ngay >> thang >> nam ;
	
	int a , b , D ;
	D = nam - 1 ;
	
	int K = 365 * D ;
	D = nam % 4 ;
	
	int songay ;
	int kq = 0 ;
	for (a = 1 ; a <= nam - 1 ; a++) {

		if (a % 100 == 0) {
			if (a % 400 == 0) K++ ;
		}
		else if (a % 4 == 0) K++ ;
		
	}
	
	if (nam % 100 == 0) {
			if (nam % 400 == 0) kq = 1 ;
			else kq = 0 ;
		}
		
	else {
			if (nam % 4 == 0) kq = 1 ;
		else kq = 0 ;
	}
	
	int ds = 0 ;
	for (a = 1 ; a <= thang ; a++) {
		
		if (a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12) songay = 31;
		if (a==4 || a==6 || a==9 || a==11) songay = 30 ;
		if (a==2) {
			if (kq==1) songay = 29 ;
			else songay = 28 ;
		}
		
		for (b = 1 ; b <= songay ; b++) {
			K = K + 1 ;
			if (b == ngay && a == thang) {
			ds = 1 ;
			break;
		    }
		}
		
		if (ds == 1) break ;

	}
	
	K = K % 7 ;
	switch (K) {
	    
		case 0 : cout << "Chu Nhat" << endl ;
		break ;
		case 1 : cout << "Thu Hai" << endl ;
		break ;
		case 2 : cout << "Thu Ba" << endl ;
		break ;
		case 3 : cout << "Thu Tu" << endl ;
		break ;
		case 4 : cout << "Thu Nam" << endl ;
		break ;
		case 5 : cout << "Thu Sau" << endl ;
		break ;
		case 6 : cout << "Thu Bay" << endl ;
		break ;
		
	}
	
}