
#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 
#define bl bool 
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
using namespace std;

int main()
{
    Naba;

    int TestCase;
    cin >> TestCase;

    while(TestCase--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];

        if( n % 2 )
        {
            no;
            continue;
        }
           
        
        else
        {
            int cnt1 = 0, cnt2 = 0, cnt0 = 0;
            for(int i = 0; i < n; i++)
            {
                if(v[i] == 1)
                    cnt1++;
                else if(v[i] == 2)
                    cnt2++;
                else
                    cnt0++;
            }

            if(cnt1 == cnt2) 
                yes;
            else if(abs(cnt1 - cnt2) <= cnt0)  
                yes;
            else 
                no;
               
        }
     
    }

    return 0;
}
