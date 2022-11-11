#include <iostream>
#include <cmath>
#include <algorithm>
const int maxn=1e5; 
using namespace std;
int main(){
    //1-ლი სავარჯიშო
    float number1, number2, number3, number4, number5;
    cout<<"Input the numbers: ";
    cin>>number1>>number2>>number3>>number4>>number5;
    float average;
    average=(number1+number2+number3+number4+number5)/5;
    cout<<"The average of 5 numbers = "<<average<<endl;
    cout<<endl;


    //მე-2 სავარჯიშო
    int array[101];
    int arraySize, arraySum=0;
    cout<<"Input the size of array: ";
    cin>>arraySize;
    cout<<"Input the array numbers: ";
    for(int i=0; i<arraySize; i++){
        cin>>array[i];
        arraySum+=array[i];
    }
    cout<<"The sum of array numbers = "<<arraySum<<endl;
    cout<<endl;

    //მე-3 სავარჯიშო
    int ar[101], arSize, numPosition;
    cout<<"Enter the size of array: ";
    cin>>arSize;
    cout<<"Enter the numbers of array: ";
    for(int i=0; i<arSize; i++){
        cin>>ar[i];
    }
    cout<<"Enter the position of number you want to delete: ";
    cin>>numPosition;
    if(numPosition>arSize){ cout<<"This positions exceeds size of array";}
    else {
        cout<<"Array after deleting the number: ";
        numPosition--;
        for(int i=numPosition; i<arSize-1; i++){
            ar[i]=ar[i+1];
        }
        for(int i=0; i<arSize-1; i++){
            cout<<ar[i]<<" ";
        }
    }
    cout<<endl<<endl;

    //მე-4 სავარჯიშო
    int array4[101], array4Size, numPosition4, numberValue;
    cout<<"Enter the size of array: ";
    cin>>array4Size;
    cout<<"Enter the numbers of array: ";
    for(int i=0; i<array4Size; i++){
        cin>>array4[i];
    }
    cout<<"Enter the position where you want to insert number: ";
    cin>>numPosition4;
    cout<<"Enter the number value you want to insert: ";
    cin>>numberValue;
    for(int i=array4Size-1; i>=numPosition4-1; i--){
        array4[i+1]=array4[i];
    }
    array4[numPosition4-1]=numberValue;
    cout<<"Array after the number insertion: ";
    for(int i=0; i<array4Size+1; i++){
        cout<<array4[i]<<" ";
    }

    cout<<endl<<endl;

    //მე-5 სავარჯიშო
    int matrix1[101][101], matrix2[101][101], sumMatrix[101][101];
    int row, column;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of columns: ";
    cin>>column;
    cout<<"Enter the elements of first matrix: ";
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>matrix1[i][j];
        }
    }

    cout<<"Enter the elements of second matrix: ";
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>matrix2[i][j];
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            sumMatrix[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
    cout<<"The sum of 2 matrixes: ";
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout<<sumMatrix[i][j]<<" ";
        }
    }
    cout<<endl<<endl;

    //მე-6 სავარჯიშო, ეს მესამეს იდენტურია არანაირი განსხვავება არარი
    int array6[101], array6Size, numPosition6;
    cout<<"Enter the size of array: ";
    cin>>array6Size;
    cout<<"Enter the numbers of array: ";
    for(int i=0; i<array6Size; i++){
        cin>>array6[i];
    }
    cout<<"Enter the position of number you want to delete: ";
    cin>>numPosition6;
    if(numPosition6>array6Size){cout<<"This position exceeds size of array";}
    else{
        cout<<"Array after deleting the number: ";
        numPosition6--;
        for(int i=numPosition6; i<array6Size-1; i++){
            array6[i]=array6[i+1];
        }
        for(int i=0; i<array6Size-1; i++){
            cout<<array6[i]<<" ";
        }
    }
    cout<<endl<<endl;

    //მე-7 სავარჯიშო
    int matr[101][101], rows, columns, maxNumber, minNumber;
    int array7[maxn], arnum=0;
    cout<<"Input the number of rows: ";
    cin>>rows;
    cout<<"Input the number of columns: ";
    cin>>columns;
    cout<<"Enter the numbers of matrix: ";
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cin>>matr[i][j];
            array7[arnum]=matr[i][j];
            arnum++;
        }
    }
    sort(array7, array7+arnum);
    minNumber=array7[0];
    maxNumber=array7[arnum-1];
    cout<<"The lowest value of matrix is: "<<minNumber<<endl;
    cout<<"The highest value of matrix is: "<<maxNumber<<endl;
    cout<<endl<<endl;

    //მე-8 და მე-9 ეს Union-ები ვერ გავიგე და პირადპირ გადმოწერას ჯობია ვაბშე არ დავწერო კი მივხვდი როგორც კეთდება დაახლოებით მარა მაინც

    //მე-10 სავარჯიშო
    int matrix10[101][101];
    int above=0, below=0, row10, column10;
    cout<<"Input the number of rows: ";
    cin>>row10;
    cout<<"Input the number of columns: ";
    cin>>column10;
    cout<<"Input the elements of matrix: ";
    for(int i=0; i<row10; i++){
        for(int j=0; j<column10; j++){
            cin>>matrix10[i][j];
        }
    }
    for(int i=0; i<row10; i++){
        for(int j=0; j<column10; j++){
            if(i>j) below+=matrix10[i][j];
            if(j>i) above+=matrix10[i][j];
        }
    }
    cout<<"Sum of elements above the main diagonal = "<<above<<endl;
    cout<<"Sum of elements below the main diagonal = "<<below<<endl;
    cout<<endl<<endl;


    //მე-11 სავარჯიშო
    int matrix11[101][101];
    int aboveTriangle[101], belowTriangle[101], row11, column11, belowCounter=0, aboveCounter=0;
    cout<<"Input the number of rows: ";
    cin>>row11;
    cout<<"Input the number of columns: ";
    cin>>column11;
    cout<<"Input the elements of matrix: ";
    
    for(int i=0; i<row11; i++){
        for(int j=0; j<column11; j++){
            cin>>matrix11[i][j];
        }
    }
    
    for(int i=0; i<row11; i++){
        for(int j=0; j<column11; j++){
            if(i>j) {belowTriangle[belowCounter]=matrix11[i][j]; belowCounter++;}
            if(j>i) {aboveTriangle[aboveCounter]=matrix11[i][j]; aboveCounter++;}
        }
    }
    cout<<"Triangle below main diagonal: "<<endl;
    for(int i=0; i<belowCounter; i++){
        cout<<belowTriangle[i]<<" ";
    }
    cout<<"Triangle above main diagonal: ";
    for(int i=0; i<aboveCounter; i++){
        cout<<aboveTriangle[i]<<" "<<endl;
    }
    cout<<endl<<endl;


    //მე-12 სავარჯიშო
    int matrix12[101][101];
    int row12, column12, maxNum, secondMaxNum;
    int array12[maxn], arcounter=0;
    cout<<"Input the number of rows: ";
    cin>>row12;
    cout<<"Input the number of columns: ";
    cin>>column12;
    cout<<"Input the elements of matrix: ";
    for(int i=0; i<row12; i++){
        for(int j=0; j<column12; j++){
            cin>>matrix12[i][j];
            array12[arcounter]=matrix12[i][j];
            arcounter++;
        }
    } 
    sort(array12, array12+arcounter);
    maxNum=array12[arcounter-1];
    secondMaxNum=array12[arcounter-2];
    cout<<"The largest number in the matrix = "<<maxNum<<endl;
    cout<<"The second largest number in the matrix = "<<secondMaxNum<<endl;
    cout<<endl<<endl;

    //მე-13 სავარჯიშო
    int matrix13[101][101];
    int row13, column13, diagSum, diag2Sum;
    cout<<"Input the number of rows: ";
    cin>>row13;
    cout<<"Input the number of columns: ";
    cin>>column13;
    cout<<"Input the elements of matrix: ";
    for(int i=0; i<row13; i++){
        for(int j=0; j<column13; j++){
            cin>>matrix13[i][j];
        }
    }
    for(int i=0; i<row13; i++){
        for(int j=0; j<column13; j++){
            if(j==i) {diagSum+=matrix13[i][j];}
            if(j+i==row13-1) {diag2Sum+=matrix13[i][j];}
        }
    }
    cout<<"The sum of first diagonal is: "<<diagSum<<endl;
    cout<<"The sum of second diagonal is: "<<diag2Sum<<endl;
    cout<<endl<<endl;

    //მე-14 სავარჯიშო
    int array14[maxn], jr[maxn];
    int array14Size, jrSize;
    cout<<"Input the size of array: ";
    cin>>array14Size;
    cout<<"Input the elements of array: ";
    for(int i=0; i<array14Size; i++){
        cin>>array14[i];
    }
    for(int i=0, jrSize=array14Size-1; i<array14Size; i++, jrSize--){
        jr[jrSize]=array14[i];
    }
    cout<<"Array in reverse order: ";
    for(int i=0; i<array14Size; i++){
        cout<<jr[i]<<" ";
    }
    cout<<endl<<endl;

    //მე-15 სავარჯიშო, აქ საერთოდ პირობა ვერ გავიგე

    //მე-16 სავარჯიშო
    float array16[101], array16Size, arrSum=0;
    cout<<"Input the size of array: ";
    cin>>array16Size;
    cout<<"Input the elements of array: ";
    for(int i=0; i<array16Size; i++){
        cin>>array16[i];
        arrSum+=array16[i];
    }
    cout<<"Average = "<<arrSum/array16Size;
    cout<<endl<<endl;
}