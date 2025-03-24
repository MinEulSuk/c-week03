#include <iostream>
using namespace std;
int main() {
	int a = 9;
	int* pa = &a;
	int** ppa = &pa;
	cout << **ppa << '\n';// 이중포인터 출력
	cout << &a << " / " << pa << " / " <<*ppa <<'\n';
	cout << a << " / " << *pa << " / " << **ppa << '\n'; 
	cout << &pa << " / " << ppa << '\n';//ppa = &pa 즉 pa의 주소값과 동일
	cout << &ppa << '\n';
	cout << "테스트입니다." << '\n';
	return 0;
}





