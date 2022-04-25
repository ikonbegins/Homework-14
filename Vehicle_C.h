#ifndef Vechile_H_
#define Vechile_H_
#include <iostream>

using namespace std;

class Vehicle_C
{
private:
	string manuafacturer;
	int yearB;

public:
	Vehicle_C();
	Vehicle_C(string, int);

	void Set_VehicleMan(string);
	void Set_VehicleYearB(int);

	string Get_VehicleMan()const;
	int Get_VehicleYearB() const;


	virtual void Display_Info();
};
#endif
