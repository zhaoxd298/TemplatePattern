#include "CoffeineBeverage.h"
#include "Coffee.h"
#include "Tea.h"


int main()
{
	Tea* tea = new Tea();
	Coffee* coffee = new Coffee();

	cout << "\nMaking tea ..." << endl;
	tea->prepareRecipe();

	cout << "\nMaking coffee ..." << endl;
	coffee->prepareRecipe();
}