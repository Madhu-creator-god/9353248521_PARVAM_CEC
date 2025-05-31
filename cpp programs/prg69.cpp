/*check the given charecter is vowel are not and also find thenumber of vowels in the string And also find the length of the string*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int vowelCount = 0;
    int length = str.length();

    for (char ch : str) {
        char lowerCh = tolower(ch);
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            vowelCount++;
        }
    }

    cout << "Length of the string: " << length << endl;
    cout << "Number of vowels in the string: " << vowelCount << endl;

    return 0;
}