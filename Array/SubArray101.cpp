#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {13, 46, 24, 52, 20, 9};
    int flag = 1;

    for(int i = 0; i<arr.size(); i++){ 
        for(int j = i; j<arr.size(); j++){

            cout<<"Subarray "<<flag++<<": ";
            for(int k = i; k<=j; k++)
                cout<<arr[k]<<" ";
            cout<<endl;    
        }
        
    }

    return 0;
}