#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    for(int i=1;i<=n;i++){
        for(int k=n;k>i;k--){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"#";
        }
    if(i!=n){
    cout<<endl;
    }
    }

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}

