#include "Header.h"
#include "SquareSteelSheet.h"

SquareSteelSheet::SquareSteelSheet() : SteelSheet(thickness, density), side(0.0)
{}

SquareSteelSheet::SquareSteelSheet(double thickness, double density, double side) : SteelSheet(thickness, density), side(side)
{}

SquareSteelSheet::~SquareSteelSheet()
{}

double SquareSteelSheet::Area() const
{
	return side * side;
}

void SquareSteelSheet::Information() const
{
	cout << "> Square Steel Sheet - Side: " << side << " mm\n";
}
