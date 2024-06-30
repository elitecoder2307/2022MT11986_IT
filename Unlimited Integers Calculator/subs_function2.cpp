#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    string b;
    cout<<"Enter first number in reverse order : ";
    cin>>a;
    cout<<"Enter second number in reverse order : ";
    cin>>b;
    int x = a.size();
    int y = b.size();
    int n = max(x,y);
    int c[n];
    int p1 = 0;
    int p2 = 0;
    int cr = 0;
    while(p1<x || p2<y){
        int e = min(x,y);
        if(  x>=y ){
           int f =0;
           int g =0;

            if(x==y ){
                int cnt=0;
                for(int i=n-1; i>=0; i--){
                    if(a[i]>b[i]){
                        f++;
                        break;
                    }
                    else if(b[i]>a[i]){
                        g++;
                        break;
                    }
                    else cnt++;
                }


                if(f==1){
                    if(p1<e && p2<e){
                        int z = (a[p1]-48)-(b[p2]-48)-cr;
                        //cout<<z<<endl;
                        if((a[p1]-b[p2]-cr) >=0){
                            cr = 0;
                            c[p1] = z;
                            p1++;
                            p2++;
                        }
                        else{
                            c[p1] = z+10;
                            cr = 1;
                            p1++;
                            p2++;
                        }   
                    }
                    else if(p2==e && p1>=e && x>y){
                        int z = (a[p1]-48)-cr;
                
                            c[p1] = z;
                            cr = 0;
                            p1++;
                    }
                }


                else if(g==1){
                    if(p1<e && p2<e){
                    int z = (b[p2]-48)-(a[p1]-48)-cr;
                    if((b[p2]-a[p1]-cr) >=0){
                        cr = 0;
                        c[p2] = z;
                        p1++;
                        p2++;
                    }
                    else{
                        c[p2] = z+10;
                        cr = 1;
                        p1++;
                        p2++;
                    }         
                    }
                    else if(p1==e && p2>=e && y>x){
                        int z = (b[p2]-48)-cr;
                            c[p2] = z;
                            cr =0;
                            p2++;  
                    }
                }

                else if(cnt==n){
                    if(p1<e && p2<e){
                    int z = (b[p2]-48)-(a[p1]-48)-cr;
                    //cout<<z<<endl;
                    if((b[p2]-a[p1]-cr) >=0){
                        cr = 0;
                        c[p2] = z;
                        p1++;
                        p2++;
                    }
                    else{
                        c[p2] = z+10;
                        cr = 1;
                        p1++;
                        p2++;
                    }         
                    }
                    else if(p1==e && p2>=e && y>x){
                        int z = (b[p2]-48)-cr;
                            c[p2] = z;
                            cr =0;
                            p2++;  
                    }

                }

            }
            else if(x>y){
                if(p1<e && p2<e){
                    int z = (a[p1]-48)-(b[p2]-48)-cr;
                    if((a[p1]-b[p2]-cr) >=0){
                        cr = 0;
                        c[p1] = z;
                        p1++;
                        p2++;
                    }
                    else{
                        c[p1] = z+10;
                        cr = 1;
                        p1++;
                        p2++;
                    }   
                }
                else if(p2==e && p1>=e && x>y){
                    int z = (a[p1]-48)-cr;
            
                        c[p1] = z;
                        cr = 0;
                        p1++;
                }
            }

           

        }
        else if(x<y){
            if(p1<e && p2<e){
                int z = (b[p2]-48)-(a[p1]-48)-cr;
                if((b[p2]-a[p1]-cr) >=0){
                    cr = 0;
                    c[p2] = z;
                    p1++;
                    p2++;
                }
                else{
                    c[p2] = z+10;
                    cr = 1;
                    p1++;
                    p2++;
                }         
            }
            else if(p1==e && p2>=e && y>x){
                int z = (b[p2]-48)-cr;
                    c[p2] = z;
                    cr =0;
                    p2++;  
            }
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

}