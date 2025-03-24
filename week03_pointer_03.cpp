//#include <iostream>
//using namespace std;
//int main() {
//	int totalPrice = 0;
//	int people = 0;
//	//int ages[people];
//	//int ages = [people]이라 하면 오류가 발생함
//	//가변 값이 들어가면 안되기때문
//	cout << "몇 명입니까? ";
//	cin >> people;
//
//	int* ages;
//	ages = new int[people];//people의 값에 따라 변경됨 4명이면 4byte 메모리 4개 할당됨
//	//힙 메모리 동적할당 >> 포인터 변수만 할당받을 수 있음
//	for (int i = 0; i < people; i++) {
//		cout << "나이를 입력하세요 : ";
//		cin >> ages[i]; // ages의 메모리에 할당함
//	}
//	for (int j = 0; j < people; j++) {
//		// kid : 5000, adult : 9000 , senior : 6000
//		/*cout << *(ages + j) << '\n';*/
//		int age = ages[j];//힙 메모리에 할당된 값을 가져옴
//		if (age < 8) {
//			totalPrice += 5000;
//		}
//		else if (age < 65) {
//			totalPrice += 9000;
//		}
//		else {
//			totalPrice += 6000;
//		}
//	}
//	cout << "전체 금액은 : " << totalPrice << "원 입니다.";
//
//	delete[] ages;
//
//
//	return 0;
//}
//
//
//
//
//
