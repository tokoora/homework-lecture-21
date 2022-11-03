#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;
int main(){
    //უმაღლესი რიცხვი
    int num, secNum, thNum;
    cin>>num>>secNum>>thNum;
    if(num>=secNum && num>=thNum){
        cout<<num<<endl;
    } else if(secNum>=num && secNum>=num){
        cout<<secNum<<endl;
    } else cout<<thNum<<endl;
    // max ფუნქცია უკეთესი იქნებოდა მარა ასე ვქნათ 

    //წრეწირის ფართობი
    int r;
    cin>>r;
    cout<<M_PI*(r*r)<<endl;

    //ფარენჰეიტიდან ცელსიუსზე გადაყვანა და პირიქით
    int temp;
    char sym;
    cin>>temp>>sym;
    if(sym=='f'){
        cout<<(temp-32)*(5/9);
    } else if(sym=='t'){
        cout<<(temp*9/5)+32;
    } else{
        cout<<"Invalid Symbol";
    }

    //ნაკიანი წელიწადი
    int year;
    cin>>year;
    if(year%4==0){
        cout<<"ნაკიანი წელიწადი"<<endl;
    } else {
        cout<<"არანაკიანი წელიწადი"<<endl;
    }

    //მანძილის პოვნა
    int x1, x2, y1, y2;
    cin>>x1>>y1>>x2>>y2;
    cout<<sqrt(pow((x1-x2),2)+(y1-y2,2))<<endl;

    //კვადრატული განტოლება
    int a, b, c;
    cin>>a>>b>>c;
    int discr;
    discr=pow(b,2)-4*a*c;
    int ans1, ans2;
    ans1=(sqrt(discr)-b)/(2*a);
    ans2=(sqrt(discr)+b)/(2*a);
    if(discr<0){
        cout<<"ამონახსნი არ არის"<<endl;
    } else cout<<ans1<<" "<<ans2<<endl;


    //კალკულატორი
    int s1, s2;
    char symbol;
    cin>>s1>>s2>>symbol;
    switch(symbol){
        case '-':
        cout<<s1-s2;
        break;
        case '+':
        cout<<s1+s2;
        break;
        case '*':
        cout<<s1*s2;
        break;
        case '/':
        cout<<s1/s2;
        break;
        default:
        cout<<"არასწორი სიმბოლო";
        break;
    }




}
