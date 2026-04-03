
#include <iostream>
using namespace std;

// i. String Length
int myStrlen(char *str) {
    int len = 0;
    while (*(str + len) != '\0') {
        len++;
    }
    return len;
}

// ii. String Copy
void myStrcpy(char *dest, char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

// iii. String Concatenate
void myStrcat(char *dest, char *src) {
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

// iv. String Compare
int myStrcmp(char *str1, char *str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2) {
            return (*str1 - *str2);
        }
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}

int main() {
    char *str1 = new char[100];
    char *str2 = new char[100];
    char *result = new char[200];

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    // Length
    cout << "\nLength of first string: " << myStrlen(str1);

    // Copy
    myStrcpy(result, str1);
    cout << "\nCopied string: " << result;

    // Concatenate
    myStrcat(result, str2);
    cout << "\nConcatenated string: " << result;

    // Compare
    int cmp = myStrcmp(str1, str2);
    if (cmp == 0)
        cout << "\nStrings are equal";
    else if (cmp > 0)
        cout << "\nFirst string is greater";
    else
        cout << "\nSecond string is greater";

    // Delete operator
    delete[] str1;
    delete[] str2;
    delete[] result;

    return 0;
}