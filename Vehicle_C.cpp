#include "Vehicle_C.h"


Vehicle_C::Vehicle_C()
{
	manuafacturer = "";
	yearB = 0;
}
Vehicle_C::Vehicle_C(string man, int yB)
{
	manuafacturer = man;
	yearB = yB;
}
void Vehicle_C::Set_VehicleMan(string man)
{
	manuafacturer = man;
}
void Vehicle_C::Set_VehicleYearB(int yB)
{
	yearB = yB;
}
string Vehicle_C::Get_VehicleMan()const
{
	return manuafacturer;
}
int Vehicle_C::Get_VehicleYearB()const
{
	return yearB;
}
void Vehicle_C::Display_Info()
{
	cout << "\nManufacturer " << manuafacturer;
	cout << "\nYear Build " << yearB;
}
