// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "linkedlist.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl;
	cout << "size: " << cows.getSize()<< endl;
	cout << "sum: " << cows.getSum() << endl << endl;
	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cows.insertAsLast(4.57);
	cout << "cows list  :  " << cows << endl;
	cout << "size: " << cows.getSize() << endl;
	cout << "sum: " << cows.getSum() << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl;
	cout << "size: " << cows.getSize() << endl;
	cout << "sum: " << cows.getSum() << endl << endl;
	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "size: " << cows.getSize() << endl;
	cout << "sum: " << cows.getSum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "size: " << horses.getSize() << endl;
	cout << "sum: " << horses.getSum() << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	horses.insertAsLast(9.12);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "size: " << cows.getSize() << endl;
	cout << "sum: " << cows.getSum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "size: " << horses.getSize() << endl;
	cout << "sum: " << horses.getSum() << endl << endl;

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "size: " << cows.getSize() << endl;
	cout << "sum: " << cows.getSum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "size: " << horses.getSize() << endl;
	cout << "sum: " << horses.getSum() << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "size: " << pigs.getSize() << endl;
	cout << "sum: " << pigs.getSum() << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "size: " << cows.getSize() << endl;
	cout << "sum: " << cows.getSum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "size: " << horses.getSize() << endl;
	cout << "sum: " << horses.getSum() << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "size: " << pigs.getSize() << endl;
	cout << "sum: " << pigs.getSum() << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "size: " << cows.getSize() << endl;
	cout << "sum: " << cows.getSum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "size: " << horses.getSize() << endl;
	cout << "sum: " << horses.getSum() << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "size: " << pigs.getSize() << endl;
	cout << "sum: " << pigs.getSum() << endl << endl;

	cout << "End of code" << endl;

	return 0;
}
