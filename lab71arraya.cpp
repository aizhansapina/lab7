#include <iostream>
 
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
    cin >> a[i];}
    int mxx = a[0];
    for (int i=0; i<n; i++){
    if (a[i] > mxx)
    mxx = a[i];}
    cout << mxx;
return 0;
}