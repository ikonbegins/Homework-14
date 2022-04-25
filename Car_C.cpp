#include"Car_C.h"


Car_C::Car_C() :Vehicle_C()
{
	numDoors = 0;
}
Car_C::Car_C(string manfuc, int yB, int n) : numDoors(n), Vehicle_C(manfuc, yB)
{

}
int Car_C::Get_NumDoors() const
{
	return numDoors;
}
void Car_C::Set_NumDoors(int numD)
{
	numDoors = numD;
}
void Car_C::Display_Info()
{
	cout << "\nManufacturer " << Get_VehicleMan();
	cout << "\nYear Build " << Get_VehicleYearB();
	cout << "\nDoors " << numDoors;
}