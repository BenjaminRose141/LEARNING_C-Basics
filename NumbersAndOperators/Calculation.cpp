#include <iostream>
using namespace std;

int main()
{
	int amountApples = 2, amountPears = 4;
	double priceApple = 1.45, pricePear = 0.85;
	double sum, average, percentage, difference;
	
	sum = amountApples * priceApple + amountPears * pricePear;
	average = sum / (amountApples + amountPears);
	percentage = 100.0 * amountPears / (amountApples + amountPears);
	difference = priceApple - pricePear;
	
	cout << "Sum: " << sum << " Euros" << endl;
	cout << "Average Price: " << average << " Euros" << endl;
	cout << "Percentage: " << percentage << "%" << endl;
	cout << "Difference: " << difference << " Euros" << endl;
}
