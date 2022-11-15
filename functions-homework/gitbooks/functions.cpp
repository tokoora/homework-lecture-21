#include <iostream>
#include <cmath>
using namespace std;

int function(int numberOne=6, int numberTwo=5){
    return pow(numberOne, numberTwo);
}

void hello(string name){
    cin>>name;
    cout<<"Hello "<<name;
}

int max_two(int numberOne, int numberTwo, int max=0){
    if(numberOne>numberTwo) max=numberOne;
    else max=numberTwo;
    return max;
}

int numberSum(int number, int sum=0){
    for(int i=1; i<=number; i++){
        sum+=i;
    }
    return sum;
}

int main(){
    //1-ლი სავარჯიშო
    cout<<function();
    cout<<endl<<endl;

    //მე-2 სავარჯიშო
    string name;
    hello(name);
    cout<<endl<<endl;

    //მე-3 სავარჯიშო
    int numberOne, numberTwo;
    cout<<"Enter the numbers: ";
    cin>>numberOne>>numberTwo;
    cout<<max_two(numberOne, numberTwo);
    cout<<endl<<endl;

    //მე-4 სავარჯიშო
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"The sum = "<<numberSum(num);

}