#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int number;
    cout << "please insert a number" << endl;
    cin >> number;
    cout << "your number is " << number << " at " << &number << endl;
    return 0;
}
