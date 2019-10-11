#include <iostream>
#include <iomanip>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::setprecision;
using std::fixed;
using std::setw;

int main(int argc, char* argv[]){
	const double PI = 3.1415926535;
	const double G = 9.8;
	cout << "We are saving the world!" << endl << endl;
	cout << "Welcome Austin!" << endl;
	cout << "Please input the Initial Speed (m/s): ";
	double speed;
	bool correct = false;
	while (!correct){
		cin >> speed;
		if (speed > 0)
			correct = true;
		else
			cerr << "Austin! Input only positive numbers" << endl;
	}
	cout << "Please input the Angle (Degrees): ";
	double degrees;
	correct = false;
	while (!correct){
		cin >> degrees;
		if (degrees < 0){
			cerr << "Austin! You may not use negative degrees" << endl;
			continue;
		}else if (degrees >= 90){
			cerr << "Austin! Are you crazy? The degree has to be less than 90" << endl;
			continue;
		}else{
			correct = true;
		}	
	}
	double radians = PI * degrees / 180; 
	double distance = speed * speed * sin(2 * radians) / G;

	cout << "Thank you Austin for your input.... " << endl;
	cout << "The shot with initial values: " << endl;
	cout << "Speed: " << setw(10) << setprecision(2) << fixed << speed << endl;
	cout << "Degree:"<< setw(10) << setprecision(2) << fixed << degrees << " degrees" << endl;
	cout << "Degree:"<< setw(10) << setprecision(2) << fixed << radians << " radians" << endl;
	cout << endl;
	cout << " will go to " << setprecision(10) << fixed <<  distance << " meters" << endl;
	cout << "Good bye" << endl << endl;
	return 0;
}
