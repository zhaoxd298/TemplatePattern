#ifndef COFFEINEBEVERAGE_H
#define COFFEINEBEVERAGE_H

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// 模板方法类
class CoffeineBeverage
{
public:
	CoffeineBeverage(){}
	virtual ~CoffeineBeverage(){}

	void prepareRecipe()
	{
		boilWater();
		brew();
		pourInCup();
		if (customerWantsCondiments()) {
			addCondiments();
		}
	}

	virtual void brew() = 0;
	virtual void addCondiments() = 0;
	void boilWater()
	{
		cout << "Boiling water" << endl;
	}
	void pourInCup()
	{
		cout << "Pouring into cup" << endl;
	}
	virtual bool customerWantsCondiments()		// 钩子
	{
		return true;
	}
};

#endif
