#include <iostream>
using namespace std;
int main ()
{
	int n;
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++){
	cin >> a[i];}
	for (int i=0; i<n; i++){
	for (int j=-1; j<n-1; j++){
	swap (a[i-j],a[i]);}
	cout << a[i] << " ";}
return 0;
}
