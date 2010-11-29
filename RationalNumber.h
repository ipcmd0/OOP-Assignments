/*
 *  RationalNumber.h
 *  proj5
 *
 *  Created by Kayvan on 11/23/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */
#include <iostream>
using namespace std;

class RationalNumber {
public:
	//initializing Constructors/functions
	RationalNumber();
	RationalNumber(int, int);
	void initRational();
	void setNumerator(int);
	int getNumerator();
	void setDenominator(int);
	int getDenominator();
	int getGCD();
	void simplifyRational(int);
	void print();
//	friend ostream &operator << (ostream &output, RationalNumber &pro) {
//		return pro.display(output);
//	}
//	friend ostream & operator<<(ostream &, RationalNumber &);
		
	//Overloaded operators
	RationalNumber operator+(RationalNumber) const; 
	RationalNumber operator-(RationalNumber) const;
	RationalNumber operator*(RationalNumber) const;
	RationalNumber operator/(RationalNumber) const;
	
	
private:
	//declaring private variables
	int numerator;
	int denominator;
//	virtual ostream & operator<<(ostream & output, RationalNumber & fraction) {
//		output << fraction.numerator << "/" << fraction.denominator;	
//		return output;
//	};	
};


