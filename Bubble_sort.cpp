#include <iostream>
using namespace std;

void swap(int *v1,int *v2)
{
    int temp=*v2;
    *v2=*v1;
    *v1=temp;
}
int main() {
	int n;
	cin>>n;
	int t=n;
	int arr[n]={0};
	int i,j;
	
	for(i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	
	
	//bubble sort 
	for(i=0;i<n-1;i++)
	{
	    for(j=0;j<n-i-1;j++)
	    {
	        if(arr[j]>arr[j+1])
	        {
	            swap(&arr[j],&arr[j+1]);
	        }
	    }
	    n--;
	}
	
	for(i=0;i<5;i++)
	{
	    cout<<arr[i]<<" ";
	}
	
	return 0;
}
