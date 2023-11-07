#include "Header.h"
#include "RectangleSteelSheet.h"

RectangleSteelSheet::RectangleSteelSheet() : SteelSheet(thickness, density), width(0.0), length(0.0)
{
}

RectangleSteelSheet::RectangleSteelSheet(double thickness, double density, double width, double length) : SteelSheet(thickness, density), width(width), length(length)
{}

RectangleSteelSheet::~RectangleSteelSheet() 
{}

double RectangleSteelSheet::Area() const
{
	return width * length;
}

void RectangleSteelSheet::Information() const
{
	cout << "\n=================================================================================\n";
	cout << "> Rectangle Steel Sheet - Width: " << width << " mm, Length: " << length << " mm\n";
}
