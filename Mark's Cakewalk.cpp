#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    vector<int> cal(n);
    for(i=0;i<n;i++)
    {
        cin>>cal[i];
    }
    sort(cal.rbegin(),cal.rend());
    long long cal_sum=0;
    for(i=0;i<n;i++)
    {
        cal_sum+=pow(2,i)*cal[i];
    }
    cout<<cal_sum;
}