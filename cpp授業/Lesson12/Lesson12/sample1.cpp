#include <iostream>
using namespace std;

//Car�N���X�̐錾
class Car {
public:
	int num;
	double gas;
	void show();
};

//Car�N���X�����o�֐��̒�`
void Car::show()
{
	cout << "�Ԃ̃i���o�[��" << num << "�ł��B\n";
	cout << "�K�\�����ʂ�" << gas << "�ł��B\n";
}

int main()
{
	Car car1;

	car1.num = 1234;
	car1.gas = 20.5;

	car1.show();

	//�ǋL P368
	//�݌v�}����Ƀ|�C���^���쐬
	Car* pCar;

	//�|�C���^�ɑ΂��āA�V�����Ԃ�����đ��
	//�V�����Ԃ̏Z��(�A�h���X)���ł���
	//�ł����A�h���X���|�C���^���o����
	pCar = new Car;

	//�|�C���^�̏ꍇ
	//�����o�ϐ��ւ̃A�N�Z�X�ɃA���[���Z�q�u->�v���g��
	pCar->num = 5678;
	pCar->gas = 100.9;
	pCar->show();

	//������Ԃ�j������@���Y��Ȃ��悤��
	delete pCar;

	return 0;
}