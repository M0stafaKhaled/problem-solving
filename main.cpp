#include <bits/stdc++.h>
using namespace std;


int main() {
    int n , m ;
    cin>>n>>m ;

 vector<bool> prim (m , true);
 prim[0] = false;
 prim[1] = false;
 for(int i =2 ; i*i<m ; i++)
 {
    if(prim[i])
    {
         for(int j = i+i ; j<m ; j+=i)
     {

         prim[j] = false;
     }
    }
 }

 for(int i =n+1 ; i<m ; i++)
 {
     if(prim[i]) cout<<i <<" " ;
 }


    return 0;
}
