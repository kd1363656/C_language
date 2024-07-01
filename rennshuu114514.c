#include <stdio.h>
#include <math.h>

double length(double, double);

int main() {
	double d1, d2, d3;
	double a = 1.0, b = 2.0, c = 2.7;

	d1 = length(a, b);
	d2 = length(4.1, 5.7);
	d3 = length(c, 2.8);
	printf("d1 = %.5f,d2 = %f,d3 = %f", d1, d2, d3);
	return 0;
}

double length(double m, double n) {

	double r = sqrt(m * m + n * n);
	return r;

}