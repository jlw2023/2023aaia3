//week06-2b.cpp vector array Step03 Step04
#include <iostream>
#include <vector>
using namespace std;

int main(){


	vector<int> a; //Step03 vtctor array
	int now;
	while( cin >> now ){//step 01 Input
		a.push_back(now);//Step03 vtctor array
		for(int b: a) cout << b << ' ';
		cout << "\n"; //Step04 print array
		//cout << now << "\n";//Step02 Output
	}
}