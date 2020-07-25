
// Problem : Counting Valleys
// Contest : HackerRank - Interview Preparation Kit - Warm-up Challenges
// URL : https://www.hackerrank.com/challenges/counting-valleys/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup
// Memory Limit : 512 MB
// Time Limit : 4000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

/* 
 * My Solutions Repository at https://github.com/ganeshbhandarkar/Problem-Solving
 * Author: Ganesh Bhandarkar
**/

#include<bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {

    int level = 0;
    int ans=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='U')++level;
        if(s[i]=='D')--level;
        if(s[i]=='U' and level ==0){
            ans++;
        }
    }
    return ans;
}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
   // cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    cout<<countingValleys(n, s);
   // fout << result << "\n";

   // fout.close();

    return 0;
}

