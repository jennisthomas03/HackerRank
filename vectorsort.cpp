#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    std::vector<int>myvect;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        myvect.push_back(val);
        
    }
    std::sort(myvect.begin(),myvect.end());
    for(int i=0;i<myvect.size();i++)
    {    std::cout<<myvect[i];
         std::cout<<" ";
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
