#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    string t = "Hallo";
    cout << "Test" << endl;
    cout << 123 << endl;
    cout << true << endl;
    cout << &t << endl;
    cout << t << endl;
    string * tp = &t;
    cout << *tp << " pointer of t is at "<< &tp << endl;
    return 0;
}
