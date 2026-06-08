#include <iostream>
#include <vector>
using namespace std;

void swapNum(int &num1, int &num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void selectionSort(vector<int> &vec){
    int n =vec.size();
    for(int i = 0; i<n-1; i++){
        int min = i;
        for(int j=i; j<n; j++){
            if(vec[min] > vec[j]){
                min = j;
            }            
        }
        swapNum(vec[min], vec[i]);
    }
}

void bubbleSort(vector<int> &vec){
    int n =vec.size();
    for(int i=0; i<n-1; i++){
        int flag=0 ;
        for(int j = 0; j<n-i-1; j++){
            if(vec[j] > vec[j+1]){
                swapNum(vec[j], vec[j+1]);
                flag++;
            }    
        }
        if(flag == 0) // For Optiomal Linear Time Complexity  
            break;
    }
}

void insertionSort(vector<int> &vec){
    int n = vec.size(),  flag;
    for(int i = 1; i<n; i++){
        flag=0;
        for(int j = i-1; j>=0; j--){
            if(vec[j] > vec[j+1]){
                swapNum(vec[j], vec[j+1]);
                flag++;
            }    
        }    
        if(flag == 0)
            break;    // For Optiomal Linear Time Complexity   
    }
}

int main(){
    vector<int> vec1 = {13, 46, 24, 52, 20, 9};
    cout<<"Before Sorting:"<<endl;
    for(int i = 0; i<vec1.size(); i++)
        cout<<vec1[i]<<" ";
    //selectionSort(vec1);
    //bubbleSort(vec1);
    insertionSort(vec1);
    cout<<"\nAfter Insertion Sorting:"<<endl;
    for(int i = 0; i<vec1.size(); i++)
        cout<<vec1[i]<<" ";
    return 0;
}  