#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;


int main(int argc, char* argv[]){
	const double PI = 3.1415926535;
	const double G = 9.8;
	cout << "We are saving the world!" << endl << endl;
	cout << "Welcome Austin!" << endl;
	cout << "Please input the Initial Speed (m/s): ";
	double speed;
	cin >> speed;
	cout << "Please input the Angle (Degrees): ";
	double degrees;
	cin >> degrees;
	double radians = PI * degrees / 180; 
	double distance = speed * speed * sin(2 * radians) / G;

	cout << "Thank you Austin for your input.... " << endl;
	cout << "The shot with initial speed " << speed 
	     << " with an angle of " << degrees 
	     << " will go to " << distance << " meters" << endl;
	cout << "Good bye" << endl << endl;
	return 0;
}
