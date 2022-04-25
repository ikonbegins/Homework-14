/*Avazbek Husainov
4/25/2022
Homework 14*/

#include"SUV_C.h"

int main()
{
	string manufact;
	int year;
	int numDoors;
	int gasCap;
	Vehicle_C vehicle;
	Car_C car;
	SUV_C suv;

	cout << "\nVehicle";
	cout << "\nEnter the manufacturer>";
	getline(cin, manufact);
	cout << "\nEnter the year build>";
	cin >> year;
	cin.ignore();
	
	vehicle.Set_VehicleMan(manufact);
	vehicle.Set_VehicleYearB(year);
	vehicle.Display_Info();

	cout << "\n\nCar";
	cout << "\nEnter the manufacturer>";
	getline(cin, manufact);
	cout << "\nEnter the year build>";
	cin >> year;
	cin.ignore();
	cout << "\nEnter the number of doors>";
	cin >> numDoors;
	cin.ignore();

	car.Set_VehicleMan(manufact);
	car.Set_VehicleYearB(year);
	car.Set_NumDoors(numDoors);
	car.Display_Info();

	cout << "\n\nSUV";
	cout << "\nEnter the manufacturer>";
	getline(cin, manufact);
	cout << "\nEnter the year build>";
	cin >> year;
	cin.ignore();
	cout << "\nEnter the number of doors>";
	cin >> numDoors;
	cin.ignore();
	cout << "\nEnter the gas cap>";
	cin >> gasCap;
	cin.ignore();

	suv.Set_VehicleMan(manufact);
	suv.Set_VehicleYearB(year);
	suv.Set_NumDoors(numDoors);
	suv.Set_GasCap(gasCap);
	suv.DisplayInfo();

	cout << endl << endl;
	system("pause");
	return 0;
}