//
//  CAR.h
//  CAR
//
//  Created by Valeria Dudinova on 20.09.2024.
//

#ifndef CAR_H
#define CAR_H

#include <iostream>

class Car
{
private:
    char* brand;
    char* model;
    int year;
    double price;

public:
    Car(const char* brand, const char* model, int year, double price);

    ~Car();

    const char* getBrand() const;
    const char* getModel() const;
    int getYear() const;
    double getPrice() const;

    void setBrand(const char* brand);
    void setModel(const char* model);
    void setYear(int year);
    void setPrice(double price);

    void input();

    void output() const;
};

#endif 
