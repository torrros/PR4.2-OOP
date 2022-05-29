#include "ARprog.h"
#include <iostream>

using namespace std;

double ARprog::element( int j) const 
{
	return geta() + j*getd() ;
}

