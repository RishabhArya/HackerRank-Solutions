#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b,ab,a2,b2;
    int alen,blen;
    cin>>a;cin>>b;
    alen = a.size();
    blen = b.size();
    ab = a + b;
    a2 = a;b2=b;
    a2[0]= b[0];
    b2[0]= a[0];
    cout<<alen<<" "<<blen;
    cout<<"\n"<<ab;
    cout<<"\n"<<a2<<" "<<b2;
    return 0;
}

s
