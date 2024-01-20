#include <iostream>
using namespace std;

void kmp(string txt, string pat){
    int m = txt.size();
    int n = pat.size();
    int lps[n];
    lps[0]=0;
    int i=1,j=0;
    while(i<n){
        if(pat[i]==pat[j]){
            lps[i]=j+1;
            i++;
            j++;
        }
        else {
            if(j!=0){
                j=lps[j-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }
    i=j=0;
    while(i<m){
        if(txt[i]==pat[j]){
            i++;
            j++;
        }
        if(j==n){
            cout << "pattern found at " << (i-j) << "\n";
            j=lps[j-1];
        }
        else if(txt[i]!=pat[j]){
            if(j!=0){
                j=lps[j-1];
            }
            else{
                i++;
            }
        }
    }
}


int main(){
    kmp("abcdabc","da");
    //cout<<"hi";
}