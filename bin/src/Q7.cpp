#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#define max 50

void main()
{
	struct
	{
		char ht[30];
		char sbd[10];
		float dt, dl, dh, td;
	}

	a[max];
	float dc;
	int i, j, n;
	clrscr();
	cout << "Enter number students n<=" << max << ", n= ";
	cin >> n;
	cout << "Data of the students :\n";
	for (i = 0; i < n; i++)
	{
		cout << "Studnet no. " << i + 1 << " :\n";
		cout << "Full name : ";
		gets(a[i].ht);
		cout << "ID : ";
		gets(a[i].sbd);
		cout << "Math Grade : ";
		cin >> a[i].dt;
		cout << "Physical Grade : ";
		cin >> a[i].dl;
		cout << "Chemical Grade : ";
		cin >> a[i].dh;
		a[i].td = a[i].dt + a[i].dl + a[i].dh;
	}

	cout << "Enter the benchmark =";
	cin >> dc;
	cout << "\nGo Enter to Continue ...";
	getch();
	clrscr();
	cout << "\nList students :\n\n";
	printf("%-4s%-20s%-10s%-10s%-10s%-10s%-10s\n",
		"No", "Full Name", "ID", "Math", "Physical", "Chemical", "Total");
	for (i = 0; i < n; i++)
		printf("%-4d%-20s%-10s%-10.1f%-10.1f%-10.1f%-10.1f\n",
			i + 1, a[i].ht, a[i].sbd, a[i].dt, a[i].dl, a[i].dh, a[i].td);
	cout << "\nGo Enter to Continue ...";
	getch();
	clrscr();
	cout << "\nList of central candidates :\n\n";
	printf("%-4s%-20s%-10s%-10s%-10s%-10s%-10s\n",
		"No", "Full Name", "ID", "Math", "Physical", "Chemical", "Total");
	for (i = 0, j = 0; i < n; i++)
		if (a[i].td >= dc)
		{
			j++;
			printf("%-4d%-20s%-10s%-10.1f%-10.1f%-10.1f%-10.1f\n",
				j, a[i].ht, a[i].sbd, a[i].dt, a[i].dl, a[i].dh, a[i].td);
		}

	cout << "\nGo Enter to End ...";
	getch();
}