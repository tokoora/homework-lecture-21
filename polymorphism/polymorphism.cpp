#include <iostream>
using namespace std;

class Country{
    public:
        string CountryName;

        void sellCountry(){
            cout<<"Cars are for sale in this country"<<endl;
        }
};

class Volkswagen{
    public:
        string Color;
        int maxSpeed;
        float Price;
        bool IsManual;

        Country country;

        void move(){
            cout<<"This car is in sale in "<<country.CountryName<<endl;
            cout<<"The Volkswagen has "<<maxSpeed<<" km/h max speed"<<endl;
            cout<<"This Volkswagen is "<<Color<<endl;
            cout<<"This Volkswagen's price is "<<Price<<"k $"<<endl;
            cout<<"The Volkswagen is "<<IsManual<< " (0-Automatic, 1-Manual)"<<endl;
            cout<<endl;
        }
};

class Lexus{
    public:
        string Color;
        float Price;
        int maxSpeed;
        int HorsePower;
        bool IsManual;

    Country country;

    void move(){
        cout<<"This car is in sale in "<<country.CountryName<<endl;
        cout<<"The Lexus has "<<maxSpeed<<" km/h max speed"<<endl;
        cout<<"This Lexus is "<<Color<<endl;
        cout<<"This Lexus's price is "<<Price<<"k $"<<endl;
        cout<<"This Lexus's horsepower is "<<HorsePower<<endl;
        cout<<"The Lexus is "<<IsManual<<" (0-Automatic, 1-Manual)"<<endl;
        cout<<endl;
    }
};

class Lamborghini{
    public:
        string Color;
        int HorsePower;
        float Price;
        int maxSpeed;
        int AmountOfCars;

        Country country;

        void move(){
            cout<<"This car is in sale in "<<country.CountryName<<endl;
            cout<<"This Lamborghini is "<<Color<<endl;
            cout<<"This Lamborghini has horsepower of "<<HorsePower<<endl;
            cout<<"Lamborghini's Price is "<<Price<<"k $"<<endl;
            cout<<"This Lamborghini has "<<maxSpeed<<" km/h max speed"<<endl;
            cout<<"There are only "<<AmountOfCars<<" amount of this model in the world"<<endl;
            cout<<endl;
        }
};

int main(){
    Country countryOne;
    countryOne.CountryName="Germany";

    Volkswagen volks;
    volks.country=countryOne;
    volks.maxSpeed=280;
    volks.Color="Grey";
    volks.IsManual=true;
    volks.Price=31.5;

    volks.move();


    Country countryTwo;

    countryTwo.CountryName="Japan";

    Lexus lexus;
    lexus.country=countryTwo;
    lexus.maxSpeed=340;
    lexus.Color="Black";
    lexus.Price=55.5;
    lexus.HorsePower=560;
    lexus.IsManual=false;

    lexus.move();

    Country countryThree;

    countryThree.CountryName="Italy";

    Lamborghini lambo;
    lambo.country=countryThree;
    lambo.Color="Yellow";
    lambo.maxSpeed=400;
    lambo.Price=880.8;
    lambo.HorsePower=900;
    lambo.AmountOfCars=63;

    lambo.move();
}