//#include<iostream>
//using namespace std; // ���� std:: ���ص� ����
//namespace a{
//	int n;
//}
//namespace b {
//	int n;
//}
//int main() {
//	//name space �̸� ����
//	// cout �̶�� �̸��� ����� �ִ� ������ �������?
//	a::n = 10; b::n = 20;
//	std::cout << "hello, world" << 'c' <<  std::endl;
//	
//	//<< ����� ������ �и� ,�� ����� ���� 
//	//endl l �� ������ l �� ���� \n����
//
//}
//
//#include<iostream>
//using namespace std;
//int main() {
//	int a, b;
//	cin >> a >> b;
//	cout << a << "+" << b << "=" << a + b << endl;
//}

//#include<iostream>
//#include<string>
//
//using namespace std;
//int main() {
//	string name;
//	cout << "�̸� �Է� :";
//	cin >> name;
//	string message = "�ȳ��ϼ���," + name + " ��.";
//	cout << message << endl;
//}


//#include<iostream>
//using namespace std;
//
//int main() {
//	//���� ��� for��
//	int arr[10] = { 3,1,4,1,5,9,2,6,5,3 };
//	for (int i = 0; i < 10; i ++ ) {
//		cout << arr[i] << ' ';
//	}
//	cout << endl;
//	for (int &n : arr) { // arr�ȿ� �ִ� ��� �ε����� ����.
//		cout << n << ' '; //&�� �ٿ��� reference ����
//		n++;
//	}
//	cout << endl;
//	for (int n : arr) {
//		cout << n << ' ';
//	}		
//}

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    for (int i = 0; i < 3; i++)
    {
        int n;
        cin >> n;
        v.push_back(n);
    }

}