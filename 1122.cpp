//20211122
// 18岁生日
#include<iostream>
using namespace std;
int leap(int n) {
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
		return 1;
	else
		return 0;
}
int main() {
	int n, a, b, c, i;
	cin >> n;
	while (n--) {
		scanf_s("%d-%d-%d", &a, &b, &c);
		int sum = 0;
		if (b == 2 && c == 29)
			cout << "-1" << endl;
		else {
			if (b >= 3) {
				for (i = a + 1; i <= a + 18; i++) {
					if (leap(i))
						sum += 366;
					else
						sum += 365;
				}
			}
			else {
				for (i = a; i <= a + 17; i++) {
					if (leap(i)) {
						sum += 366;
					}
					else
						sum += 365;
				}
			}
			cout << sum << endl;
		}
		
	}
}

//#include<iostream>
//using namespace std;
//int leap(int n) {
//	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main() {
//	int a, b, c, n, sum, i;
//	cin >> n;
//	while (n--) {
//		scanf_s("%d-%d-%d", &a, &b, &c);
//		sum = 0;
//		if (b == 2 && c == 29)
//			cout << "-1" << endl;
//		else {
//			if (b >= 3) {
//				for (i = a + 1; i <= a + 18; i++) {
//					if (leap(i) == 1)
//						sum += 366;
//					else
//						sum += 365;
//				}
//			}
//			else if(b<=2) {
//				for (i = a; i <= a + 17; i++) {
//					if (leap(i) == 1)
//						sum += 366;
//					else
//						sum += 365;
//				}
//			}
//			cout << sum << endl;
//		}	
//	}
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int a, b, c, s, n, i;
//	cin >> n;
//	while (n--) {
//		cin >> a >> b >> c;
//		int count = 0, s = 0;
//		for (i = a; i <= a + 18; i++) {
//			if ((i % 4 == 0) && (i % 100 != 0) || i % 400 == 0)
//				count++;
//		}
//		s = 366 * count + 365 * (18 - count) - 1;
//		cout << s << endl;
//	}
//}


//hdoj七巧节1215，数组打表避免超时

//#include<iostream>
//using namespace std;
//#define maxn 500001
//int a[maxn];
//int main() {
//	int n, i, j, b;
//	for (i = 1; i <= 500000; i++) {
//		a[i] = 1;
//	}
//	for (i = 2; i <= 250000; i++) {
//		for (j = 2; i*j <= maxn; j++) {
//			a[i * j] += i;
//		}
//	}
//	cin >> n;
//	while (n--) {
//		cin >> b;
//		cout << a[b] << endl;
//	}
//}

