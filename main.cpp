#include "MyString.h"
#include <iostream>

using namespace std;

int main()
{
    MyString str1;
    MyString str2("Hello, World!");
    MyString str3(50);

    cout << "Initial strings:" << endl;
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;

    cout << "Copying str2 to str1 using MyStrcpy:" << endl;
    str1.MyStrcpy(str2);
    cout << str1 << endl;

    cout << "Substring 'World' found in str2: " << str2.MyStrStr("World") << endl;
    cout << "Character 'o' found at index: " << str2.MyChr('o') << endl;
    cout << "Length of str2: " << str2.MyStrLen() << endl;

    cout << "Concatenating str2 to str1 using MyStrCat:" << endl;
    str1.MyStrCat(str2);
    cout << str1 << endl;

    cout << "Deleting character 'o' from str1 using MyDelChr:" << endl;
    str1.MyDelChr('o');
    cout << str1 << endl;

    cout << "Comparing str1 and str2 using MyStrCmp: " << str1.MyStrCmp(str2) << endl;

    MyString str4 = str1 + str2;
    cout << "Concatenated str1 and str2 into str4 using operator+: " << str4 << endl;

    cout << "Prefix increment str4 using operator++: ";
    ++str4;
    cout << str4 << endl;

    cout << "Prefix decrement str4 using operator--: ";
    --str4;
    cout << str4 << endl;

    cout << "Appending '!' to str4 using operator+=: ";
    str4 += '!';
    cout << str4 << endl;

    cout << "Adding 'A' to str4 using operator+: ";
    str4 += 'A';
    cout << str4 << endl;

    cout << "Adding 10 spaces to the beginning of str4 using operator+: ";
    str4 += 10;
    cout << str4 << endl;

    cout << "Appending 10 spaces to the end of str4 using operator+=: ";
    str4 += 10;
    cout << str4 << endl;

    cout << "Enter a new string for str3: ";
    cin >> str3;
    cout << "Updated str3: " << str3 << endl;

    MyString str5;
    cout << "Assigning str3 to str5 using operator=:" << endl;
    str5 = str3;
    cout << "str5: " << str5 << endl;

    cout << "Number of MyString objects: " << MyString::getObjectCount() << endl;

    return 0;
}
