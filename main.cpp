/*
Ameya Subramanian
Assignment: Lab 1
Section: 01
*/

#include <iostream>

using namespace std;

int main(){
	string format;
	while (format != "C" || format != "F" || format != "K") { //asking for input, making sure that it actually takes in what we want rather than taking in any arbitrary value
		cout << "Choose a temperature (C, F, or K): ";
		cin >> format;

		if (format == "C" || format == "F" || format == "K") {
			break;
		}
		else {
			cout << "Invalid unit. Try again." << endl;
		}
	}
	cout << "Pick the temperature: "; //asking for temperature
	double temp;
	cin >> temp;
	string conversion;


	//splitting all 3 formats to ask for the specific conversions, so as to not allow the user to convert one unit to itself
	if (format == "C") {
		while (conversion != "K" || conversion != "F") {
			cout << "Choose a temperature to convert to (F or K): ";
			cin >> conversion;

			if (conversion == "K" || conversion == "F") {
				break;
			}
		}
	}
	else if (format == "F") {
		while (conversion != "C" || conversion != "K") {
			cout << "Choose a temperature to convert to (K or C): ";
			cin >> conversion;

			if (conversion == "C" || conversion == "K") {
				break;
			}
		}
	}
	else if (format == "K") {
		while (conversion != "C" || conversion != "F") {
			cout << "Choose a temperature to convert to (F or C): ";
			cin >> conversion;

			if (conversion == "C" || conversion == "F") {
				break;
			}
		}
	}


	//Celsius conversions
	if (format == "C" && conversion == "K") {
		double endVal = temp + 273.15;
		cout << "The computed temperature for " << temp << format << " is: " << endVal << conversion << endl;
	}
	else if (format == "C" && conversion == "F") {
		double endVal = (temp*(9/5)) + 32;
		cout << "The computed temperature for " << temp << format << " is: " << endVal << conversion << endl;
	}

	//Kelvin conversions
	if (format == "K" && conversion == "C") {
		double endVal = 273.15 - temp;
		cout << "The computed temperature for " << temp << format << " is: " << endVal << conversion << endl;
	}
	else if (format == "K" && conversion == "F") {
		double endVal = (temp*(9/5)) - 459.67;
		cout << "The computed temperature for " << temp << format << " is: " << endVal << conversion << endl;
	}

	//Fahrenheit conversions
	if (format == "F" && conversion == "K") {
		double endVal = (temp = 459.67) * (5/9);
		cout << "The computed temperature for " << temp << format << " is: " << endVal << conversion << endl;
	}
	else if (format == "F" && conversion == "C") {
		double endVal = (temp-32) * (5/9);
		cout << "The computed temperature for " << temp << format << " is: " << endVal << conversion << endl;
	}
}