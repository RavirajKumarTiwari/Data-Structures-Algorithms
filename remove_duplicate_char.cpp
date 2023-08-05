// Remove duplicate character from string

#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(string &s,int n){
    string ans="";           
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<i;j++){
                if(s[i]==s[j]){   
                    break;   // We are breaking here because this caharacter is already 
                }           // added to our answer because it was found earlier
                
            }
            if(j==i){       // The loop ends without breaking, it means this 
                ans+=s[i];  // is the first occurence of this character in the string
            }               // so we add this character to our answer
        }
    cout<<ans;
}

int main(){
    string s="bcabc";
    removeDuplicates(s,s.size());
}


