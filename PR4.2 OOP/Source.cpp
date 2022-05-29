#include "ARprog.h"
#include "GEOprog.h"
#include "Element.h"
#include<iostream>

using namespace std;

int main()
{
	
	Element ** arr = new Element*[3];
	arr[0] = new ARprog(10, 10);
	arr[1] = new GEOprog(1, 2);
	cout << "Ar prog" << endl;
	for (int i = 0; i < 11; i++)
	{
		
		cout << "|" << i << "| = " << dynamic_cast<ARprog*>(arr[0])->element(i) << endl;
		
	}
	cout << endl;
	cout << "Geo prog" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "|" << i << "| = " << dynamic_cast<GEOprog*> (arr[1])->element(i) << endl;
	
	}
}