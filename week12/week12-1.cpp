#include <iostream>
#include <string>
using namespace std;
//struct Node {};
//class Cat {};
struct Node {
    int val;///value
};
class Cat
{
public:
    string name;
};


int main()
{
    Cat cat1;///�j�g���Ϊ��A�ŧi �p�g���ܼ�
    cat1.name="Kitty";
    Node node;
    node.val = 1;
}
