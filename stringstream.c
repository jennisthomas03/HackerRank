#include <iostream>
#include <string>
using namespace std;

int main() {
   // Complete the program
    string a,b;
    cin>>a;
    cin>>b;
    
    cout<<a.length()<<" "<<b.length()<<endl;
    cout<<a+b<<endl;
    cout<<b[0]<<a.substr(1,a.length()-1)<<" "<<a[0]<<b.substr(1,b.length()-1);
  
    return 0;
}

