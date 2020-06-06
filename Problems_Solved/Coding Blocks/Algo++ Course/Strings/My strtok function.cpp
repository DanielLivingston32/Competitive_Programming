#include <iostream>
#include <cstring>
using namespace std;

char *mystrtok(char *str, char delim)
{
    //Function take string and a delimter as arguments...
    static char *input = NULL;
    //Only for the first call this static char pointer will automatically initialise to NULL...
    //For the remaining calls it will have the value that was stored in the previous call...

    if (str != NULL)
    {
        //For the first time
        input = str;
    }

    if (input == NULL)
    {
        return NULL;
    }

    //Dynamically allocating output array
    char *output = new char[strlen(input) + 1];
    int i = 0;
    for (; input[i] != '\0'; i++)
    {
        if (input[i] != delim)
        {
            output[i] = input[i];
        }
        else
        {
            output[i] = '\0';
            input = input + i + 1;
            return output;
        }
    }
    //Corner case [For end case]
    output[i] = '\0';
    input = NULL;
    return output;
}

int main()
{
    char s[1000];
    cin.getline(s, 1000);
    cout << endl
         << "Gonna print each word in string line by line" << endl;

    char *ptr = mystrtok(s, ' ');
    cout << ptr << endl;
    while (ptr != NULL)
    {
        ptr = mystrtok(NULL, ' ');
        cout << ptr << endl;
    }
}