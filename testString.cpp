#include <iostream>
using namespace std;

int main() {
    string str1 = "abcdefg";
    string::reverse_iterator ite;
    for(ite = str1.rbegin(); ite != str1.rend(); ++ite) {
        cout << *ite << endl;
    }
    

}