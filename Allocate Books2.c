#include <stdio.h>
#include <stdbool.h>// for boolean
long long int binarysearch(long long int books[],long long int n,long long int k);
int main()
{
    int t;
    scanf("%d",&t);
    while(t-->0)
    {
  long long int n;// no of books
   long long int k;//no of students
   scanf("%lld",&k);
  long long int books[k];
 for(int i=0;i<k;i++)
 scanf("%lld",&books[i]); // array of pages of books
 scanf("%d",&n);
  printf("%lld\n",binarysearch(books,n,k));
    }
    return 0;
}
long long int binarysearch(long long int books[],long long int n,long long int k)
{
    if(k<n)
    return -1;
 long long int totalp=0,res,s=books[0]-1;
 for(int i=0;i<k;i++)
 {
     if(books[i]>s)
     s=books[i];
 totalp=totalp+books[i];
 }
long long int  e=totalp;
 while(s<=e)
 {
     long long int mid=(s+e)/2;
     if(isValid(books,n,k,mid)==1)
     {
         res=mid;
         e=mid-1;
     }
     else
     s=mid+1;
 }
 return res;
}
int isValid(long long int books[],long long int n,long long int k,long long int ans)
{
    int students=1;
    long long int currentpages=0;
    for(int i=0;i<k;i++)
    {
        if(currentpages+books[i]>ans)
        {
            currentpages=books[i];
            students++;
            if(students>n)
            return 2;
        }
        else
        currentpages=currentpages+books[i];
    }
    return 1;
}
