#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void swap(char *a, char *b);
void permutation(char *x, int l, int r);
void maxNumber(int* array, int size);
int stringLength(char *st);
void swapNumbers(int *a, int *b, int *c);
int returnBigger(int *a, int *b);

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
    int arraySeven[101], arraySize;
    cout<<"Enter the number of elements: ";
    cin>>arraySize;
    cout<<"Input "<<arraySize<<" number of elements: "<<endl;
    for(int i=0; i<arraySize; i++){
        cout<<"element - "<<i<<" : ";
        cin>>arraySeven[i];
        cout<<endl;
    }
    cout<<"The elements you entered are: "<<endl;
    for(int i=0; i<arraySize; i++){
        cout<<"element - "<<i<<" : "<<*(arraySeven+i)<<endl;
    }

    cout<<endl<<endl;


    //მე-8 სავარჯიშო
    char x[]="abcd";
    permutation(x, 0, 3);
    cout<<endl<<endl;

    //მე-9 სავარჯიშო
    int arrSize;
    cout<<"Input the number of elements: ";
    cin>>arrSize;
    int *array=new int[arrSize];
    for(int i=0; i<arrSize; i++){
        cout<<"Number "<<i+1<<": ";
        cin>>array[i];
    }
    maxNumber(array, arrSize);
    cout<<endl<<endl;

    //მე-10 სავარჯიშო
    char st[100];
    cout<<"Input a string: ";
    cin>>st;
    cout<<"The length of string: "<<stringLength(st);
    cout<<endl<<endl;

    //მე-11 სავარჯიშო
    int a, b, c;
    cout<<"Enter the numbers: ";
    cin>>a>>b>>c;
    cout<<"The numbers before swapping: ";
    cout<<a<<" "<<b<<" "<<c<<" "<<endl;
    swapNumbers(&a, &b, &c);
    cout<<"The numbers before swapping: ";
    cout<<a<<" "<<b<<" "<<c<<" ";
    cout<<endl<<endl;

    //მე-12 სავარჯიშო
    int factNumber;
    cout<<"Input the number: ";
    cin>>factNumber;
    int *p;
    *p=1;
    for(int i=1; i<=factNumber; i++){
        *p=*p*i;
    }
    cout<<"The factorial of "<<factNumber<<" is: "<<*p;
    cout<<endl<<endl;

    //მე-13 სავარჯიშო
    char string[100];
    char *stringPointer;
    int countVowel=0, countConstant=0;
    cout<<"Input the string: ";
    cin>>string;
    stringPointer=string;
    while(*stringPointer!='\0'){
        if(*stringPointer=='A' || *stringPointer=='U' || *stringPointer=='O' || *stringPointer=='I' || *stringPointer=='E' || *stringPointer=='a' || *stringPointer=='u' || *stringPointer=='o' || *stringPointer=='i' || *stringPointer=='e'){
            countVowel++;
        } else {
            countConstant++;
        }
        stringPointer++;
    }
    cout<<"The number of vowels: "<<countVowel<<endl;
    cout<<"The number of constants: "<<countConstant<<endl;
    cout<<endl<<endl;

    //მე-14 სავარჯიშო

    //მე-15 სავარჯიშო
    int numOne, numTwo;
    cout<<"Enter the numbers: ";
    cin>>numOne>>numTwo;
    cout<<"The largest number is: "<<returnBigger(&numOne, &numTwo);
    cout<<endl<<endl;

    //მე-16 სავარჯიშო
    int arraySixteen[101], arraySixteenSize, arraySum=0;
    cout<<"Enter the number of elements: ";
    cin>>arraySixteenSize;
    for(int i=0; i<arraySixteenSize; i++){
        cout<<"element - "<<i+1<<": ";
        cin>>arraySixteen[i];
    }
    for(int i=0; i<arraySixteenSize; i++){
        arraySum+=*(arraySixteen+i);
    }
    cout<<"The sum of array is: "<<arraySum;
    cout<<endl<<endl;

    //მე-17 სავარჯიშო
    int arraySeventeen[101], arraySeventeenSize;
    cout<<"Enter the number of elements: ";
    cin>>arraySeventeenSize;
    for(int i=0; i<arraySeventeenSize; i++){
        cout<<"element - "<<i+1<<": ";
        cin>>arraySeventeen[i];
    }
    for(int i=arraySeventeenSize-1; i>=0; i--){
        cout<<"element - "<<i+1<<": "<<*(arraySeventeen+i)<<endl;
    }
    cout<<endl<<endl;

    //მე-18-დან მე-20-ს ჩათვლით არ გაგვივლია

    //21-ე სავარჯიშო
    char alpha[30];
    char *alphabetPointer;
    alphabetPointer=alpha;
    for(int i=0; i<26; i++){
        *alphabetPointer=i+'A';
        alphabetPointer++;
    }
    alphabetPointer=alpha;
    for(int i=0; i<26; i++){
        cout<<*alphabetPointer<<" ";
        alphabetPointer++;
    }
    cout<<endl<<endl;

    //22-ე სავარჯიშო ვერ მივხვდი


    
}

void swap(char *a, char *b){
    char t;
    t=*a;
    *a=*b;
    *b=t;
}

void permutation(char *x, int l, int r){
    if(l==r){
        cout<<x<<endl;
    } else {
        for(int i=l; i<=r; i++){
            swap((x+l), (x+i));
            permutation(x, l+1, r);
            swap((x+l), (x+i));
        }
    }
}

void maxNumber(int *array, int size){
    for(int i=1; i<size; i++){
        if(*array<*(array+i)){
            *array=*(array+i);
        }
    }
    cout<<"The largest element is: "<<*array;
}

int stringLength(char *st){
    int l=0;
    while(*st!='\0'){
        l++;
        st++;
    }
    return l;
}

void swapNumbers(int *a, int *b, int *c){
    int t;
    t=*b;
    *b=*a;
    *a=*c;
    *c=t;
}

int returnBigger(int *a, int *b){
    if(*a>*b) return *a;
    else return *b;
}