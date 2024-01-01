#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define must ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
signed main()
{
    must;
    int t=1;
    cin>>t;
    while(t--)
    {
        int first=0,last=0;
        int f=0;
        int cnt=0;
        int n;
        cin>>n;
        int arr[n+2];
        int brr[n+2];
        brr[1]=0;
        int ff=0;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            if(i>=2)
            {
                if(arr[i]==arr[i-1])
                {
                    ff=1;
                }
                if(arr[i]!=arr[i-1])
                {
                    f=1;
                    last=1-last;
                }
                brr[i]=last;
            }
        }
        if(f==0)
        {
            cout<<1<<endl;
            for(int i=0; i<n; i++)
            {
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else
        {
            if(arr[1]==arr[n] && brr[1]==brr[n])
            {
                cout<<2<<endl;
                for(int i=1; i<=n; i++)
                {
                    cout<<brr[i]+1<<" ";
                }
                cout<<endl;
            }
            else if(arr[1]!=arr[n] && brr[1]!=brr[n])
            {
                cout<<2<<endl;
                for(int i=1; i<=n; i++)
                {
                    cout<<brr[i]+1<<" ";
                }
                cout<<endl;
            }
            else
            {
                if(n%2==0)
                {
                    cout<<2<<endl;
                    int op=0;
                    for(int i=1;i<=n;i++)
                    {
                      cout<<op+1<<" ";
                      op=1-op;
                    }
                }
                else
                {
                    if(ff==0)
                    {
                        cout<<3<<endl;
                        for(int i=1; i<n; i++)
                        {
                            cout<<brr[i]+1<<" ";
                        }
                        cout<<3<<endl;
                    }
                    else
                    {
                        int fff=0;
                        vector<int>ans;
                        ans.push_back(0);
                        for(int i=2; i<=n; i++)
                        {
                            if(arr[i]==arr[i-1] && fff==0)
                            {
                                fff=1;
                                ans.push_back(1-ans.back());
                            }
                            else
                            {
                                if(arr[i]==arr[i-1])
                                {
                                    ans.push_back(ans.back());
                                }
                                else
                                {
                                    ans.push_back(1-ans.back());
                                }
                            }
                        }
                        cout<<2<<endl;
                        for(auto it:ans)
                        {
                            cout<<it+1<<" ";
                        }
                        cout<<endl;
                    }
                }
            }
        }
    }
}
