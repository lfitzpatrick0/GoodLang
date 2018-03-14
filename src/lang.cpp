#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool useLang1, useLang2 = false;
    bool goodLang1, goodLang2 = true;

    string input;

    getline(cin,input);

    if(input[0] == 'a')
        useLang1 = true;
    if(input[0] == 'b')
        useLang2 = true;

    if(useLang1)
    {
        int i = 0;
        while(useLang1)
        {
            if(input[i] == 'a')
                goodLang1 = true;
            else if(input[i] == 'b')
            {
                if(input[i-1] == 'a' && input[i] == 'b')
                {
                    goodLang1 = true;
                    useLang1 = false;
                }
                else
                {
                    goodLang1 = false;
                    useLang1 = false;
                }
            }
            i++;
        }
    }

    if(goodLang1)
        cout << "valid entry." << endl;
    else
        cout << "invalid entry." << endl;

    return 0;
}