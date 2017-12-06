#ifndef COFFEE_H
#define COFFEE_H

#include <string>
#include "CoffeineBeverage.h"

using std::string;

class Coffee : public CoffeineBeverage
{
public:
	Coffee(){}
	~Coffee(){}

	void brew()
	{
		cout << "Dripping Coffee through filter" << endl;
	}
	void addCondiments()
	{
		cout << "Adding Sugar and Milk" << endl;
	}
	bool customerWantsCondiments()
	{
		string ret = gerUserInput();

		if ("y" == ret) {
			return true;
		} else {
			return false;
		}
	}
private:
	string gerUserInput()
	{
		string ret = "";

		cout << "Would you like mild and sugar with your coffee (y/n)?" << endl;

		cin >> ret;
		
		if ("" == ret) {
			return "n";
		}
		return ret;
	}
};

#endif
