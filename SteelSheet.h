#pragma once
class SteelSheet
{
protected:
	double thickness;
	double density;
public:
	SteelSheet();
	SteelSheet(double thickness, double density);
	~SteelSheet();
	virtual double Area() const = 0;
	double Weight() const;
	virtual void Information() const = 0;
};

