#include <iostream>
#include "Car_SportsCar_Class.h"

int main() {
	// 1. Normal Car Test
	Car normalCar(50, "Normal Car", 3);
	normalCar.display();
	normalCar.speedUp();
	normalCar.display();

	printf("-------------------\n");

	// 2. SportsCar Test
	SportsCar mySportsCar(100, "Sports Car", 5, true);
	mySportsCar.display();
	mySportsCar.speedUp(); // Turbo speed up (+20)
	mySportsCar.display();

	printf("-------------------\n");

	// Address Test
	normalCar.whereAmI();
	mySportsCar.whereAmI();

	return 0;
}