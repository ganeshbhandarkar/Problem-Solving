
// Problem : 272 - TEX Quotes
// Contest : UVa Online Judge
// URL : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=208
// Memory Limit : 32 MB
// Time Limit : 3000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

/*
* 		author: gbgb1bgbg
**/

#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	bool isleft = false;
	char c;
	while (1)
	{
		c = getchar();
		if (c == EOF)
			break;
		else if (c == '"')
		{
			isleft = !isleft;
			if (isleft)
				printf("``");
			else
				printf("''");
		}
		else
			printf("%c", c);
	}
	
	
	return 0;
}
