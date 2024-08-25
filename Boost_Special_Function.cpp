#include<boost/math/special_functions.hpp>
#include<iostream>

using namespace boost::math;
using namespace std;

double sum(double a, double b) {
	return a + b;
}

double mul(double c, double d) {
	return 2 * c * d;
}

int main() {

	double A = sin_pi(1.0 / 3);
	double B = sin_pi(1.0 / 4);
	sum(A, B);

	double C = sin_pi(((1.0 / 3) + (1.0 / 4)) / 2);
	double D = cos_pi(((1.0 / 3) - (1.0 / 4)) / 2);
	mul(C, D);

	double val_sum = sum(A, B);
	double val_mul = mul(C, D);

	cout << val_mul << ' ' << val_sum << endl;

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	cout << sin_pi(1.0 / 6) + sin_pi(1.0 / 6) << ' '
		<< 2 * sin_pi(((1.0 / 6) + (1.0 / 6)) / 2) * cos_pi(((1.0 / 6) - (1.0 / 6)) / 2) << endl;

	return 0;
}