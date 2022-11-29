#include <iostream>
using namespace std;

class rectangle{
    private:
        float length;
        float width;
    public:
        void setter(float a, float b){
            length=a;
            width=b;
        }

        float lengthGetter(){
            return length;
        }
        float widthGetter(){
            return width;
        }

        float perimeter(){
            return (length+width)*2;
        }
    
};


int main(){
    rectangle obj;
    float width, length;
    cout<<"Enter the length: ";
    cin>>length;
    cout<<"Enter the width: ";
    cin>>width;
    obj.setter(width, length);
    cout<<"Perimeter = "<<obj.perimeter()<<endl;
    cout<<"Length = "<<obj.lengthGetter()<<endl;
    cout<<"Width = "<<obj.widthGetter()<<endl;
   
}