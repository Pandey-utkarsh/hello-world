#include<iostream>
using namespace std;

int main(){
    long n, i, j, primeno=0, count=0;
    cin >> n;
    for(i=2; i<=n;i++){
        count=0;
        for(j=2;j<=i/2;j++){
            if(i%j==0) count++;

        }
        if(count==0) primeno++;
    }
    cout << "Number of prime nos less than "<< n << "is: "<< primeno << endl;
}