//file handling
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    string text;
    ifstream myfile("C:\\MADHU FILES\\sample.txt"); // Create and open a text file
    getline(myfile,text);
    cout<<text;
    myfile.close(); 
    return 0;
}