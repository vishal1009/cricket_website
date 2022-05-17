#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={0,0,1,1,1,2,2,3,3,4};
    int i=0;
    for(int j=1;j<v.size();j++){
        if(v[i]!=v[j]){
            i++;
            v[i] = v[j];
        }
    }
    cout<<i+1;
}