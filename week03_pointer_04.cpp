#include <iostream>
using namespace std;
int main() {
	int a = 9;
	int* pa = &a;
	int** ppa = &pa;
	cout << **ppa << '\n';// ���������� ���
	cout << &a << " / " << pa << " / " <<*ppa <<'\n';
	cout << a << " / " << *pa << " / " << **ppa << '\n'; 
	cout << &pa << " / " << ppa << '\n';//ppa = &pa �� pa�� �ּҰ��� ����
	cout << &ppa << '\n';
	cout << "�׽�Ʈ�Դϴ�." << '\n';
	return 0;
}





