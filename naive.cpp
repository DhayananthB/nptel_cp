#include <iostream>
#include <string>
using namespace std;
int match(string s1,string p){
    int n = s1.length();
    int m = p.length();
    int c=0;
    for(int i =0;i<=(n-m) ;i++){
        c=0;
        for(int j=0;j<m;j++){
            if(s1[i+j]==p[j]){
                c++;
            }
            if(c==m){
                return i;
            }
        }
    } 
    return -1;

}
int main(){
    string t  ="Helloworld";
    string p= "ow";
    int res =match(t,p);
    if(res ==-1){
        cout<<"Not Found";
    }
    else{
        cout<<p << " is Found at "<< res;
    }

}