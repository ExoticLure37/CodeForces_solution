#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,n;
    cin>>a>>b>>n;
    string s ;
    int fl=0;
    if(a%b){
        a*=10;
        if(a%b==0){
            fl=1;
        }
        else{
            int i=1;
            while(i<10){
                a+=i;
                if(a%b==0){
                    fl=1;
                    break;
                }
                a-=i;
                i++;
            }
        }
        
        s = to_string(a);
        n--;
    }
    else{
        fl=1;
        s = to_string(a);
    }

    if(fl==0){
        cout<<-1<<endl;
    }else{  
        while(n--){
            s+='0';
        }       
        cout<<s<<endl;
    }
    //     a*=10;
    //     if(a%b==0){
    //         fl=1;
    //         break;
    //     }else{
    //         int i=0;
    //         while(i<10){
    //             a+=i;
    //             if(a%b==0){
    //                 fl=1;
    //                 break;
    //             }
    //             i++;
    //         }
    //     }
} 