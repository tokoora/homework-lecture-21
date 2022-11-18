#include <iostream>
using namespace std;
const int maxn=101;

void printNaturalNumbers(int num=1);
int sumOfNaturalNumbers(int num);
int fib(int num);
void array(int ar[], int count, int size);
int numberOfDigits(int num);
int sumOfDigits(int num);


int main(){
    //1-ლი სავარჯიშო
    cout<<"The natural numbers: "<<endl;
    printNaturalNumbers();
    cout<<endl<<endl;

    //მე-2 სავარჯიშო
    int limit;
    cout<<"Input the number: ";
    cin>>limit;
    cout<<sumOfNaturalNumbers(limit);
    cout<<endl<<endl;

    //მე-3 სავარჯიშო
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"The series are: ";
    for(int i=1; i<=num; i++){
        cout<<fib(i)<<" ";
    }
    cout<<endl<<endl;

    //მე-4 სავარჯიშო
    int size, ar[maxn];
    cout<<"Enter the number of elements: ";
    cin>>size;
    for(int i=0; i<size; i++){
        cout<<"The element - "<<i<<" = ";
        cin>>ar[i];
    }
    cout<<"The elements of array: ";
    array(ar, 0, size);
    cout<<endl<<endl;

    //მე-5 სავარჯიშო
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    cout<<"The number of digits is: "<<numberOfDigits(number);
    cout<<endl<<endl;

    //მე-6 სავარჯიშო
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The sum of the digits: "<<sumOfDigits(n);

}

void printNaturalNumbers(int num){
   if(num<=50){
    cout<<num<<" ";
    printNaturalNumbers(num+1);
   }
}

int sumOfNaturalNumbers(int num){
    int sum=0;
    if(num==1) return 1;
    else {
       return sum=num+sumOfNaturalNumbers(num-1);
    }

}

int fib(int num){
    if(num==0 || num==1) return num;
    else{
        return fib(num-1)+fib(num-2);
    }
}

void array(int ar[], int count, int size){
    if(count>size-1) return;
    cout<<ar[count]<<" ";
    array(ar, count+1, size);
}

int numberOfDigits(int num){
    static int count=0;
    if(num>0){
        count++;
        numberOfDigits(num/10);
    }
    return count;
}

int sumOfDigits(int num){
    static int sum=0;
    if(num>0){
        sum+=num%10;
        sumOfDigits(num/10);
    }
    return sum;
}