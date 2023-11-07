#pragma once
#include "SteelSheet.h"
class SquareSteelSheet : public SteelSheet
{
	double side;
public:
	SquareSteelSheet();
	SquareSteelSheet(double thickness, double density, double side);
	~SquareSteelSheet();
	double Area() const override;
	void Information() const override;
};


