#include "Hash.h"
#include "Secondhash.h"
int main()
{
	cout << "******************************************************************************" << endl;
	cout << "****************************Author: Mohammed Taei*****************************" << endl;
	cout << "**************************Date: October 14, 2019****************************" << endl;
	cout << "*************************Assignment 4: Binary Trees***************************" << endl;
	cout << "Part ONE: program will implement a map with "
		"double hashing." << endl;
	cout << "h(k) = k mod 29" << endl;
	cout << "h’(k) = 11 - k mod 11 " << endl;
	cout << "N = 29 (size of the array)" << endl;
	cout << "Part TWO: program will implement a map with "
		"quadratic probing." << endl;
	cout << "h(k) = k mod 29" << endl << endl;
	cout << "******************************************************************************" << endl << endl;

	DoubleHash h;
	cout << "PART ONE: DOUBLE HASHING" << endl << endl;
	h.insertHash(18, "Laguna Niguel");
	h.insertHash(41, "Mission Viejo");
	h.insertHash(22, "San Clemente");
	h.insertHash(44, "Irvine");
	h.deleteHash(41);
	h.insertHash(58, "Lake Forest");
	h.insertHash(32, "San Diego");
	h.insertHash(49, "Anaheim");
	h.deleteHash(58);
	h.insertHash(31, "Los Angeles");
	h.insertHash(17, "Orange");
	h.insertHash(72, "Palm Springs");
	h.insertHash(41, "Riverside");
	h.deleteHash(72);
	h.insertHash(19, "Brea");
	h.insertHash(60, "Santa Ana");
	h.insertHash(35, "Tustin");
	h.insertHash(103, "Oceanside");
	h.insertHash(11, "La Jolla");
	h.insertHash(18, "Del Mar");
	h.insertHash(22, "Aliso Viejo");
	h.insertHash(49, "Laguna Beach");
	h.deleteHash(41);
	h.insertHash(42, "Vista");
	h.insertHash(49, "San Diego");
	h.insertHash(99, "San Juan");
	h.insertHash(29, "Dana Point");
	h.insertHash(88, "El Segundo");
	h.insertHash(41, "San Clemente");
	h.insertHash(62, "Laguna Hills");

	h.displayHash();


	QuadHash q;
	cout << "PART TWO: QUADRATIC HASHING" << endl << endl;
	q.insertHash(18, "Laguna Niguel");
	q.insertHash(41, "Mission Viejo");
	q.insertHash(22, "San Clemente");
	q.insertHash(44, "Irvine");
	q.deleteHash(41);
	q.insertHash(58, "Lake Forest");
	q.insertHash(32, "San Diego");
	q.insertHash(49, "Anaheim");
	q.deleteHash(58);
	q.insertHash(31, "Los Angeles");
	q.insertHash(17, "Orange");
	q.insertHash(72, "Palm Springs");
	q.insertHash(41, "Riverside");
	q.deleteHash(72);
	q.insertHash(19, "Brea");
	q.insertHash(60, "Santa Ana");
	q.insertHash(35, "Tustin");
	q.insertHash(103, "Oceanside");
	q.insertHash(11, "La Jolla");
	q.insertHash(18, "Del Mar");
	q.insertHash(22, "Aliso Viejo");
	q.insertHash(49, "Laguna Beach");
	q.deleteHash(41);
	q.insertHash(42, "Vista");
	q.insertHash(49, "San Diego");
	q.insertHash(99, "San Juan");
	q.insertHash(29, "Dana Point");
	q.insertHash(88, "El Segundo");
	q.insertHash(41, "San Clemente");
	q.insertHash(62, "Laguna Hills");

	q.displayHash();

	
}


