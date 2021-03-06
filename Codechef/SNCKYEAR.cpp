// SnackDown Round-1B
//Problem link: https://www.codechef.com/SNCK1B19/problems/SNCKYEAR/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mp make_pair
#define pb push_back
#define mod (1e9 + 7)
#define max(a,b) (a<b ? b : a)
#define min(a,b) (a>b ? b : a)

ll power(ll a,ll b){
     if(b==1){
          return a;
     }
     if(b%2==1){
          return a*power(a,b-1);
     }
     else{
          return power(a*a,b/2);
     }
}
int main(){
     int tc;
     cin >> tc;
     while(tc--){
          int n;
          cin >> n;
          if(n==2010 || n==2015 || n==2016 || n==2017 || n==2019){
               cout<<"HOSTED";
          }
          else{
               cout<<"NOT HOSTED";
          }
          if(tc)cout<<'\n';
     }
     return 0;
}
