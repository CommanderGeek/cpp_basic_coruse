#include <iostream>
#include <cstdlib>
int main(int argc, char const *argv[])
{
    unsigned int iwert=0;
    std::cout << "Bitte eine Ganzzahl: " << std::endl;
    std::cin >> iwert;
    std::cout << "Alle geraden Zahlen von " << iwert << " absteigend bis 0" << std::endl;
    for (; iwert > 0; iwert--){
        if (iwert % 2 == 0)
        {
            std::cout<<iwert<<std::endl;
        }
        
    }
    return 0;
}
