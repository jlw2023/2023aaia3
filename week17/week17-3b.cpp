#include <iostream>
#include <string>
using namespace std;
int main(){
	string a,b;
	cin >> a;
	cin >> b;
	int A=a.length();
	int B=b.length();
	if(A>B) cout << 1;
	else if(A<B) cout << -1;
	else{
		cout << a.compare(b);
	}
}