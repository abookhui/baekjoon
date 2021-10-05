////#include<iostream>
////#include<stack>
////
////using namespace std;
////
////stack<int>s;
////int n, m;
////string num;
////
////int main() {
////	cin >> n >> m >> num;
////
////	for (int i = n - 1; i >= 0; i--) {
////		int a = num[i] - '0';
////		s.push(a);
////	}
////
////	while (1) {
////		if (s.size() >= m) {
////			break;
////		}
////		int val = s.top();
////		
////		for (int i = 0; i < s.size(); i++) {
////			if (val < num[i]) {
////				s.pop();
////			}
////				
////		}
////		
////	}
////	for (int i = 0; i < m; i++) {
////		cout << s.top();
////		s.pop();
////	}
////	
////}
//#include <vector>
//#include <iostream>
//using namespace std;
//
//bool chk(int n) {
//    for (int i = 2; i * i <= n; i++) {
//        if (n % i == 0) {
//            return false;
//        }
//    }
//    return true;
//}
//
//int solution(vector<int> num) {
//    int answer = -1;
//    int m = num.size();
//    for (int i = 0; i < m - 2; i++) {
//        for (int j = i + 1; j < m; j++) {
//            for (int k = j + 1; k < m; k++) {
//                int sum = num[i] + num[j] + num[k];
//                if (chk(sum)) {
//                    answer++;
//                }
//            }
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//    int n,a;
//    vector<int> num;
//
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        cin >> a;
//        num.push_back(a);
//    }
//    cout << solution(num);
//}