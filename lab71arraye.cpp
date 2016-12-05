#include <iostream>
using namespace std;
int main ()
{
	int n;
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++){
	cin >> a[n];
	}
	for (int i=1; i<n; i++){
	if (a[i]>0 && a[i-1]>0)
	cout << "YES";
	
	else if (a[i]<0 && a[i-1]<0)
	cout << "YES";
	
	else cout << "NO";}
	
return 0;
}
