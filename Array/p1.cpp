#include <bits/stdc++.h>
using namespace std;

string reverseWord(string str) {

        
    int l = 0;
    int r = str.length()-1;
        
    while(l<=r){
      swap(str[l],str[r]);
      l++;
      r--;
    }
        
    return str;
    
}

int main(){

  string str = "Kartikay";
  cout << reverseWord(str) << endl;

}