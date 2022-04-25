#include "SUV_C.h"

SUV_C::SUV_C() : Car_C()
{
	gasCap = 0;
}
SUV_C::SUV_C(string man, int year, int door, int cap) : Car_C(man, year, door)
{
	gasCap = cap;
}
int SUV_C::Get_GasCap() const
{
	return gasCap;
}
void SUV_C::Set_GasCap(int gs)
{
	gasCap = gs;
}
void SUV_C::DisplayInfo()
{
	cout<<"\nManifacturer "<< Get_VehicleMan();
	cout << "\nYear Build " << Get_VehicleYearB();
	cout << "\nDoors " << Get_NumDoors();
	cout << "\nGas tank capacity " << gasCap;
}
