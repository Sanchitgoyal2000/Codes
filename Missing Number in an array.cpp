#include <iostream>
using namespace std;
// input 3 4 5 then output 3 4 5 6
//input 2 3 4 output 1 2 3 4
int cmp(const void *a,const void *b);
int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n;
	    cin>>n;
	    int a[n],i=0,p=0,sum=0;
	    for(i=0;i<n-1;i++)
	    {
	    cin>>a[i];
	    sum=sum+a[i];
	    }
	   cout<<((n)*(n+1)/2)-sum<<"\n";
	}
	return 0;
}
