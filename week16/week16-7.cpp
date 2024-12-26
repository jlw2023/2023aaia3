#include <iostream>
#include <vector>
using namespace std;
int main(){
	int T,N;
	cin >> T;//Step01
	for(int t=0; t<T; t++){
		cin >> N;//Step01:input
		vector<int> a(N);//Step03: vector
		for(int i=0; i<N; i++){
			cin >> a[i];
		}
		int ans=0;
		for(int k=0; k<N-1; k++){
		//Step04:Bubble sort
			for(int i=0; i<N-1; i++){
				if(a[i]>a[i+1]){
					swap(a[i], a[i+1]);
					ans++;
				}
			}
			
		}
		
		
		cout << "Optimal train swapping takes " << ans << " swaps.\n";
	}//Step02:output
}