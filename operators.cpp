#include<iostream>
using namespace std;

int main(){

    // int i=3;

    // i = i++ + ++i;

    // cout<<i<<endl;



    // int i=1;
    // int j=2;
    // int k;
    // //  1 + 2 + 1 + 2 + 3 + 4
    // k = i + j + i++ + j++ + ++i + ++j;

    // cout<<i<<" "<<j<<" "<<k<<endl;



    // int i=2;
            
    // i = i++ - --i + ++i - i--;
    // cout<<i<<endl;



    // int i=1, j=2, k=3;
    
    // int m = i-- - j-- - k--;
    
    // cout<<i<<endl;
    // cout<<j<<endl;
    // cout<<k<<endl;
    // cout<<m<<endl;


    int i=10, j=20, k;
       
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
    
    cout<<i<<endl;
    cout<<j<<endl;
    cout<<k<<endl;



    return 0;
}