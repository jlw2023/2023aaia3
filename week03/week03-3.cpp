///week03-3.cpp �r��string �n���x �r�ꪺ����.length
#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s;
    cout << "�п�J�@�Ӧr��A��������Ů�:";
    cin >> s;
    cout << "�r��s:" << "�����׬O" << s.length() << "\n";

    for(int i=0; i<s.length(); i++){
        cout << s[i] << "\n";
    }
}


