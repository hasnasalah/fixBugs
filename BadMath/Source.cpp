
#include <iostream>
#include <iomanip>
using namespace std;

float average(int& n1, int& n2, int& n3) {
	return (static_cast<float> (n1 + n2 + n3)) / 3.0f;
}


int main()
{
	int n1 = 0, n2 = 0, n3 = 0;
	int* ptr1 = nullptr;
	int* ptr2 = nullptr;
	int* ptr3 = nullptr;
	ptr1 = &n1;
	ptr2 = &n2;
	ptr3 = &n3;
	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: ";
	cin >> *ptr1;
	cout << "Second number: ";
	cin >> *ptr2;
	cout << "Third number: ";
	cin >> *ptr3;


	cout << setprecision(1) << fixed << "The average is " << average(*ptr1, *ptr2, *ptr3);

	return 0;
}