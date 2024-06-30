#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    string b;
    cin>>a;
    cin>>b;
    int x = a.size();
    int y = b.size();
    int n = x+y;
    int c[n];
    for(int i=0; i<n; i++){
        c[i] = 0;
    }
    
    int cr = 0;  
    int e = min(x,y);
    
        if(x==e){
            for(int p1=0; p1<x; p1++){
                for(int p2=0; p2<y; p2++){
                    int z = (a[x-1-p1]-48)*(b[y-1-p2]-48)  + cr;
                    int o = p1+p2;
                    if(z<10){
                        int h = c[o] + z; 
                        if(h<10){
                            c[o] = h;
                            cr = 0;
                        } 
                        else {
                            c[o] = h%10;
                            cr = h/10;
                        }
                    }
                    else{
                        int h = c[o] + z;
                            c[o] = h%10;
                            cr = h/10;  
                    }     
                }
                c[n-(x-p1)] += cr;
                cr =0;   
            }
        }

        else {
            for(int p2 =0; p2<y; p2++){
                for(int p1=0; p1<x; p1++){
                    int z = (a[x-1-p1]-48)*(b[y-1-p2]-48) + cr;
                    int o = p1+p2;
                    if(z<10){
                        int h = c[o] + z; 
                        if(h<10){
                            c[o] = h;
                            cr = 0;
                        } 
                        else {
                            c[o] = h%10;
                            cr = h/10;
                        }
                    }
                    else{
                        int h = c[o] + z;
                            c[o] = h%10;
                            cr = h/10;
                    }     
                }
                c[n-(y-p2)] += cr;
                cr =0;  
            }
    }




     int idx ;
    for(int i=n-1; i>=0; i--){
        if(c[i] != 0){
            idx = i;
            break;
        }
        else{
            idx = 0;
        }
    }

     for(int i=idx; i>=0; i--){
       cout<<c[i];
    }







    // for(int i=0; i<n; i++){
    //     cout<<c[n-1-i];
    // }
}