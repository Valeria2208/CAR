//
//  CAR.cpp
//  CAR
//
//  Created by Valeria Dudinova on 20.09.2024.
//

#include "Car.h"
#include <iostream>

using namespace std;

Car::Car(const char* brand, const char* model, int year, double price)
    : year(year), price(price)
{
    int brandLen = 0;
    while (brand[brandLen] != '\0') ++brandLen;
    this->brand = new char[brandLen + 1];
    for (int i = 0; i < brandLen; ++i)
    {
        this->brand[i] = brand[i];
    }
    this->brand[brandLen] = '\0';

    int modelLen = 0;
    while (model[modelLen] != '\0') ++modelLen;
    this->model = new char[modelLen + 1];
    for (int i = 0; i < modelLen; ++i)
    {
        this->model[i] = model[i];
    }
    this->model[modelLen] = '\0';
}

Car::~Car()
{
    delete[] brand;
    delete[] model;
}

const char* Car::getBrand() const
{
    return brand;
}

const char* Car::getModel() const
{
    return model;
}

int Car::getYear() const
{
    return year;
}

double Car::getPrice() const
{
    return price;
}

void Car::setBrand(const char* brand)
{
    delete[] this->brand;
    int brandLen = 0;
    while (brand[brandLen] != '\0') ++brandLen;
    this->brand = new char[brandLen + 1];
    for (int i = 0; i < brandLen; ++i)
    {
        this->brand[i] = brand[i];
    }
    this->brand[brandLen] = '\0';
}

void Car::setModel(const char* model)
{
    delete[] this->model;
    int modelLen = 0;
    while (model[modelLen] != '\0') ++modelLen;
    this->model = new char[modelLen + 1];
    for (int i = 0; i < modelLen; ++i) {
        this->model[i] = model[i];
    }
    this->model[modelLen] = '\0';
}

void Car::setYear(int year)
{
    this->year = year;
}

void Car::setPrice(double price)
{
    this->price = price;
}

// Введення інформації
void Car::input() {
    char buffer[100];

    cout << "Enter the car brand: ";
    cin >> buffer;
    setBrand(buffer);

    cout << "Enter the car model: ";
    cin >> buffer;
    setModel(buffer);

    cout << "Enter the year of manufacture of the vehicle: ";
    cin >> year;

    cout << "Enter the price of the carя: ";
    cin >> price;
}

void Car::output() const
{
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "year of manufacture: " << year << endl;
    cout << "Price: " << price << endl;
}

