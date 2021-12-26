//It Doesn't Actually Print The Numbers but it just return the array of integers
#include <bits/stdc++>
vector<int> countingSort(vector<int> arr) {
    vector<int> result(100);
    for(int i=0;i<arr.size();i++)
        result[arr[i]]++;
    return result;
}
int main(){
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0; i<n ; i++){
    cin>>arr[i];
  }
  return 0;
}
