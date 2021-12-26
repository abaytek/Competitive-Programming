#include <bits/stdc++>
using namespace std;

void selectionSort(int arr[]. int n){
for(int i=0; i<n; i++){
      int minIndex = i;
      for(int j=i; j<n ; j++){
          if(arr[j] < arr[minIndex])
            minIndex = j;
      }
      swap(minIndex,i);
  }
}

int main(){
  int arr[];
  int n;
  selectionSort(arr,n); ///Geiven the array and n it works
  return 0;
}
