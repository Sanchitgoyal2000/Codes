#include <iostream>
using namespace std;
int main()          // in O(N)
{
	int t,n,k,low,high,i,j;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d",&n,&k);
	    int a[n],p=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    int sum=0;
	    low=0;
	    high=0;
	    sum=sum+a[high];
	    while(high<n)
	    {
	        if(sum==k)
	        {
	            p=1;
	            printf("%d %d\n",low+1,high+1);
	            break;
	        }
	        else if(sum<k)
	        {
	            ++high;
	            sum=sum+a[high];
	        }
	        else
	        {

	            sum=sum-a[low];
	            ++low;
	         }
	    }
	    if(p==0)
	    {
	        printf("-1\n");
	    }
	}
	return 0;
}
/*int main() {   In O(n*n)
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n,s,i,j,res1=0,res2=0,h=0;
	    cin>>n>>s;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int p=0;
	    for(int i=0;i<n;i++)
	    {
	        h=0;
	        p=0;
	        p=p+a[i];
	        if(p==s)              // input sum =4 and elmnts 1 2 3 4
	        {
	           res1=i;
	           res2=i;
	           break;
	        }
	        else                // if we are at last then no benefit of doing j+1
	        {
	            if(i==n-1)
	            break;
	        }
	        j=i+1;
	        while(j<n)
	        {

	            p=p+a[j];
	            if(p<s)
	            {
	                j++;
	            }
	            else if(p==s)
	            {
	                h=1;
	                break;
	            }
	            else
	            break;
	        }
	        if(h==1)
	        {
	            res1=i;
	            res2=j;
	            break;
	        }
	    }
	    if(res1==0&&res2==0)
	    cout<<"-1\n";
	    else
	    cout<<res1+1<<" "<<res2+1<<"\n";
	}
	return 0;
}*/
