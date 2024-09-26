///week03-3.cpp 字串string 要熟悉 字串的長度.length
#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s;
    cout << "請輸入一個字串，中間不能空格:";
    cin >> s;
    cout << "字串s:" << "的長度是" << s.length() << "\n";

    for(int i=0; i<s.length(); i++){
        cout << s[i] << "\n";
    }
}


