/* creat a string to remove a duplicate in the string*/
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
int main() 
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    unordered_set<char> charSet;
    string result;
    for (char ch : str) {
        if (charSet.find(ch) == charSet.end()) {
            charSet.insert(ch);
            result += ch;
        }
    }
    cout << "String after removing duplicates: " << result << endl;
    return 0;
}
