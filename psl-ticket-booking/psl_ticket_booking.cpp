#include<iostream>
using namespace std;
int main()
{

	int a, b;
	char c;

	cout << "Pakistan Super League (PSL) cricket match at Gaddafi Stadium. " << endl;
	cout << "\n press 1 for General Enclosure (Rs. 500)";
	cout << " \npress 2 for VIP Enclosure (Rs. 1500)";
	cout << " \npress 3 for VVIP Pavilion (Rs. 3000)";
	cin >> b;
	switch (b)
	{
	case 1:
		a = 500;
		cout << "\n General Enclosure \n  your ticket price is ";
		cout << a;
		break;


	case 2:
		cout << "\n you booked vip enclosure \n your ticket price is ";
		a = 1500;
		cout << a;
		break;
	case 3:
		cout << "\n you booked vvip paviion \n your ticket price is  ";
		a = 3000;
		cout << a;
		break;
	default:
		cout << "\n  invalid choice ";
		break;
	}
	cout << " are you a student\n y for yes \n n for no";
	cin >> c;
	if (c == 'y') {
		a = a - 200;
		cout << "\n your discounted price is ";
		cout << a;
	}
	else  (c == 'n'); {
		cout << " you are not eligible for discount";
	}



	return 0;
}
