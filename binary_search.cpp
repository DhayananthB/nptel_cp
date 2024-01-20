#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int binary_search(vector<int>& arr,int key){
    int l =0;
    int r = arr.size()-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(key<arr[mid]){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
        
        
    }
    return -1;

}


int main(){
    vector<int> a = {1,4,5,8,9};
    sort(a.begin(),a.end());
    cout << binary_search(a,1);
    cout << binary_search(a,9);
    cout << binary_search(a,88);


}