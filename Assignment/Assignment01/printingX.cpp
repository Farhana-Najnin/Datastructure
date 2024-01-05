#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
char a[n] [n];
if(n%2!=0){

int r=(n/2);
for(int i=0;i<n;i++){

    for(int j=0;j<n;j++){
         /*
            }*/
             if(i==j){
                a[i][j]='\\';
            }
            else if((i+j)==(n-1)){
                a[i][j]='/';
            }

            else
                a[i][j]=' ';


           }
    }
a[r][r]='X';




for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       cout<<a[i][j];

    }
    cout<<endl;;
}
}
return 0;
}

