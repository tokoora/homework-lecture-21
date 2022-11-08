#include <iostream>
#include <cmath>
using namespace std;
int main(){
    //1-ლი სავარჯიშო
    cout<<"First 10 Natural Numbers"<<endl;
    for(int i=1; i<=10; i++){
        cout<<i<<" ";
    }
    cout<<endl<<endl<<endl;
    //მე-2 სავარჯიშო
    int sum;
    for(int i=1; i<=10; i++){
        sum+=i;
    }
    cout<<"Sum of First 10 Natural Numbers = "<<sum<<endl<<endl<<endl;

    //მე-3 სავარჯიშო
    int n, sumN=0;
    cout<<"Enter the Number to Determine sum of all Natural Number Before that: ";
    cin>>n;
    cout<<"n terms of Natural Numbers"<<endl;
    for(int i=1; i<=n; i++){
        sumN+=i;
        cout<<i<<" ";
    }
    cout<<"sum of n terms of Natural Numbers = "<<sumN<<endl<<endl<<endl;

    //მე-4 სავარჯიშო
    int i=1, j=1, x;
    while(i<=500){
        while(j<=500){
            if(j<i){
                if(i%j==0) x+=j;
            }
            j++;
        }
        if(x==i){
            cout<<i<<" ";
        }
        i++;
        j=1;
        x=0;
    }
    cout<<endl<<endl<<endl;

    //მე-5 სავარჯიშო
    int num, count=0;
    cout<<"Enter the Number to see if it is Prime or Not: ";
    cin>>num;
    for(int i=1; i<=num; i++){
        if(num%i==0) count++;
    }
    if(count>2) cout<<"This Number is Not Prime"<<endl;
    else cout<<"This Number is Prime"<<endl;
    cout<<endl<<endl<<endl;
    
    
    //მე-6 სავარჯიშო
    int prNum;
    int i_6=1, j_6=1;
    cout<<"All of the Prime Number between 1 and 100"<<endl;
    while(i_6<=100){
        while(j_6<=100){
            if(j_6<=i_6){
                if(i_6%j_6==0) prNum++;
            }
            j_6++;
        }
        if(num<=2){
            cout<<i_6<<" ";
        }
        i_6++;
        j_6=1;
        prNum=0;
    }
    cout<<endl<<endl<<endl;
    
    //მე-7 სავარჯიშო
    int factorialNumber;
    cout<<"Enter the Number to Determine its Factorial: ";
    cin>>factorialNumber;
    int factorialSum=1;
    for(int i=1; i<=factorialNumber; i++){
        factorialSum*=i;
    }
    cout<<"Factorial of the Number = "<<factorialSum<<endl<<endl<<endl;
    

    //მე-8 სავარჯიშო
    int primeNum;
    cout<<"Enter the Number to see the Last Prime Number that Occured before that Number: ";
    int primeCount=0;
    for(int i=primeNum-1; i>=1; i--){
        for(int j=2; j<i; j++){
            if(i%j==0) primeCount++;
        }
        if(primeCount==0){
            if(i==1){
                cout<<"No Primes Less than 2";
                break;
            }
            cout<<"The Prime Number that Last Occured before Number = "<<i<<endl;
            break;
        }
        primeCount=0;
    }
    cout<<endl<<endl<<endl;
    
    //მე-9 სავარჯიშო
    int num1, num2, gcd;
    cout<<"Enter the First Number: ";
    cin>>num1;
    cout<<"Enter the Second Number: ";
    cin>>num2;
    
    for(int i=1; i<=num1 && i<=num2; i++){
        if(num1%i==0 && num2%i==0){
            gcd=i;
        }
    }
    cout<<"The Greatest Common Divisor Is: "<<gcd<<endl<<endl<<endl;

    //მე-10 სავარჯიშო
    int number, digitsSum=0;
    cout<<"Enter the Number to Determine the Sum of the Digits: ";
    cin>>number;
    while(number>0){
        digitsSum+=number%10;
        number/=10;
    }
    cout<<"The Sum of the Digits of Number = "<<digitsSum<<endl<<endl<<endl;

    //მე-11 სავარჯიშო
    float number_11, sum_11=0;
    cout<<"Enter the Number to Determine the Series: ";
    cin>>number_11;
    for(int i=1; i<=number_11; i++){
        sum_11+=(1/pow(i, i));
    }
    cout<<"Sum of Series = "<<sum_11<<endl<<endl<<endl;

    //მე-12 სავარჯიშო
    int number_12, sum_12=0;
    cout<<"Enter the Number to Determine the Series: ";
    cin>>number_12;
    for(int i=1; i<=number_12; i++){
        sum_12+=pow(i, 2);
    }
    cout<<"The Sum of the Series = "<<sum_12<<endl<<endl<<endl;

    //მე-13 სავარჯიშო
    int number_13, sum_13=0;
    int numberCounter;
    cout<<"Enter the Number to Determine the Series: ";
    cin>>number_13;
    while(numberCounter<=number_13){
        for(int i=numberCounter; i>=1; i--){
            sum_13+=i;
        }
        numberCounter++;
    }
    cout<<"The Sum of the Series = "<<sum_13<<endl<<endl<<endl;

}