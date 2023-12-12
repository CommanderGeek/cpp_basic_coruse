#include <iostream>
#include <cmath>
#include <vector>
#include <typeinfo>
#include <algorithm>
#include <cctype>
using namespace std;

bool isPrime(int num) {
    if (num > 1)
    {
        for(int i= 2; i <= num/2; i++){
            if(num%i == 0){
                return false;
            }
        }
        return true;
    }
     return false;
}

std::string disemvowel(const std::string& str) {
    string result = "";
    for(char c: str){
        if (c == 'a' || c=='e' || c=='o'|| c=='i'|| c=='u' || c == 'A' || c=='E' || c=='O'|| c=='I'|| c=='U')
        {
            continue;
        }
        result += c;
    }

    return result;
}

bool is_isogram(std::string str) {
    std::vector<char> vec(str.length());
    for (char ele : str)
    {
        char character = std::tolower(ele); // Konvertiere den Buchstaben zu Kleinbuchstaben

        if (std::find(vec.begin(), vec.end(), character) != vec.end()) {
            return false; // Wenn der Buchstabe bereits im Vektor vorhanden ist, ist es kein Isogramm
        } else {
            vec.push_back(character); // Ansonsten füge den Buchstaben zum Vektor hinzu
        }
    }

    return true; 
}

int main(int argc, char const *argv[])
{
    cout << is_isogram("aA");
    return 0;
}


