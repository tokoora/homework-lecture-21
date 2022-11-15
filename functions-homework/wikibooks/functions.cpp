#include <iostream>
#include <cmath>
using namespace std;

int addingFunction(int numberOne, int numberTwo){
    return numberOne+numberTwo;
}

void addFunction(int numberOne, int numberTwo, int &numberSum){
    numberSum=numberOne+numberTwo;
}
int fib(int number){
    if((number==1)|| (number==0)){
        return number;
    } else {
        return(fib(number-1)+fib(number-2));
    }
}

void calcFunction(float numberOne, float numberTwo, float numberResult){
    char sign;
    cout<<"Enter the first number: ";
    cin>>numberOne;
    cout<<"Enter the operator: +, -, *, /, ^ ";
    cin>>sign;
    cout<<"Enter the second number: ";
    cin>>numberTwo;
    if(sign=='-') numberResult=numberOne-numberTwo;
    if(sign=='+') numberResult=numberOne+numberTwo;
    if(sign=='*') numberResult=numberOne*numberTwo;
    if(sign=='/') numberResult=numberOne/numberTwo;
    if(sign=='^') numberResult=pow(numberOne, numberTwo);
    cout<<"Result: "<<numberResult<<endl;
}

int main(){
    //1-ლი სავარჯიშო;

    int numberOne, numberTwo;
    cout<<"Enter the numbers: ";
    cin>>numberOne>>numberTwo;
    cout<<addingFunction(numberOne, numberTwo);
    cout<<endl<<endl;

    //მე-2 სავარჯიშო
    int numOne, numTwo, numberSum;
    cout<<"Enter the numbers: ";
    cin>>numOne>>numTwo;
    addFunction(numOne, numTwo, numberSum);
    cout<<"The sum is: "<<numberSum;
    cout<<endl<<endl;

    //მე-3 სავარჯიშო
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    cout<<fib(number);
    cout<<endl<<endl;

    //მე-4 სავარჯიშო
    int firstFib=0, secondFib=1, fibTerm, fibNumber;
    cout<<"Enter the term: ";
    cin>>fibTerm;
    for(int i=1; i<=fibTerm; i++){
        fibNumber=firstFib+secondFib;
        firstFib=secondFib;
        secondFib=fibNumber;
    }
    cout<<"The fibonacci number is: "<<secondFib<<endl;

    //მე-5 სავარჯიშო
    int numberX, numberY, numberResult;
    calcFunction(numberX, numberY, numberResult);

}
