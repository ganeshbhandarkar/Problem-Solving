
// Problem : 12250 - Language Detection
// Contest : UVa Online Judge
// URL : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=3402&mosmsg=Submission+received+with+ID+25302089
// Memory Limit : 32 MB
// Time Limit : 3000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

/*
* 		author: gbgb1bgbg
**/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int c=1;
    string x;
    while(cin>>x)
    {
        if(x=="#")break;
        printf("Case %d: ",c++);
        if(x=="HELLO")
            printf("ENGLISH\n");

        else if(x=="HOLA")
            printf("SPANISH\n");

        else if(x == "HALLO")
            printf("GERMAN\n");

        else if(x=="BONJOUR")
                printf("FRENCH\n");

        else if(x=="CIAO")
            printf("ITALIAN\n");

        else if(x=="ZDRAVSTVUJTE")
            printf("RUSSIAN\n");
        else
            printf("UNKNOWN\n");
        }
    return 0;
}
