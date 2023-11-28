#include <limits>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout << std::numeric_limits<int>::min() << endl;
    cout << std::numeric_limits<int>::max() << endl;
    cout << std::numeric_limits<char>::digits << endl;
    cout << std::numeric_limits<long long>::min() << endl;
    cout << std::numeric_limits<long long>::max() << endl;
    return 0;
}
