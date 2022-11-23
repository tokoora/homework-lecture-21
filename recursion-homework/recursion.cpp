#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
const int maxn=101;

void printNaturalNumbers(int num=1);
int sumOfNaturalNumbers(int num);
int fib(int num);
void arrayElements(int ar[], int count, int size);
int numberOfDigits(int num);
int sumOfDigits(int num);
int gcd(int num1, int num2);
int arrayMaxNumber(int ar[]);
void reverseString(const string& st);
int numberFactorial(int num);
int binaryNumber(int n);
int primeNumber(int n, int count);
int lcm(int n, int n1, int l);
void odd(int limit, int n=1);
void even(int limit, int n=2);
int power(int num, int pw);
void hailstone(int n);
void stringCopier(string st);
char capitalCheck(string st);


int sizeOfArr;

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
    arrayElements(ar, 0, size);
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
    cout<<endl<<endl;

    //მე-7 სავარჯიშო
    int num1, num2;
    cout<<"Enter the numbers: ";
    cin>>num1>>num2;
    cout<<"The Greatest Common Divisor is: "<<gcd(num1, num2);
    cout<<endl<<endl;

    //მე-8 სავარჯიშო
    int arRay[maxn];
    cout<<"Enter the size of array: ";
    cin>>sizeOfArr;
    cout<<"Enter the elements of array: ";
    for(int i=0; i<sizeOfArr; i++){
        cout<<"Element - "<<i<<" : ";
        cin>>arRay[i];
    }
    cout<<"The largest element of array: "<<arrayMaxNumber(arRay);
    cout<<endl<<endl;

    //მე-9 სავარჯიშო
    string st;
    cout<<"Enter the string: ";
    cin>>st;
    cout<<"String in reverse order: ";
    reverseString(st);
    cout<<endl<<endl;

    //მე-10 სავარჯიშო
    int factNumber;
    cout<<"Enter the number: ";
    cin>>factNumber;
    cout<<"The factorial = "<<numberFactorial(factNumber);
    cout<<endl<<endl;

    //მე-11 სავარჯიშო
    int decNumber;
    cout<<"Enter the decimal number: ";
    cin>>decNumber;
    cout<<"The binary value of number "<<decNumber<<" = "<<binaryNumber(decNumber);
    cout<<endl<<endl;

    //მე-12 სავარჯიშო
    int primeNum, primeNumberChecker;
    cout<<"Enter the number: ";
    cin>>primeNum;
    primeNumberChecker=primeNumber(primeNum, primeNum/2);
    if(primeNumberChecker==1) cout<<"The number "<<primeNum<<" is prime";
    else cout<<"The number "<<primeNum<<" is not prime";
    cout<<endl<<endl;

    //მე-13 სავარჯიშო
    int lcmFirstNumber, lcmSecondNumber, lcmCounter;
    cout<<"Enter the numbers: ";
    cin>>lcmFirstNumber>>lcmSecondNumber;
    lcmCounter=max(lcmFirstNumber, lcmSecondNumber);
    cout<<"The least common multiple is: "<<lcm(lcmFirstNumber, lcmSecondNumber, lcmCounter);
    cout<<endl<<endl;


    //მე-14 სავარჯიშო
    int oddOrEven;
    cout<<"Enter the number: ";
    cin>>oddOrEven;
    cout<<"All the odd numbers: ";
    odd(oddOrEven);
    cout<<endl;
    cout<<"All the even numbers: ";
    even(oddOrEven);
    cout<<endl<<endl;

    //მე-15 სავარჯიშო, ვერ გავუგე ვერაფერი

    //მე-16 სავარჯიშო
    string palindromeString, palindromeString2;
    cout<<"Enter the string: ";
    cin>>palindromeString;
    palindromeString2=palindromeString;
    reverse(palindromeString2.begin(), palindromeString2.end());
    if(palindromeString==palindromeString2) cout<<"The word is palindrome";
    else cout<<"The word is not palindrome";
    cout<<endl<<endl;

    //მე-17 სავარჯიშო
    int powNumber, calcPower;
    cout<<"Input the base value: ";
    cin>>powNumber;
    cout<<"Input the power value: ";
    cin>>calcPower;
    cout<<"The value of "<<powNumber<<" to the power of "<<calcPower<<" is: "<<power(powNumber, calcPower);

    //მე-18 სავარჯიშო
    int hailstoneNumber;
    cout<<"The hailstone sequence starting at "<<hailstoneNumber<<" is: "<<endl;
    hailstone(hailstoneNumber);

    //მე-19 სავარჯიშო
    string strCopy;
    cout<<"Input the string to copy: ";
    cin>>strCopy;
    stringCopier(strCopy);

    //მე-20 სავარჯიშო
    string capitalString;
    cout<<"Enter the string: ";
    cin>>capitalString;
    cout<<"The first uppercase letter in the string is: "<<capitalCheck(capitalString);
    cout<<endl<<endl;



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

void arrayElements(int ar[], int count, int size){
    if(count>size-1) return;
    cout<<ar[count]<<" ";
    arrayElements(ar, count+1, size);
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

int gcd(int num1, int num2){
    if(num1==0 || num2==0) return 0;
    else if(num1==num2) return num1;
    else if(num1>num2) return gcd(num1-num2, num2);
    else return gcd(num1, num2-num1);
}

int arrayMaxNumber(int ar[]){
    static int count=0;
    static int number=-125125;
    if(count<sizeOfArr){
        if(number<ar[count]) number=ar[count];
        count++;
        arrayMaxNumber(ar);
    }
    return number;
}

void reverseString(const string& st){
    int count=st.size();
    if(count==1){
        cout<<st<<endl;
    } else{
        cout<<st[count-1];
        reverseString(st.substr(0, count-1));
    }
    
}

int numberFactorial(int num){
    if(num==1) return 1;
    else return num*numberFactorial(num-1);
}

int binaryNumber(int n){
    if(n==0) return 0;
    else return (n%2+10*binaryNumber(n/2));
}

int primeNumber(int n, int count){
    if(count==1) return 1;
    else if(n%count==0) return 0;
    else primeNumber(n, count-1);
}

int lcm(int n, int n1, int l){
    if(l%n==0 && l%n1==0) return l;
    else lcm(n, n1, l+1);
}

void odd(int limit, int n=1){
    if(n<=limit){
        cout<<n<<" ";
        odd(limit, n+2);
    }
}

void even(int limit, int n=2){
    if(n<=limit){
        cout<<n<<" ";
        even(limit, n+2);
    }
}

int power(int num, int pw){
    static int k=1;
    if(pw==0) return k;
    k=num*power(num, pw-1);
}

void hailstone(int n){
    cout<<n<<" ";
    if(n!=1){
        if(n%2==0) hailstone(n/2);
        else hailstone(n*3+1);
    }
}

void stringCopier(string st){
    string st1;
    st1=st;
  
    cout<<"The string successfully copied: "<<endl;
    cout<<"The first string is: "<<st<<endl;
    cout<<"The copied string is: "<<st1<<endl;
}

char capitalCheck(string st){
    static int count=0;
    if(count<st.length()){
        if(isupper(st[count])){
            return st[count];
        }
        else{
            count++;
            return capitalCheck(st);
        }
    } else{
        return 0;
    }
}