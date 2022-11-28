#include <iostream>
using namespace std;
template <typename T>

T maxNum(T a, T b, T c){
    if(a>=b && a>=c) return a;
    else if(b>a && b>c) return b;
    else return c;
}

int main(){
    float a, b, c;
    cout<<"Enter the numbers: ";
    cin>>a>>b>>c;
    cout<<"The max number is: "<<maxNum(a, b, c);
}