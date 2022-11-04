#include<iostream>
using namespace std;int main(){int n,m;cin>>n>>m;m-=n;string s=to_string(abs(m)),c="Dr. Chaz ",k=" of chicken";cout<<(m>=0?c+"will have "+s+" piece"+(m==1?"":"s")+k+" left over!":c+"needs "+s+" more piece"+(s=="1"?"":"s")+k+"!");}
