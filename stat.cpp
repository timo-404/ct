#include <iostream>
#include<math.h>
#include<algorithm>
using namespace std;

//CALCULATE MEAN
double meancal(double *arr, int n)
{
    double sum=0;
    for(int i = 0;i<n;i++){
        sum+=arr[i];
    }
    return sum/n;
}

//CALCULATE MEDIAN
double median(double *arr, int n)
{
    if(n%2==1)
        return (double)(arr[n/2]);
    
    return (double)((arr[n/2]+arr[n/2-1])/2);
}

//CALCULATE VARIANCE
double variance(double *arr, int n, double mean)
{
    double t=0.0;
    for(int i=0; i<n; i++)
    {
        double temp=abs(arr[i]-mean);
        t+=temp*temp;
    }
    if(n>50)
    return t/(n-1);
    else
    return t/n;
}

int main() {

    cout<<"Enter size of data: ";
    int n; cin>>n;
    cout<<"\nEnter data: ";
    double arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    cout<<"\nEntered data after sorting is:\n";
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
    cout<<"\n";
    double mean = 0;
    mean=meancal(arr, n);
    cout<<"\nMean of dataset is: "<<mean<<"\n";
    cout<<"Median of dataset is: "<<median(arr, n);
    double var=variance(arr, n, mean);
    cout<<"\nVariance of dataset is: "<<var;
    cout<<"\nStandard deviation of dataset is: "<<sqrt(var)<<endl;
    
    return 0;
}
