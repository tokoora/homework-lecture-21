#include <iostream>
using namespace std;
template <typename T>

T square(T num){
    return num*num;
}


int main(){
    //1-ლი სავარჯიშო
    float n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The square of number = "<<square(n);

    //მე-2 სავარჯიშო
    int arraySize;
    float arraySum, arrayAvg;
    cout<<"Enter the number of elements: ";
    cin>>arraySize;
    float *array=new float[arraySize];
    cout<<"Enter the elements: ";
    for(int i=0; i<arraySize; i++){
        cin>>array[i];
        arraySum+=array[i];
    }
    arrayAvg=arraySum/arraySize;
    cout<<"The average of elements = "<<arrayAvg;


}