#include <iostream>

using namespace std;

extern int add(int, int);

int main()
{
    string s1 = "helll world";

    cout << "Hello World!" << s1 << add(10, 20) <<endl;
    return 0;
}
