/*
 *  RationalNumber.cpp
 *  proj5
 *
 *  Created by Kayvan on 11/23/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "RationalNumber.h"
#include <iostream>
using namespace std;

//Empty Constructor
RationalNumber::RationalNumber() {
	
};

//Rational Constructor
RationalNumber::RationalNumber(int num, int den) {
	if (num != 0)
		if (den !=0)
			numerator = num;
	denominator = den;
}

void RationalNumber::initRational() {
	char slash;
	cout << "\nPlease enter a rational number in the form of a/b: ";
	cin >> numerator >> slash >> denominator;
	if (denominator == 0) {
		cout << "\nCannot divide by 0, please enter another denominator: ";
		cin >> denominator;
	}
}

//sets the numerator for the rational
void RationalNumber::setNumerator(int num) {
	numerator = num;
}

//obtains the value of the numerator
int RationalNumber::getNumerator() {
	return numerator;
}

//sets the denominator for the rational
void RationalNumber::setDenominator(int den) {
	denominator = den;
}

//obtains the value of the denominator
int RationalNumber::getDenominator() {
	return denominator;
}

//Obtains the greatest commin divisor
int RationalNumber::getGCD() {
	int temp;
	int num = numerator;
	int den = denominator;
	while (den != 0) {
		temp = den;
		den = num % den;
		num = temp;
	}
	return num;
}

void RationalNumber::simplifyRational(int gcd) {
	numerator = numerator / gcd;
	denominator = denominator / gcd;
}

//Display Rational number
void RationalNumber::print() {
	cout << numerator << "/" << denominator << endl;
}

RationalNumber RationalNumber::operator+(RationalNumber rationalptr) const {
	RationalNumber ptr;
	ptr.numerator = numerator * rationalptr.denominator + denominator * rationalptr.numerator;
	ptr.denominator = denominator * rationalptr.denominator;
	return(ptr);
}

RationalNumber RationalNumber::operator-(RationalNumber rationalptr) const {
	RationalNumber ptr;
	ptr.numerator = numerator * rationalptr.denominator - denominator * rationalptr.numerator;
	ptr.denominator = denominator * rationalptr.denominator;
	return(ptr);
}

RationalNumber RationalNumber::operator*(RationalNumber rationalptr) const {
	RationalNumber ptr; 
	ptr.numerator = numerator * rationalptr.numerator;
	ptr.denominator = denominator * rationalptr.denominator;
	return(ptr);
}

RationalNumber RationalNumber::operator/(RationalNumber rationalptr) const {
	RationalNumber ptr;
	ptr.numerator = numerator * rationalptr.denominator;
	ptr.denominator = denominator * rationalptr.numerator;
	return(ptr);
}



