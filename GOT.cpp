/*Dothraki are planning an attack to usurp King Robert's throne. King Robert learns of this conspiracy from Raven and plans to lock the single door through which the enemy can enter his kingdom.

door

But, to lock the door he needs a key that is an anagram of a certain palindrome string.

The king has a string composed of lowercase English letters. Help him figure out whether any anagram of the string can be a palindrome or not.
*/



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
   
   string str;
    cin>>str;
    int A[26];
    for(int i =0 ; i<26 ; i++)
        A[i] = 0;
    for(int i=0 ; i<str.length() ; i++ )
    {
       A[str[i] - 'a']++;
    }

    int sum = 0;
    for(int i=0 ; i<26 ; i++)
    {
        sum = sum + (A[i]%2);
    }

    if(sum>=2)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}

