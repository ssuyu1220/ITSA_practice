#include<bits/stdc++.h>
using namespace std;

int main(){
    //ios::sync_with_stdio(0);
    //cin.tie(0);


    int k=0;
    string str;
    string tmp="";
    while(getline(cin,str)){
        string v[100];
        //getline(cin,str);
        int l=str.size();
        for(int i=0;i<l;i++){
            if(str[i]!=' '){
                tmp+=str[i];
            }
            else{
                v[k]=tmp;
                tmp="";
                k+=1;
            }
        }
        v[k]=tmp;
        tmp="";
        for(int j=k;j>0;j--){
            cout<<v[j]<<" ";
        }
        cout<<v[0]<<endl;
        k=0;
    }
    return 0;
}
