#include "functions.h"

const double pi = 3.14159265359;

double abs(double x) {
	return (x < 0) ? -x : x;
}

double exp(double x, double accuracy) {
	double c = 1;
	double res = 1;
	
	for (int i = 1; c >= accuracy; i++) {
		c *= x / i;
		res += c;
	}

	return res;

}



double ln(double z, double accuracy) {
	
	double x = (z - 1) / (z + 1), sqx = x * x, c = x, res = x;

	for (int i = 1; c / (i + 0.5) >= accuracy; i++) {
		c *= sqx;
		res += c / (2 * i + 1);
	}

	return res * 2;
}



double cos(double x, double accuracy) {


	if (x > 2 * pi) {
		for (; x > 2 * pi; x -= 2 * pi);
	}
	else if (x < 2 * pi) {
		for (; x < 2 * pi; x += 2 * pi);
	}



	double c = 1, res = 1, sqx = x * x;

	for (int i = 1; abs(c) > accuracy; i++) {
		c *= -1 * sqx / (2 * i) / (2 * i - 1);
		res += c;
	}

	return res;
}



double sh(double x, double accuracy) {

	double c = x, res = x, sqx = x * x;

	for (int i = 1; c >= accuracy; i++) {
		c *= sqx / (2 * i) / (2 * i + 1);
		res += c;
	}

	return res;
}



double arctg(double x, double accuracy) {

	double c = x, res = x, sqx = x * x;

	for (int i = 1; abs(c) / (2 * i + 1) >= accuracy; i++) {
		c *= -1 * sqx;
		res += c / (2 * i + 1);
	}

	return res;
}