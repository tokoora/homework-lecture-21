#include <iostream>
using namespace std;

class Basketball{
    private:
        float pointsPerGame, assistsPerGame, reboundsPerGame, minutesPerGame;
        int playerAge, playerExperience;
        string playerTeam;

    public:
        static int playerCount;

        Basketball(float p, float a, float r, float m, int ag, int exp, string team){
            pointsPerGame=p;
            assistsPerGame=a;
            reboundsPerGame=r;
            minutesPerGame=m;
            playerAge=ag;
            playerExperience=exp;
            playerTeam=team;
            cout<<"Added Player with Full Info."<<endl;
        }

        Basketball(int ag, string team, int exp=0){
            playerAge=ag;
            playerExperience=exp;
            playerTeam=team;
            cout<<"Added A Rookie"<<endl;
        }

        Basketball(float p, float a, float r, float m, int ag){
            pointsPerGame=p;
            assistsPerGame=a;
            reboundsPerGame=r;
            minutesPerGame=m;
            playerAge=ag;
            cout<<"Added a retired player"<<endl;
        }

        Basketball(){
            cout<<"Added a player with no info"<<endl;
        }


    
        void setPlayerStats(float ppg, float apg, float rpg, float mpg){
            pointsPerGame=ppg;
            assistsPerGame=apg;
            reboundsPerGame=rpg;
            minutesPerGame=mpg;
        }

        void setPlayer(int age, int exp){
            playerAge=age;
            playerExperience=exp;
        }

        void setTeam(string team){
            playerTeam=team;
        }

        float getPlayersPoints(){
            return pointsPerGame;
        }

        float getPlayersRebounds(){
            return reboundsPerGame;
        }

        float getPlayersAssists(){
            return assistsPerGame;
        }

        float getPlayersMinutes(){
            return minutesPerGame;
        }

        int getPlayersAge(){
            return playerAge;
        }

        int getPlayersExperience(){
            return playerExperience;
        }

        int getPlayerCount(){
            return playerCount;
        }

        string getPlayersTeam(){
            return playerTeam;
        }

        
};




int main(){
    Basketball object;
    float ppg, apg, rpg, mpg;
    int age, exp;
    string team;
    cout<<"Enter players stats with decimals, First Points, then Assinsts, then Rebounds and then Minutes: ";
    cin>>ppg>>apg>>rpg>>mpg;
    cout<<"Enter the age of player and experience: ";
    cin>>age>>exp;
    cout<<"Enter the team he is playing in: ";
    cin>>team;
    object.setPlayerStats(ppg, apg, rpg, mpg);
    object.setPlayer(age, exp);
    object.setTeam(team);
    Basketball(ppg, apg, rpg, mpg, age, exp, team);
    cout<<object.getPlayersPoints()<<" "<<object.getPlayersAssists()<<" "<<object.getPlayersRebounds()<<" "<<object.getPlayersMinutes()<<" "<<object.getPlayersAge()<<" "<<object.getPlayersExperience()<<" "<<object.getPlayersTeam()<<endl;
    Basketball(age, team);
    cout<<object.getPlayersAge()<<" "<<object.getPlayersTeam()<<endl;
    Basketball(ppg, apg, rpg, mpg, age);
    cout<<object.getPlayersPoints()<<" "<<object.getPlayersAssists()<<" "<<object.getPlayersRebounds()<<" "<<object.getPlayersMinutes()<<" "<<object.getPlayersAge()<<endl;
    Basketball();


}