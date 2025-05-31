/*to find if string qas any vowels*/
/*check the given charecter is vowel are not and also find thenumber of vowels in the string*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int vowelCount = 0;
    for (char ch : str) {
        // Convert character to lowercase to handle both cases
        char lowerCh = tolower(ch);
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || 
            lowerCh == 'o' || lowerCh == 'u') {
            vowelCount++;
        }
    }

    cout << "Number of vowels in the string: " << vowelCount << endl;
    return 0;
}