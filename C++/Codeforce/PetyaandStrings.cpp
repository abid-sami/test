#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a2= 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z';
    char b2= 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z';

    string a1, b1;
    cin >> a1 >> b1;
    if ('a' == 'A' && 'b' == 'B' && 'c' == 'C' && 'd' == 'D' && 'e' == 'E' &&  'f' == 'F' && 'g' == 'G' && 'h' == 'H' && 'i' == 'I' && 'j' == 'J' &&  'k' == 'K' && 'l' == 'L' && 'm' == 'M' && 'n' == 'N' && 'o' == 'O' &&  'p' == 'P' && 'q' == 'Q' && 'r' == 'R' && 's' == 'S' && 't' == 'T' &&  'u' == 'U' && 'v' == 'V' && 'w' == 'W' && 'x' == 'X' && 'y' == 'Y' && 'z' == 'Z')
    {
        if (a1 == b1)
        {
            cout << "0" << endl;
        }
        else if (a1 > b1)
        {
            cout << "1" << endl;
        }
        else if (a1 < b1)
        {
            cout << "-1" << endl;
        }
    }
}