#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>
#include <cstring>
#define binarySize 8
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
    int i=1, j=1, x=0;
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

  
    

    //მე-14 სავარჯიშო
    float xNum, term, fact, yNum, ans, sumNum;
    cout<<"Enter the Value of X: ";
    cin>>xNum;
    cout<<"Enter the value for nth term: ";
    cin>>term;
    yNum=2;
    int sign=1;
    sumNum=1;
    for(int i=1; i<term; i++){
        fact=1;
        for(int j=1; yNum=2; j++){
            fact*=j;
        }
        term=term*(-1);
        ans=pow(x,yNum)/fact;
        sum+=ans;
        yNum+=2;
    }
    cout<<"The Sum of the Series is: "<<sum<<endl<<endl<<endl;

    //მე-15 სავარჯიშო
    float counter, max, sum_15, number_15;
    int terminator=-1;
    int min=INT_MAX;

    while(cin>>number_15 && number_15!=terminator){
        if(number_15>0){
        counter++;
        sum_15+=number_15;
        if(max<number_15) max=number_15;
        if(min>number_15) min=number_15;
    }
    else cout<<"Number must be Positive!!!";
    }
    if(counter>0){
        cout<<"The max Value is: "<<max<<endl;
        cout<<"The min Value is: "<<min<<endl;
        cout<<"The average is: "<<sum/counter<<endl;
    }
        //მე-16 სავარჯიშო
        int upperLimit, dividerCounter;
        int i_16=1, j_16=1;
        while(i_16<=upperLimit){
            while(j_16<=upperLimit){
                if(j_16<=i_16){
                    if(i_16%j_16==0) dividerCounter++;
                } 
                j_16++;
            }
            
        
        if(dividerCounter>2){
            cout<<i_16<<" ";
        }
        i_16++;
        j_16=1;
        dividerCounter=0;
    }

    //მე-17 სავარჯიშო
    int square;
    cout<<"Input the number of characters for a side: ";
    cin>>square;
    for(int i=1; i<=square; i++){
        for(int j=1; j<=square; j++){
            cout<<"#";
        }
        cout<<endl;
    }

    //მე-18 სავარჯიშო
    int termNumber;
    cout<<"Input the number of terms: ";
    cin>>termNumber;
    for(int i=1; i<=termNumber; i++){
        cout<<"Number is: "<<i<<" and the cube of "<<i<<" is: "<<pow(i,3)<<endl;
    }

    //მე-19 სავარჯიშო
    int tableNumber;
    cout<<"Input the number upto: ";
    cin>>tableNumber;
    cout<<endl;
    for(int i=1; i<=10; i++){
        for(int j=1; j<=tableNumber; j++){
            cout<<j<<"x"<<i<<"="<<j*i<<" ";
        }
        cout<<endl;
    }

    //მე-20 სავარჯიშო
    int oddSum=0, oddNumbers, oddTerms;
    cout<<"Input number of terms: ";
    cin>>oddTerms;
    cout<<"The odd number are: ";
    for(int i=1; i<=oddTerms; i++){
        cout<<2*i-1<<" ";
        oddSum+=2*i-1;
    }
    cout<<"The Sum of odd Natural Number upto 5 Terms: "<<oddSum<<endl;

    //21-ე სავარჯიშო
    int evenSum=0, evenNumbers, evenTerms;
    cout<<"Input number of terms: ";
    cin>>evenTerms;
    cout<<"The even number are: ";
    for(int i=1; i<=evenTerms; i++){
        cout<<2*i<<" ";
        evenSum+=2*i;
    }
    cout<<"The Sum of even Natural Number upto 5 Terms: "<<evenSum<<endl;

    //22-ე სავარჯიშო
    int seriesNumber;
    float seriesSum=0;
    cout<<"Input the number of terms: ";
    cin>>seriesNumber;
    for(float i=1; i<=seriesNumber; i++){
        seriesSum+=1/i;
    }
    cout<<"The sum of the series upto "<<seriesNumber<<" terms: "<<seriesSum<<endl;

    //23-ე სავარჯიშო
    int termNines, sumNines=0, numberNines=9;
    cout<<"Input number of terms: ";
    cin>>termNines;
    for(int i=1; i<=termNines; i++){
        cout<<numberNines<<" ";
        sumNines+=numberNines;
        numberNines=numberNines*10+9;
    }
    cout<<"The sum of the series: "<<sumNines;

    //24-ე სავარჯიშო
    float xxNumber, serieesSum=1, seriesFact=1, seriesTerms;
    float seriesSign=1;
    int j_24;
    cout<<"Input the value of x: ";
    cin>>xxNumber;
    cout<<"Input number of terms";
    cin>>seriesTerms;
    for(float i=1; i<=seriesTerms; i++){
        for(j_24=1; j_24<=i; j_24++){
            seriesFact*=j_24;
        }
    serieesSum+=pow(xxNumber, i)/seriesFact;
    j_24=1;
    }
    cout<<"The sum is: "<<serieesSum;

    //25-ე სავარჯიშო
    float number_25, sum_25, count_25;
    int term_25, ans_25, power, sign_25=-1;
    cout<<"Input the value of x: ";
    cin>>number_25;
    cout<<"Input the number of terms: ";
    cin>>term_25;
    cout<<"The Value of series:"<<endl;
    sum_25=number_25;
    for(int i=1; i<term_25; i++){
        count_25=(2*i+1);
        power=pow(number_25, count_25);
        ans_25=sign_25*power;
        sum_25+=ans_25;
        cout<<ans_25<<endl;
        sign_25=sign_25*(-1);
    }
    cout<<"The sum of the series upto "<<term_25<<" term is: "<<sum_25<<endl;

    //26-ე სავარჯიშო
    int termOnes, sumOnes=0, numberOnes=1;
    cout<<"Input number of terms: ";
    cin>>termOnes;
    for(int i=1; i<=termOnes; i++){
        cout<<numberOnes<<" ";
        sumOnes+=numberOnes;
        numberOnes=numberOnes*10+1;
    }
    cout<<"The sum of the series: "<<sumOnes;

    //27-ე სავარჯიშო
    int firstFib=0, secondFib=1, fibTerm, fibNumber;
    cout<<"Input the number of terms to display: ";
    cin>>fibTerm;
    cout<<"Here is the fibonacci series upto "<<fibTerm<<" terms:"<<endl;
    cout<<firstFib<<" "<<secondFib<<" ";
    for(int i=1; i<=fibTerm; i++){
        fibNumber=firstFib+secondFib;
        cout<<fibNumber<<" ";
        firstFib=secondFib;
        secondFib=fibNumber;
    }

    //28-ე სავარჯიშო
    int sumOfNines;
    cout<<"Number between 100 and 200, divisible by 9:"<<endl;
    for(int i=100; i<=200; i++){
        if(i%9==0){
            cout<<i<<" ";
            sumOfNines+=i;
        }
    }
    cout<<endl;
    cout<<"The sum: "<<sumOfNines<<endl;

    //29-ე სავარჯიშო
    int hcf, lcm, minNum, firstNumber, secondNumber;
    cout<<"Input 1st Number for LCM: ";
    cin>>firstNumber;
    cout<<"Input 2nd number for LCM: ";
    cin>>secondNumber;
    if(firstNumber>=secondNumber) minNum=secondNumber;
    else minNum=firstNumber;
    for(int i=1; i<=minNum; i++){
        if(firstNumber%i==0 && secondNumber%i==0){
            hcf=i;
        }
    }
    lcm=firstNumber*secondNumber/hcf;
    cout<<"The LCM of "<<firstNumber<<" and "<<secondNumber<<" is: "<<lcm<<endl;
    
    //30-ე სავარჯიშო
    int reverseNumber, reverse, reverseSum=0;
    cout<<"Input the Number: ";
    cin>>reverseNumber;
    while(reverseNumber>0){
        reverse=reverseNumber%10;
        reverseSum=reverseSum*10+reverse;
        reverseNumber/=10;
    }
    cout<<"The number in reverse order is: "<<reverseSum<<endl;

    //31-ე სავარჯიშო
    int startNum, itemsNum, differenceNum, summNum=0;
    cout<<"Input the starting number of the A.P. series: ";
    cin>>startNum;
    cout<<"Input the number of items or the A.P series: ";
    cin>>itemsNum;
    cout<<"Input the common difference of the A.P. series: ";
    cin>>differenceNum;
    for(int i=1; i<=itemsNum; i++){
        summNum+=startNum;
        startNum+=differenceNum;
    }
    cout<<"The sum of the A.P. series is: "<<summNum<<endl;

    //32-ე სავარჯიშო
    int startNumGp, itemsNumGp, ratioNum, sumNumGp=0;
    cout<<"Input the starting number of the G.P. series: ";
    cin>>startNumGp;
    cout<<"Input the number of items for the G.P. series: ";
    cin>>itemsNumGp;
    cout<<"Input the common ratio of G.P. series: ";
    cin>>ratioNum;
    for(int i=1; i<=itemsNumGp; i++){
        sumNumGp+=startNumGp;
        startNumGp*=ratioNum;
    }
    cout<<"The Sum of the G.P. series is: "<<sumNumGp<<endl;

    //33-ე სავარჯიშო, ეს ვერ მივხვდი როგორ მექნა 

    //34-ე სავარჯიშო
    string str;
    cout<<"Input a string: ";
    cin>>str;
    cout<<"Length of the string is: "<<str.size()<<endl;


    //35-ე სავარჯიშო
    int rowNumber;
    cout<<"Input the number of rows: ";
    cin>>rowNumber;
    for(int i=1; i<=rowNumber; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //36-ე სავარჯიშო
    int rowNum;
    cout<<"Input the number of rows: ";
    cin>>rowNum;
    for(int i=1; i<=rowNum; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }

    //37-ე სავარჯიშო
    int rowNum_37;
    cout<<"Input the number of rows: ";
    cin>>rowNum_37;
    for(int i=1; i<=rowNum_37; i++){
        for(int j=1; j<=i; j++){
            cout<<i;
        }
        cout<<endl;
    }

    //38-ე სავარჯიშო
    int rowNum_38, count_38=1;
    cout<<"Input the number of rows: ";
    cin>>rowNum_38;
    for(int i=1; i<=rowNum_38; i++){
        for(int j=1; j<=i; j++){
            cout<<count_38++<<" ";
        }
        cout<<endl;
    }

    //39-ე სავარჯიშო
    int rowNum_39, count_39=1;
    cout<<"Input the number of rows: ";
    cin>>rowNum_39;
    int spaceRow=rowNum_39*2-1;
    for(int i=1; i<=rowNum_39; i++){
        for(int q=spaceRow; q>=1; q--){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<count_39++<<" ";
        }
        cout<<endl;
        spaceRow--;
    }

    //მე-40 სავარჯიშო
    int rowNum_40;
    cout<<"Input the number of rows: ";
    cin>>rowNum_40;
        int spaceRow_40=rowNum_40*2-1;
    for(int i=1; i<=rowNum_40; i++){
        for(int q=spaceRow_40; q>=1; q--){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
        spaceRow_40--;
    }

    //41-ე სავარჯიშო 
    int rowNum_41;
    cout<<"Input the number of rows: ";
    cin>>rowNum_41;
    int spaceRow_41=rowNum_41*2-1;
    for(int i=1; i<=rowNum_41; i++){
        for(int q=spaceRow_41; q>=1; q--){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
        spaceRow_41--;
    }

    //42-ე სავარჯიშო
    int rowNum_42;
    cout<<"Input the number of rows: ";
    cin>>rowNum_42;
    for(int i=1; i<=rowNum_42; i++){
        for(int q=1; q<=rowNum_42*2-i; q++){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //43-ე სავარჯიშო
    int rowNum_43, x_43, y_43;
    cout<<"Input the number of rows: ";
    cin>>rowNum_43;
    for(int i=1; i<=rowNum_43; i++){
        if(i%2==0){x_43=0; y_43=1;}
        else{x_43=1; y_43=0;}
        for(int j=1; j<=1; j++){
            if(j%2==0) cout<<y_43;
            else cout<<x_43;
        }
        cout<<endl;
    }

    //44-ე სავარჯიშო
    int rowNum_44;
    cout<<"Input the number of rows: ";
    cin>>rowNum_44;
    for(int i=1; i<=rowNum_44; i++){
        for(int q=1; q<=rowNum_44*2-i; q++){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=rowNum_44-1; i>=1; i--){
        for(int q=1; q<=rowNum_44*2-i; q++){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //45-ე სავარჯიშო
    int rowNum_45, value_45=1;
    cout<<"Input the number of rows: ";
    cin>>rowNum_45;
    for(int i=0; i<rowNum_45; i++){
        for(int q=1; q<=rowNum_45*2-i; q++){
            cout<<" ";
        }
        for(int j=0; j<i; j++){
            if(j==0 || i==0) value_45=1;
            else value_45=value_45*(i-j)/j;
            cout<<value_45<<" ";
        }
        cout<<endl;
    }


    //46-ე სავარჯიშო
    int rowNum_46, value_46=1;
    cout<<"Input the number of rows: ";
    cin>>rowNum_46;
    for(int i=0; i<rowNum_46; i++){
        for(int q=1; q<=rowNum_46; q++){
            cout<<" ";
        }
        for(int j=0; j<i; j++){
            if(j==0 || i==0) value_46=1;
            else value_46=value_46*(i-j)/j;
            cout<<value_46<<" ";
        }
        cout<<endl;
    }

    //47-ე სავარჯიშო
    int rowNum_47;
    cout<<"Input the number of rows: ";
    cin>>rowNum_47;
    for(int i=1; i<=rowNum_47; i++){
        for(int q=1; q<=rowNum_47*2-i; q++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        for(int j=i-1; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
    }

    //48-ე სავარჯიშო
    int rowNum_48;
    char ch='A';
    cout<<"Input the number of rows: ";
    cin>>rowNum_48;
    for(int i=1; i<=rowNum_48; i++){
        for(int q=1; q<=rowNum_48*2-i; q++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<ch++;
        }
        ch=ch-2;
        for(int j=i-1; j>=1; j--){
            cout<<ch--;
        }
        cout<<endl;
        ch='A';

    }

    //49-ე სავარჯიშო
    int rowNum_49;
    cout<<"Input the number of rows: ";
    cin>>rowNum_49;
    int number_49=1;
    for(int i=1; i<=rowNum_49; i++){
        for(int q=1; q<=rowNum_49*2-i; q++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<number_49<<" ";
            number_49++;
        }
        number_49-=2;
        for(int j=i-1; j>=1; j--){
            cout<<number_49<<" ";
            number_49--;
        }
        cout<<endl;
        number_49+=2;
    }

    //50-ე სავარჯიშო
    int rowNum_50;
    cout<<"Input the number of rows: ";
    cin>>rowNum_50;
    for(int i=1; i<=rowNum_50; i++){
        cout<<i;
        for(int j=i+1; j<=rowNum_50; j++){
            cout<<j;
        }
        cout<<endl;
    }

    //51-ე სავარჯიშო
    int rowNum_51;
    cout<<"Input the number of rows: ";
    for(int i=rowNum_51; i>=1; i--){
        for(int q=1; q<=rowNum_51*2-i; q++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }

    //52-ე სავარჯიშო
    int rowNum_52;
    cout<<"Input the number of rows: ";
    cin>>rowNum_52;
    for(int i=1; i<=rowNum_52; i++){
        for(int j=rowNum_52-i+1; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }   


    //53-ე სავარჯიშო
    int rowNum_53;
    cout<<"Input the number of rows: ";
    cin>>rowNum_53;
    for(int i=1; i<=rowNum_53; i++){
        for(int q=1; q<=rowNum_53*2-i; q++){
            cout<<" ";
        }
        int xiCounter=i;
        for(int j=1; j<=i; j++){
            cout<<xiCounter;
            xiCounter--;
        }
        cout<<endl;
    }

    //54-ე სავარჯიშო
    int rowNum_54;
    cout<<"Input the number of rows: ";
    cin>>rowNum_54;
    int squareNumber=0;
    for(int i=1; i<=rowNum_54; i++){
        for (int q=1; q<=rowNum_54*2-i; q++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<pow(2, squareNumber)<<" ";
            squareNumber++;
        }
        squareNumber-=2;
        for(int j=i-1; j>=1; j--){
            cout<<pow(2,squareNumber)<<" ";
            squareNumber--;
            cout<<endl;
            squareNumber=0;
        }
    }

    //55-ე სავარჯიშო 
    int rowNum_55;
    cout<<"Input the number of rows: ";
    cin>>rowNum_55;
    for(int i=rowNum_55; i>=1; i--){
        for(int q=1; q<=rowNum_55*2-i; q++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        for(int j=i-1; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
    }

    
    //56-ე სავარჯიშო
    int number_56, firstDigit, lastDigit;
    cout<<"Input any number: ";
    cin>>number_56;
    lastDigit=number_56%10;
    while(number_56>=10){
        number_56/=10;
    }
    firstDigit=number_56%10;
    cout<<"The First Digit is: "<<firstDigit<<endl;
    cout<<"The Last Digit is: "<<lastDigit<<endl;

    //57-ე სავარჯიშო
    int number_57, firstDigits, lastDigits;
    cout<<"Input any number: ";
    cin>>number_57;
    lastDigits=number_57%10;
    while(number_57>=10){
        number_57/=10;
    }
    firstDigits=number_57%10;
    cout<<"The First Digit is: "<<firstDigits<<endl;
    cout<<"The Last Digit is: "<<lastDigits<<endl;
    cout<<"The sum of first and last digit is: "<<firstDigits+lastDigits<<endl;

    //58-ე სავარჯიშო
    int number_58;
    cout<<"Input any number: ";
    cin>>number_58;
    int product=1;
    while(number_58>0){
        product*=number_58%10;
        number_58/=10;
    }
    cout<<"The product of digits is: "<<product;

    //59-ე სავარჯიშო
    int number_59, counter_59=0, nashti;
    cout<<"Input any number: ";
    cin>>number_59;
    for(int i=0; i<=9; i++){
        cout<<"The frequency of "<<i<<" = ";
        for(int j=number_59; j>0; j/=10){
            nashti=j%10;
            if(nashti==i) counter_59++;
        }
        cout<<counter_59<<endl;
    }

    //მე-60 სავარჯიშო
    int number_60, reverseNumbers=0;
    cout<<"Input any number: ";
    cin>>number_60;
    while(number_60!=0){
        reverseNumbers=reverseNumbers*10+number_60%10;
        number_60/=10; //ვენაცვალე გუგლს
    }
    for(int i=reverseNumbers; i>0; i/=10){
        switch(i%10){
            case 0:
            cout<<"Zero ";
            break;
            case 1:
            cout<<"One ";
            break;
            case 2:
            cout<<"Two ";
            break;
            case 3:
            cout<<"Three ";
            break;
            case 4:
            cout<<"Four ";
            break;
            case 5:
            cout<<"Five ";
            break;
            case 6:
            cout<<"Six ";
            break;
            case 7:
            cout<<"Seven ";
            break;
            case 8:
            cout<<"Eight ";
            case 9:
            cout<<"Nine ";
            break;
            default:
            break;
        }
        cout<<endl;
    }


    //61-ე სავარჯიშო - ამას ვერ გავუგე ვერაფერი

    //62-ე სავარჯიშო
    int baseNum, exponentNum;
    cout<<"Input the base: ";
    cin>>baseNum;
    cout<<"Input the exponent: ";
    cin>>exponentNum;
    int powerNumber=1;
    for(int i=1; i<=exponentNum; i++){
        powerNumber*=baseNum;
    }
    cout<<baseNum<<"^"<<exponentNum<<"="<<powerNumber;

    //63-ე სავარჯიშო
    int number_63;
    cout<<"Input the number: ";
    cin>>number_63;
    cout<<"The factors are: ";
    for(int i=1; i<=number_63; i++){
        if(number_63%i==0) {
            cout<<i<<" ";
        }
    }


    //64-ე სავარჯიშო
    int number_64, fail=0;
    char binary[binarySize+1], comp[binarySize+1];
    cout<<"Input a 8 bit binary value: ";
    cin>>binary;
    for(int i=0; i<binarySize; i++){
        if(binary[i]=='1'){
            comp[i]='0';
        }
        else if(binary[i]=='0'){
            comp[i]='1';
        }
        else {
            cout<<"Error! ";
            fail=1;
            break;
        }
    }
    if(fail==0){
        cout<<"The original binary number = "<<binary<<endl;
        cout<<"Ones complement the number = "<<comp<<endl;
    }

    //65-ე სავარჯიშო
    int failBin=0;
    char binaryNum[binarySize+1], compNum[binarySize+1], twos[binarySize+1];
    cout<<"Input a 8 bit binary value: ";
    cin>>binary;
    for(int j=0; j<binarySize; j++){
        if(binary[j]=='1'){compNum[j]='0';}
        else if(binary[j]=='0'){compNum[j]='1';}
        else {cout<<"Error"<<endl;
        fail=1;}
    }
        for(int i=9; i<binarySize; i++){
            if(binary[i]=='1' && binary[i+1]=='1'){
                twos[i]='0';
                twos[i+1]='0';
            }
            if(binary[i]=='0' && binary[i+1]=='0'){
                twos[i]='1';
                twos[i+1]='1';
            }
            else{
                twos[i]=binary[i];
            }
        }
    if(fail==0){
        cout<<"The original binary number = "<<binary<<endl;
        cout<<"Ones complement the number = "<<compNum<<endl;
        cout<<"Twos compelement the number = "<<twos<<endl;
    }

    //66-ე სავარჯიშო
    int num_66;
    string black="black", white="white", renaming;
    cout<<"Input the number of rows: ";
    cin>>num_66;
    for(int i=1; i<=num_66; i++){
        for(int j=1; j<=num_66; j++){
            if(j%2==0){
                cout<<white;
                if(j<num_66){
                    cout<<"-";
                }
            }
            if(j%2>0){
                cout<<black;
                if(j<num_66){
                    cout<<"-";
                }
            }
        }
        renaming=black;
        black=white;
        white=renaming;
        cout<<endl;
    }

    //67-69 ჩათვლით ვერ გავუგე 

    //70-ე სავარჯიშო
    int num70;
    int array[101];
    cout<<"Input a decimal number: ";
    cin>>num70;
    for(int i=0; num70>0; i++){
        array[i]=num70%2;
        num70/=2;
    }
    cout<<"The binary number is: "<<array<<endl;

    //71-ე სავარჯიშო
    int decimalNum, rem, counter_71=0;
    char hexaDecimalNum[100];
    cout<<"Input a decimal number: ";
    cin>>decimalNum;
    while(decimalNum!=0){
        rem=decimalNum%16;
        if(rem<10) rem+=48;
        else rem+=55;
        hexaDecimalNum[counter_71]=rem;
        counter_71++;
        decimalNum/=16;
    }
    cout<<"The hexadecimal number is: ";
    for(counter_71=counter_71-1; counter_71>=0; counter_71--){
        cout<<hexaDecimalNum[counter_71];
    }
    cout<<endl;


    //72-ე სავარჯიშო
    int decimalNumber, octalNum[101], counter_72=0;
    cout<<"Input a decimal number: ";
    cin>>decimalNumber;
    while(decimalNumber!=0){
        octalNum[counter_72]=decimalNumber%8;
        decimalNumber/=8;
        counter_72++;
    }
    cout<<"The octal number is: ";
    for(counter_72=counter_72-1; counter_72>=0; counter_72--){
        cout<<octalNum[counter_72];
    }
    cout<<endl;

    //73-ე სავარჯიშო
    int num73, decimal73, rem73, counter73=0;
    cout<<"Input a binary number: ";
    cin>>num73;
    while(num73!=0){
        rem73=num73%10;
        num73/=10;
        decimal73+=rem73*pow(2, counter73);
        counter73++;
    }
    cout<<"The decimal number: "<<decimal73<<endl;

    //74-ე სავარჯიშო
    int num74, decimal74, rem74, counter74=0, anotherCounter=0, anotherrem;
    char hexaDecNum[101];
    cout<<"Input a binary number: ";
    cin>>num74;
    while(num74!=0){
        rem74=num74%10;
        num74/=10;
        decimal74+=rem74*pow(2, counter74);
        counter74++;
    }
    while(decimal74!=0){
        anotherrem=decimal74%16;
        if(anotherrem<10) anotherrem+=48;
        else anotherrem+=55;
        hexaDecNum[anotherCounter]=anotherrem;
        anotherCounter++;
        decimal74/=16;
    }
    cout<<"The hexadecimal number is: ";
    for(anotherCounter=anotherCounter-1; anotherCounter>=0; anotherCounter--){
        cout<<hexaDecNum[anotherCounter];
    }
    cout<<endl;

}