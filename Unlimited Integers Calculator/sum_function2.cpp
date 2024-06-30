#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    string b;
    cout<<"Enter first number  : ";
    cin>>a;
    cout<<"Enter second number  : ";
    cin>>b;
    int x = a.size();
    int y = b.size();
    int n = max(x,y);
    int c[n+1];
    int p1 = 0;
    int p2 = 0;
    int cr = 0;
    while(p1<x || p2<y){
        int e = min(x,y);

        if(p1<e && p2<e){
            int z = (a[x-1-p1]-48)+(b[y-1-p2]-48)+cr;
            if(z<10){
                c[p1] = z;
                p1++;
                p2++;
                if(cr>0) cr =0;
            }
            else{
                c[p1] = z%10;
                cr = z/10;
                p1++;
                p2++;
            }
        }
        else if(p1==e && p2>=e && x<y){
            int z = (b[y-1-p2]-48)+cr;
            if(z<10){
                c[p2] = z;
                p2++;
                if(cr>0) cr =0;
            }
            else{
                c[p2] = z%10;
                cr = z/10;
                p2++;
            }
        }

        else if(p2==e && p1>=e && y<x){
            int z = (a[x-1-p1]-48)+cr;
            if(z<10){
                c[p1] = z;
                p1++;
                if(cr>0) cr =0;
            }
            else{
                c[p1] = z%10;
                cr = z/10;
                p1++;
            }
        }
    }
    c[n] = cr;
    for(int i=n; i>=0; i--){
        cout<<c[i];
    }
}