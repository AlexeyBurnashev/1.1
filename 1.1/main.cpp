#include <iostream>
using namespace std;

int main() {

	setlocale(LC_ALL, "");

	int r = 0;
	int t = 0;

	cout << "¬ведите два числа: ";
	cin >> r >> t;

	cout << endl;
	cout << r << " + " << t << " = " << r + t << endl;
	cout << r << " - " << t << " = " << r - t << endl;
	cout << r << " * " << t << " = " << r * t << endl;
	cout << r << " / " << t << " = " << float (r) / t << endl;
	cout << r << " & " << t << " = " << (r & t) << endl;
	cout << r << " | " << t << " = " << (r | t) << endl;
	cout << r << " ^ " << t << " = " << (r ^ t) << endl;

	return 0;
}