#include<iostream>
using namespace std;

void merge( int  arr1[], int m, int arr2[], int n , int arr3[]) {
     int i = 0;
     int j = 0;
     int k = 0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
             arr3[k]=arr1[i];
             k++;
             i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
  while (i<m){
    arr3[k]=arr1[i];
    i++;
    k++;
  }
  while(j<n){
    arr3[k]=arr2[j];
    j++;
    k++;
  }
}
  void print(int ans[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
  }

int main(){
    int arr1[5]={3,4,6,7,99};
    int arr2[6]={5,4,11,44,72,38};

    int arr3[11]={0};

merge(arr1 , 5 , arr2 , 6 , arr3);
print(arr3 , 11);
return 0;
}


