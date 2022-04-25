#ifndef Car_C_
#define Car_C_
#include "Vehicle_C.h"
#include <string>

using namespace std;

class Car_C : public Vehicle_C
{
private:
	int numDoors;

public:
	Car_C();
	Car_C(string, int, int);

	int Get_NumDoors() const;
	void Set_NumDoors(int);
	void Display_Info();


};
#endif
