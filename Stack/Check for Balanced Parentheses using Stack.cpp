#include <iostream>
#include <cstring>
#include <stack> // standard template library  STL
using namespace std;
 
bool check(char *a)
{
    int n = strlen(a);
 
    stack<char> S;
 
    for(int i = 0; i<n; i++)
    {
        if((a[i] == '(') || (a[i] == '[') || (a[i] == '{'))
            S.push(a[i]);
 
        else if ((a[i] == ')') || (a[i] == ']') || (a[i] == '}')) {
            if(S.empty())
                return false;
            else if (a[i] == ')' && S.top() == '(') S.pop();
            else if (a[i] == '}' && S.top() == '{') S.pop();
            else if (a[i] == ']' && S.top() == '[') S.pop();
            else
                return false;
            }
 
        }
 
 
    return S.empty() ? true:false;
 
 
}
 
 
int main()
{
    char str[51];
    cout << "Enter a string: ";
    cin >> str;
 
    check(str) ? cout << "Balanced\n" : cout << "Not balanced\n";
 
 
    return 0;
}
