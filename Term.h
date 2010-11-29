#include "RationalNumber.h"
#include <iostream>
#include <vector>
using namespace std;

class Term : public RationalNumber  {
public:
	Term();
	void initExponent();
	void setExponent(int);
	int getExponent();
	void prepTerm();
	void displayTerm();
	virtual void print();

private:
	int exponent;
	vector<RationalNumber> rational_vector;
};
