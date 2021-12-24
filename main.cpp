#include <bits/stdc++.h>
using namespace std;
void countSwaps(vector<int> a) {
    int n = a.size();
    int counter=0;
    for (int i = 0; i < n; i++) {

    for (int j = 0; j < n - 1; j++) {
        // Swap adjacent elements if they are in decreasing order
        if (a[j] > a[j + 1]) {
            swap(a[j], a[j + 1]);
            counter++;
        }
    }
}
    cout<<"Array is sorted in "<<counter<<" swaps."<<endl;
    cout<<"First Element: "<<a.front()<<endl;
    cout<<"Last Element: "<<a.back()<<endl;
}


int main()
{
    vector<int> a = {3,2,1};
    countSwaps(a);
    return 0;
}
