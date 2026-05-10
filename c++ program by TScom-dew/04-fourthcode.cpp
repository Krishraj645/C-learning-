#include<iostream>
using namespace std;

// ! Adding 1 to n numbers taking value of n by user

int main(){

    int n = 0, sum = 0;

    cout<<"Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++){

        sum += i;
    }

    cout << "Total Sum= " << sum << endl;

    return 0;
}