#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

void printChooseMenu()
{
    cout << "\nOkay, lest go!!" << endl;
    cout << "\n1: Fiat Toro..." << endl;
    cout << "\n2: Audi A4..." << endl;
    cout << "\n3: Golf Gti..." << endl;
    cout << "\n4: Uninho de firma..." << endl;
	cout << "\n5: Create a new car" << endl;
}

void newcar(string nColor, string nPrefix, string nModel,int nAge, double nValue)
{
	Car newCar(nColor, nPrefix, nModel, nAge, nValue );
}

int main()
{
    int choice;
    string answer;
	string nColor;
	string nPrefix;
	string nModel;
	int    nAge;
	double nValue;

    cout << "Welcome to the car shop!" << endl;
    cout << "\nDo you want buy or create a car ? Yes/No" << endl;
    cin >> answer;

    if (answer != "yes") {
        if (answer == "no") {
            cout << "No problem, come back anytime! :)\n";
            return 0;
        }
        cout << "I'm sorry but we don't have that option :/\n";
        return 128;
    }

    printChooseMenu();
    cin >> choice;

    Car toro("White", "Fiat", "Toro", 2019, 90990);
	
	Car audi("Black", "Audi", "A4", 2021, 242990);

	Car golfGti("Black, White", "Volkswagen", "Golf GTI", 2019, 143790);
	
	Car uno("Blue", "Fiat", "Uno de firma", 1995, 7000);

	switch(choice) 
		{
			case 1:
				toro.printCar();
				break;

			case 2:
				audi.printCar();
				break;

			case 3:
				golfGti.printCar();
				break;

			case 4:
				uno.printCar();
				break;
			
			case 5:
				cout<< "ok, first write the Model" <<endl;
				cin>> nModel;
				cout<< "\nBrand" <<endl;
				cin>>nPrefix;
				cout<< "\nColor" <<endl;
				cin>>nColor;
				cout<< "\nYear" <<endl;
				cin>>nAge;
				cout<< "\nValue" <<endl;
				cin>>nValue;
				newcar(nColor, nPrefix, nModel, nAge, nValue);
				break;
			
        default:
            cout << "\nWe have thats models: " << endl;
            break;
		}

}	 