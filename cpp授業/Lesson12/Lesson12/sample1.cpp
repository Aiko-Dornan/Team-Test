#include <iostream>
using namespace std;

//Carクラスの宣言
class Car {
public:
	int num;
	double gas;
	void show();
};

//Carクラスメンバ関数の定義
void Car::show()
{
	cout << "車のナンバーは" << num << "です。\n";
	cout << "ガソリン量は" << gas << "です。\n";
}

int main()
{
	Car car1;

	car1.num = 5678;
	car1.gas = 50.2;

	car1.show();


	return 0;
}