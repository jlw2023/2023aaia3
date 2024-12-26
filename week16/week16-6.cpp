#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	cin >> s;
	int d0=s[0]-'0';
	int d1=s[1]-'0';
	int d2=s[2]-'0';
	int d3=s[3]-'0';	
	cout <<  d0*8+d1*4+d2*2+d3*1 << endl;
}