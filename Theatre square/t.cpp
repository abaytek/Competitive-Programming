#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
    double n,m,a;
    
    cin>>m>>n>>a;
    long long int  max_piles = ceil(n/a) * ceil(m/a);
    cout<<max_piles<<endl;
    return 0;
}
