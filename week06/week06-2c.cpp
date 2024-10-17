//week06-2c.cpp vector array Step05 Step06
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){


	vector<int> a; //Step03 vtctor array
	int now;
	while( cin >> now ){//step 01 Input
		a.push_back(now);//Step03 vtctor array
		sort(a.begin(), a.end());//Step05 sort
		int N=a.size();
		if(N%2==1) cout << a[N/2] << "\n"; //Step06
		else cout << (a[N/2-1] + a[N/2])/2 << "\n";//Step06
		//for(int b: a) cout << b << ' ';
		//cout << "\n"; //Step04 print array
		//cout << now << "\n";//Step02 Output
	}
}