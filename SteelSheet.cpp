#include "SteelSheet.h"

SteelSheet::SteelSheet() : thickness(0.0), density(0.0)
{}

SteelSheet::SteelSheet(double thickness, double density) : thickness(thickness), density(density)
{}

SteelSheet::~SteelSheet()
{}

double SteelSheet::Weight() const
{
	return Area() * thickness * density;
}
