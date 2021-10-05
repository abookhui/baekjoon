//#include<iostream>
//using namespace std; // 쓰면 std:: 안해도 ㄱㅊ
//namespace a{
//	int n;
//}
//namespace b {
//	int n;
//}
//int main() {
//	//name space 이름 공간
//	// cout 이라는 이름을 만들어 주는 공간을 만들어줌?
//	a::n = 10; b::n = 20;
//	std::cout << "hello, world" << 'c' <<  std::endl;
//	
//	//<< 출력할 데이터 분리 ,와 비슷한 역할 
//	//endl l 을 끝내라 l 은 라인 \n가능
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
//	cout << "이름 입력 :";
//	cin >> name;
//	string message = "안녕하세요," + name + " 님.";
//	cout << message << endl;
//}


//#include<iostream>
//using namespace std;
//
//int main() {
//	//범위 기반 for문
//	int arr[10] = { 3,1,4,1,5,9,2,6,5,3 };
//	for (int i = 0; i < 10; i ++ ) {
//		cout << arr[i] << ' ';
//	}
//	cout << endl;
//	for (int &n : arr) { // arr안에 있는 모든 인덱스를 돈다.
//		cout << n << ' '; //&을 붙여야 reference 변수
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