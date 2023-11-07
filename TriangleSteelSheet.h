#pragma once
#include "SteelSheet.h"
class TriangleSteelSheet : public SteelSheet
{
	double a;
	double b;
public:
	TriangleSteelSheet();
	TriangleSteelSheet(double thickness, double density, double a, double b);
	~TriangleSteelSheet();
	double Area() const override;
	void Information() const override;
};

