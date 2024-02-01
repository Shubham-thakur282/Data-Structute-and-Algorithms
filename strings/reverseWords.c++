#include <bits/stdc++.h>

using namespace std;

bool checkSpace(char ch)
{
    if (ch == ' ')
    {
        return 1;
    }
    return 0;
}

string reverseWords(string s)
{

    int i = 0;

    string word;
    string ans;
    cout << s.size();
    while (i < s.size())
    {

        if (checkSpace(s[i]))
        {
            cout << "i:" << i << endl;
            if (word.size() != 0)
            {
                if (ans.size() == 0)
                {
                    ans += word;
                    word = "";
                }
                else
                {
                    ans = word + " " + ans;
                    word = "";
                }
            }
            i++;
        }
        else
        {
            cout << "i:" << i << endl;
            if (checkSpace(s[i]))
            {
                i++;
                continue;
            }
            word += s[i];
            i++;
        }
    }

    if (word.size() != 0)
    {
        if (ans.size() == 0)
        {
            ans += word;
            word = "";
        }
        else
        {
            ans = word + " " + ans;
            word = "";
        }
    }

    return ans;
}

int main()
{

    string s = "the sky is blue";
    cout << reverseWords(s);
    return 0;
}