#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double price = 1.4;
	
	cout << price << " Euros" << endl;
	
	cout << setw(8) << price << " Euros" << endl;
	
	cout << setfill('.');
	cout << setw(8) << price << " Euros" << endl;
	
	cout << fixed << setprecision(2);
	cout << setw(8) << price << " Euros" << endl;
	
	cout << left;
	cout << setw(8) << price << " Euros" << endl;
}
