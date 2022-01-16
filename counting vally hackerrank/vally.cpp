#include<bits/stdc++.h>
using namespace std;
int countingValleys(int steps, string path) {
    int counter = 0;
    int level = 0;
    for(int i=0; i<steps; i++){
        if(path[i] == 'U'){
            level++;
            if(level == 0)
                counter++;
        }
        else level--;
    }
    return counter;
}

