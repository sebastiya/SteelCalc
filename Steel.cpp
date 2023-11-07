#include "Header.h"
#include "SteelSheet.h"
#include "SquareSteelSheet.h"
#include "RectangleSteelSheet.h"
#include "TriangleSteelSheet.h"

int main() {
    const int numSheets = 15;
    SteelSheet* sheets[numSheets]{};

    for (int i = 0; i < numSheets; ++i) {
        double thickness = rand() % 10 + 1; 
        double density = (rand() % 10 + 1) * 100;

        if (i % 3 == 0) {
            double side = rand() % 100 + 50; 
            sheets[i] = new SquareSteelSheet(thickness, density, side);
        }
        else if (i % 3 == 1) {
            double width = rand() % 100 + 50; 
            double length = rand() % 100 + 50; 
            sheets[i] = new RectangleSteelSheet(thickness, density, width, length);
        }
        else {
            double a = rand() % 100 + 50; 
            double b = rand() % 100 + 50; 
            sheets[i] = new TriangleSteelSheet(thickness, density, a, b);
        }
    }

    double totalArea = 0.0;
    double totalWeight = 0.0;

    for (int i = 0; i < numSheets; ++i) {
        sheets[i]->Information();
        totalArea += sheets[i]->Area();
        totalWeight += sheets[i]->Weight();
    }

    cout <<  endl;
    cout << "Total:" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "Total Area of All Sheets: " << totalArea << " mm^2\n";
    cout << "Total Weight of All Sheets: " << totalWeight << " kg\n";
    cout << "---------------------------------------------------" << endl;




    for (int i = 0; i < numSheets; ++i) {
        delete sheets[i];
    }
    cout << "\n\nFinish" << endl;
}

