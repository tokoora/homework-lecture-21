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
}