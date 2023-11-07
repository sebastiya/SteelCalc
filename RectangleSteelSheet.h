#pragma once
#include "SteelSheet.h"
class RectangleSteelSheet : public SteelSheet
{
	double width;
	double length;
public:
	RectangleSteelSheet();
	RectangleSteelSheet(double thickness, double density, double width, double length);
	~RectangleSteelSheet();
	double Area() const override;
	void Information() const override;
};

