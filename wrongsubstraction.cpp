//122773177	Jul/17/2021 21:11UTC+7	cahyoajadah	977A - Wrong Subtraction	GNU C++11	Accepted	15 ms	3800 KB
#include <iostream>
using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	for (int i = 0; i < k; i++){
		if (n % 10 == 0){
			n /= 10;
		}
		else{
			n -= 1;
		}
	}
	cout << n << endl;

	return 0;
}