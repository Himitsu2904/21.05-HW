#pragma once
class car
{
	float price;
	int year;
	char* model;
	static char* shop;
public:
	car();
	car(const char* _model, float _price);
	car(const char* _model, float _price, int _year, const char* shop);
	void show()const;
	char* Get_model()const
	{
		return model;
	}
	float Get_price()const
	{
		return price;
	}
	int Get_year()const
	{
		return year;
	}
	static char* Get_shop()
	{
		return shop;
	}
	car(const car &car);
	void car_copy(car car2);
	void del();
	~car();
};