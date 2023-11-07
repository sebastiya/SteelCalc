#include "Header.h"
#include "TriangleSteelSheet.h"

TriangleSteelSheet::TriangleSteelSheet() : SteelSheet(thickness, density), a(0.0), b(0.0)
{}

TriangleSteelSheet::TriangleSteelSheet(double thickness, double density, double a, double b) : SteelSheet(thickness, density), a(a), b(b)
{}

TriangleSteelSheet::~TriangleSteelSheet()
{}

double TriangleSteelSheet::Area() const
{
	return 0.5 * a * b;
}

void TriangleSteelSheet::Information() const
{
	cout << "> Triangle Steel Sheet - Side A: " << a << " mm, Side B: " << b << " mm\n";
}
