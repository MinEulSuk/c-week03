//#include <iostream>
//using namespace std;
//int main() {
//	int totalPrice = 0;
//	int people = 0;
//	//int ages[people];
//	//int ages = [people]�̶� �ϸ� ������ �߻���
//	//���� ���� ���� �ȵǱ⶧��
//	cout << "�� ���Դϱ�? ";
//	cin >> people;
//
//	int* ages;
//	ages = new int[people];//people�� ���� ���� ����� 4���̸� 4byte �޸� 4�� �Ҵ��
//	//�� �޸� �����Ҵ� >> ������ ������ �Ҵ���� �� ����
//	for (int i = 0; i < people; i++) {
//		cout << "���̸� �Է��ϼ��� : ";
//		cin >> ages[i]; // ages�� �޸𸮿� �Ҵ���
//	}
//	for (int j = 0; j < people; j++) {
//		// kid : 5000, adult : 9000 , senior : 6000
//		/*cout << *(ages + j) << '\n';*/
//		int age = ages[j];//�� �޸𸮿� �Ҵ�� ���� ������
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
//	cout << "��ü �ݾ��� : " << totalPrice << "�� �Դϴ�.";
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
