#include "Header.h"



int main()
{
	skip_list* sl = create_sl();
	insert(sl, 18, "Laguna Niguel");
	insert(sl, 41, "Mission Viejo");
	insert(sl, 22, "San Clemente");
	insert(sl, 44, "Irvine");
	erase(sl, 41);
	erase(sl, 42);
	insert(sl, 58, "Lake Forest");
	insert(sl, 32, "San Diego");
	insert(sl, 49, "Anaheim");
	erase(sl, 58);
	insert(sl, 31, "Los Angeles");
	insert(sl, 15, "Orange");
	insert(sl, 72, "Palm Springs");
	insert(sl, 41, "Riverside");
	erase(sl, 72);
	insert(sl, 19, "Brea");
	insert(sl, 60, "Santa Ana");
	insert(sl, 35, "Tustin");
	insert(sl, 103, "Oceanside");
	insert(sl, 11, "La Jolla");
	insert(sl, 18, "Del Mar");
	insert(sl, 22, "Aliso Viejo");
	insert(sl, 49, "Laguna Beach");
	erase(sl, 41);
	insert(sl, 42, "Vista");
	insert(sl, 49, "San Diego");
	insert(sl, 99, "San Juan");
	insert(sl, 29, "Dana Point");
	insert(sl, 88, "El Segundo");
	insert(sl, 41, "San Clemente");
	insert(sl, 62, "Laguna Hills");
	print_sl(sl);
	return 0;
}
