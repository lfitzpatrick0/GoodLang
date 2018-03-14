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
        while(goodLang1)
        {
            if(input[i] == 'a')
                useLang1 = true;
            else if(input[i] == 'b')
            {
                if(input[input.length()-1] == 'a' && input[input.length()] == 'b')
                {
                    goodLang1 = true;
                }
                else
                    goodLang1 = false;
            }
            i++;
        }
    }

    if(useLang1)
        cout << "valid entry." << endl;

    return 0;
}