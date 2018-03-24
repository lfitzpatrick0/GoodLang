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
            else if(input[input.length()-1] == 'b')
            {
                // cout << i << endl << input.length() << endl;
                if(input[input.length()-2] == 'a')
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
            else
            {
                goodLang1 = false;
                useLang1 = false;
                // error state
            }
            i++;
        }
    }

    if(useLang2)
    {
        int i = 0;
        while(useLang2) 
        {
            if(input.length()==1 && input[i]=='b')
            {
                goodLang2 = true;
                useLang2 = false;
            }
            else if(input[i] != 'b')
            {
                goodLang2 = false;
                useLang2 = false;
            }
            else
            {
                if(input.length()-1 == i)
                {
                    useLang2 = false;
                }
            }
            i++;
        }
    }

    if(goodLang1 || goodLang2)
        cout << "valid entry." << endl;
    else
        cout << "invalid entry." << endl;

    return 0;
}