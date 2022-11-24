#include <iostream>
using namespace std;

int main(){
    //მე-4 სავარჯიშო, აქედან დავიწყოთ დანარჩენი ცარიელი cout-ებია
    int firstNumber, secondNumber, *firstPointer, *secondPointer, numberSum;
    cout<<"Enter the first number: ";
    cin>>firstNumber;
    cout<<"Enter the second number: ";
    cin>>secondNumber;
    firstPointer=&firstNumber;
    secondPointer=&secondNumber;
    numberSum=*firstPointer+*secondPointer;
    cout<<"The sum of numbers = "<<numberSum;
    cout<<endl<<endl;

    //მე-5 სავარჯიშო
    int numberOne, numberTwo, sum;
    cout<<"Enter the first number: ";
    cin>>numberOne;
    cout<<"Enter the second number: ";
    cin>>numberTwo;
    int &refOne=numberOne, &refTwo=numberTwo;
    sum=refOne+refTwo;
    cout<<"The sum of numbers = "<<sum;
    cout<<endl<<endl;

    //მე-6 სავარჯიშო
    int numberSix, numberTwoSix, *pointerSix, *pointerTwoSix, maxSix;
    cout<<"Enter the first number: ";
    cin>>numberSix;
    cout<<"Enter the second number: ";
    cin>>numberTwoSix;
    pointerSix=&numberSix, pointerTwoSix=&numberTwoSix;
    if(*pointerSix>=*pointerTwoSix) maxSix=*pointerSix;
    else maxSix=*pointerTwoSix;
    cout<<"The max number is: "<<maxSix;
    cout<<endl<<endl;

    //მე-7 სავარჯიშო
    int array[101], arraySize;
    cout<<"Enter the number of elements: ";
    cin>>arraySize;
    cout<<"Input "<<arraySize<<" number of elements: "<<endl;
    for(int i=0; i<arraySize; i++){
        cout<<"element - "<<i<<" : ";
        cin>>array[i];
        cout<<endl;
    }
    cout<<"The elements you entered are: "<<endl;
    for(int i=0; i<arraySize; i++){
        cout<<"element - "<<i<<" : "<<*(array+i)<<endl;
    }

    cout<<endl<<endl;


    //მე-8 სავარჯიშო
    
}