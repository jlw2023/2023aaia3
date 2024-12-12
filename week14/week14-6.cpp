//week14-6.cpp
#include <iostream>
using namespace std;
int main(){
	int a,b;//Step01 Input
	while(cin >> a >> b){
		//Step03: bo pi fa
		int bad=0, backup=a;
		while(a>1){
			if(a%b>0) bad=1;
			a=a/b;
		}
		
		if(bad==1) cout << "Boring!" << endl;
		else{
			a=backup;
			while(a>0){
				cout << a << " ";
				a=a/b;
			}
			cout << "\n";

		}
	}
	//Step02 Output
}