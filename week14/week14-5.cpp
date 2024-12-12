#include <iostream>
using namespace std;
int main(){
	int a,b;//Step01 Input
	while(cin >> a >> b){
		//Step03: bo pi fa
		while(a>0){
			cout << a << " ";
			a=a/b;
		}
	
		cout << "Boring!" << endl;
	}//Step02 Output
}