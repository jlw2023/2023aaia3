///c++11
#include <iostream>
#include <vector>
#include <unordered_map>
///Setting 設定-compiler

using namespace std;
int main()
{
    vector<int> a;
    unordered_map<int,int> m;
    m[999] = 13; ///雜湊表,可以快速找到 對應某個值
    m[137] = 7;
    cout << "m[999] 的值是" << m[999] << endl;
    cout << "m[137] 的值是" << m[137] << endl;
    return 0;
}

