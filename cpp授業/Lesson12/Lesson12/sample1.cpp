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

	car1.num = 1234;
	car1.gas = 20.5;

	car1.show();

	//追記 P368
	//設計図を基にポインタを作成
	Car* pCar;

	//ポインタに対して、新しく車を作って代入
	//新しい車の住所(アドレス)ができる
	//できたアドレスをポインタが覚える
	pCar = new Car;

	//ポインタの場合
	//メンバ変数へのアクセスにアロー演算子「->」を使う
	pCar->num = 5678;
	pCar->gas = 100.9;
	pCar->show();

	//作った車を破棄する　※忘れないように
	delete pCar;

	return 0;
}