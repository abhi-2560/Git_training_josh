#include <iostream>
#include <string>
using namespace std;

void reverseString(string &str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        swap(str[left], str[right]);
        left++;
        right--;
    }
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    reverseString(s);

    cout << "Reversed string: " << s << endl;

    return 0;
}