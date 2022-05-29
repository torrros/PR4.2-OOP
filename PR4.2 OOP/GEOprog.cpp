#include "GEOprog.h"
#include <iostream>

using namespace std;

double GEOprog :: element (int j) const 
{
	return geta() * pow( getr() , j ) ;

}

