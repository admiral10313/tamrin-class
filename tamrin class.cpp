#include <iostream> 
#include <iomanip>
#include "Time.h" 

using namespace std;

Time::Time() {
	hour = minute = second = 0;
}

void Time::setTime(int h, int m, int s) {

	hour = (h >= 0 && h < 24) ? h : 0;
	minute = (m >= 0 && m < 60) ? h : 0;
	second = (s >= 0 && s < 60) ? s : 0;
}

void Time::printUnivetsal() {
	cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second;
}

void Time::printStandard() {
	cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << setfill('0')
		<< setw(2) << minute << ":" << setw(2) << second << (hour < 12 ? " AM" : " PM"); 
}


int main() {
	Time t;

	cout << "\n\n\t\tThe initial universal time is ";
	t.printUnivetsal();

	cout << "\n\t\tThe initial standard time is ";
	t.printStandard();

	t.setTime(17, 20, 14);

	cout << "\n\n\t\tUniversal time after setTime is ";
	t.printUnivetsal();

	cout << "\n\n\t\tStandard time after setTime is ";
	t.printStandard();

	t.setTime(99, 99, 99);
	cout << "\n\n\t\tAfter attempting invalid settings:" << "\n\t\tStandard time: ";
	t.printUnivetsal();

	cout << "\n\t\tStandard time: ";

	t.printStandard();
	cout <<endl << endl;

	return 0;
} 
