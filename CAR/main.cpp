//
//  main.cpp
//  CAR
//
//  Created by Valeria Dudinova on 20.09.2024.
//

#include "Car.h"
#include <iostream>
using namespace std;
int main()
{
    Car myCar("Toyota", "Corolla", 2021, 25000.0);

    myCar.output();

    cout << "\nUpdate vehicle information:\n";
    myCar.input();

    cout << "\nUpdated information:\n";
    myCar.output();

    return 0;
}

