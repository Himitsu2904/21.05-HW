#define _CRT_SECURE_NO_WARNINGS
#include "car.h"
#include <iostream>
using namespace std;

char* car::shop = nullptr;

car::car()
{
	model = new char[4];
	strcpy(model, "---");
	price = 0;
	year = 0;
}

car::car(const char* _model, float _price) :car()
{
	if (model != nullptr)
	{
		delete[] model;
	}
	model = new char[strlen(_model) + 1];
	strcpy(model, _model);
	if (_price > 0)
	{
		price = _price;
	}
}

car::car(const char* _model, float _price, int _year, const char* _shop) :car(_model, _price)
{
	if (_year > 0)
	{
		year = _year;
	}
	if (shop != nullptr)
	{
		delete[] shop;
	}
	shop = new char[strlen(_shop) + 1];
	strcpy(shop, _shop);
}

void car::show()const
{
	cout << "\tДанные про машину:";
	cout << "\nМодель: " << model;
	cout << "\nЦена: " << price;
	cout << "\nГод производства: " << year;
	cout << "\nМагазин: " << shop;
}

car::car(const car& car) :model(nullptr), price(0), year(0)
{
	model = new char[strlen(car.model) + 1];
	strcpy(model, car.model);
	price = car.price;
	year = car.year;
}

void car::car_copy(car car2)
{
	model = new char[strlen(car2.model) + 1];
	strcpy(model, car2.model);
	price = car2.price;
	year = car2.year;
}

void car::del()
{
	if (shop != nullptr)
	{
		delete[] shop;
	}
}

car::~car()
{
	delete[] model;
}