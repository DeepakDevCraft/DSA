#include<bits/stdc++.h>
using namespace std;

bool isPalindromeHelper(string& s, int i ){
      
      int n = s.size();
      
      if(i>=n/2) return true;
      
      if(s[i]!=s[n-i-1]) return false;
      
       isPalindromeHelper(s, i++);
       
       return true;
}
int main(){


    string s;
    cin>>s;
    int i = 0;
    bool isPali = isPalindromeHelper(s,i);

    

    cout<<isPali;

    return 0;


}

