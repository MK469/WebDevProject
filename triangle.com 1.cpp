#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter first number: ";
    cin>>n;
    
    for(int i=1 ; i<=4 ;i++){
        for(int j=1 ; j<=i ; j++){
            cout<<" "<<n;
            n++;
        }
        cout<<endl;
    }
    return 0;
}