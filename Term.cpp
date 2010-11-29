#include "Term.h"
#include <iostream>
using namespace std;

Term::Term() {
	rational_vector.reserve(3);
}
void Term::initExponent() {
	cout << "Enter the exponent: ";
	cin >> exponent;
}

void Term::setExponent(int exp) {
	exponent = exp;
}
int Term::getExponent() {
	return exponent;
}

void Term::prepTerm() {
	RationalNumber rational;
	rational.initRational();
	rational_vector.push_back(rational);

	cout << "Enter the exponent: ";
	cin >> exponent;
}

void Term::print() {
//	RationalNumber::print();
//	cout << rational_vector[0];
	cout << rational.numerator << "/" << rational.denominator << "x^" << getExponent();
	cout << "x^" << getExponent();
}
/*
void Term::displayTerm() {
	vector<RationalNumber>::iterator it;
	
	for (it=rational_vector.begin(); it!=rational_vector.end(); ++it) {
		cout << ((RationalNumber.print())*it) << endl;	
	}
}
*/
