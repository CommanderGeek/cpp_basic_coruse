#include <string>
#include <iostream>
#include <vector>
int main(int argc, char const *argv[])
{
    constexpr int size = 10;
    std::vector<int> array(size);
    for (std::size_t i = 0; i < size; i++){
        array[i] = i+1;
    }
    for(int i: array){
        std::cout << i << std::endl;
    }
    return 0;
}
