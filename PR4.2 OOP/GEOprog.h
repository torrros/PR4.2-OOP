#pragma once
#include "Element.h"
#include <iostream>
using namespace std;

class GEOprog: public Element
{
	double a;
	double r;
public:
	GEOprog (double a=0, double r=0) : a(a), r(r) {}
	
	double geta() const { return a; }
	double getr() const { return r; }
	void seta(double a) { this->a = a; }
	void setr(double r) { this->r = r; }

	virtual double element(int j) const override;
	
	
};

