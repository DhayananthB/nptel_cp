#include <bits/stdc++.h>
using namespace std;

//just to see the change in github

int reverse_sort(vector<int> & arr){
    int s = arr.size();
    int time=0;
    for(int i=0;i<s-1;i++){
        int m = *min_element(arr.begin()+i,arr.end());
        auto ind = find(arr.begin(),arr.end(),m);
        reverse(arr.begin()+i,ind+1);
        time += distance(arr.begin() +i ,ind+1) ;

    }
    return time;

}

int main(){
    vector<int> a = {1,2,3,4};
    cout << reverse_sort(a) << endl;
    for(auto i : a){
        cout << i << "\t";
    }
}