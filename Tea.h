#ifndef TEA_H
#define TEA_H

#include <string>
#include "CoffeineBeverage.h"

using std::string;

// 茶类（具体类）
class Tea : public CoffeineBeverage
{
public:
	Tea(){}
	~Tea(){}

	void brew()
	{
		cout << "Steeping the tea" << endl;
	}
	void addCondiments()
	{
		cout << "Adding Lemon" << endl;
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

		cout << "Would you like lemon with your tea (y/n)?" << endl;

		cin >> ret;

		if ("" == ret) {
			return "n";
		}
		return ret;
	}
};

#endif
