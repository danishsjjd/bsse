#include <iostream>
#include <ctype.h>
#include <stdlib.h>
using namespace std;

void convertToUppercase(char *);
int main()
{
    char s[30] = "Welcome To Virtual University";
    cout << "The string before conversion is: " << s << endl;
    convertToUppercase(s);
    cout << "The string after conversion is: " << s << endl;

    return 0;
}

void convertToUppercase(char *sptr)
{
    while (*sptr != '\0')
    {
        if (islower(*sptr))
            *sptr = toupper(*sptr); // convert to uppercase
        ++sptr;                     // move sptr to the next character
    }
}