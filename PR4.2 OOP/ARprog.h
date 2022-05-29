#pragma once
#include "Element.h"
#include <iostream>

using namespace std;

class ARprog:public Element
{
	double a;
	double d;
public:
	ARprog(double a=0, double d=0): a(a), d(d) {}
	double geta()const { return a; }
	double getd()const { return d; }
	void seta(double a){ this->a = a; }
	void setd(double d)	{ this->d = d; }

	virtual double element(int j) const override;
	
	
};


