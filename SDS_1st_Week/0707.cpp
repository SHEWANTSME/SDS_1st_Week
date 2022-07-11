//#include<iostream>
//using namespace std;
//int a, b, c, d;
//int GCD(int x, int y) {
//	if (y == 0) return x;
//	else return GCD(x, x%y);
//}
//
//int main() {
//	for (int i = 2; i <= 10; i++) {
//		for (int j = 1; i*j <= 10; j++) {
//			cout << "i: " << i << " j: " << j << endl;
//		}
//	}
//}
//
// 정수해를 찾는 유클리드 호제법을 사용하자


#include<iostream>
#include<vector>
#define endl "\n"
#define ll long long
#define fastio cin.tie(0),cout.tie(0),ios::sync_with_stdio(0)
using namespace std;
ll num[4000002];
vector<ll>v;
int a, b;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	for (int i = 2; i <= 4000000; i++) num[i] = i;
	for (int i = 2; i <= 1000; i++) {
		if (num[i] == 0)continue;
		for (int j = i * i; j <= 4000000; j = j + i) num[j] = 0;
	}
	for (int i = 2; i <= 4000000; i++) {
		if (!num[i]) continue;
		else v.push_back(num[i]);
	}
	
	int n, cnt = 0;
	cin >> n;
	if (n == 5 ) { cout << 2 << endl; exit(0); }
	if (n == 2 or n == 3 or  n == 7 or n==8 or n==10) { cout << 1 << endl; exit(0); }
	if (n > 10 and num[n] != 0)cnt++;
	int L = 2;
	int R = 3;
	int fir = num[L] + num[R];
	while (L<R and R<283147) {
		if (fir == n) cnt++;
		if (fir < n) {
			while (1) {
				R++;
				if (L >= R)break;
				if (num[R] != 0) break;
			}fir = num[L] + num[R]; continue;
		}
		if (fir > n) {
			while (1) {
				L++;
				if (L >= R)break;
				if (num[L] != 0)break;
			}fir = num[L] + num[R]; continue;
		}
		
	}
	cout << cnt << endl;

	
	/*for (int i = 2; i < 30; i++)
		cout << num[i] << endl;*/
	return 0;
}
