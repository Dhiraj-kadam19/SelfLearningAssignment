#include <iostream>
using namespace std;

// String Length
int strLength(char *str) {
    int len = 0;
    while (*(str + len) != '\0') {
        len++;
    }
    return len;
}

// String Copy
void strCopy(char *dest, char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

// String Compare
int strCompare(char *s1, char *s2) {
    while (*s1 && *s2) {
        if (*s1 != *s2)
            return (*s1 - *s2);
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

// String Concatenate
void strConcat(char *dest, char *src) {
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main() {
    char *str1 = new char[100];
    char *str2 = new char[100];
    char *result = new char[200];

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    // Copy
    strCopy(result, str1);
    cout << "Copied string: " << result << endl;

    // Length
    cout << "Length of first string: " << strLength(str1) << endl;

    // Compare
    int cmp = strCompare(str1, str2);
    if (cmp == 0)
        cout << "Strings are equal" << endl;
    else
        cout << "Strings are not equal" << endl;

    // Concatenate
    strCopy(result, str1); // copy first
    strConcat(result, str2);
    cout << "Concatenated string: " << result << endl;

    // Delete memory
    delete[] str1;
    delete[] str2;
    delete[] result;

    return 0;
}