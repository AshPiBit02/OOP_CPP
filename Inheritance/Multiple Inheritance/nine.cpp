#include<iostream>
#include<string>
using namespace std;
class Player{
    protected:
    string name;
    string sport;
    public:
    Player(string name,string sport)
    {
        this->name=name;
        this->sport=sport;
    }
    void displayPlayerInfo()
    {
        cout<<"Player Name: "<<name<<endl;
        cout<<"Sport Name: "<<sport<<endl;
    }
};
class Coach{
    protected:
    string c_name;
    int exp;
    public:
    Coach(string c_name,int exp)
    {
        this->c_name=c_name;
        this->exp=exp;
    }
    void displayCoachInfo()
    {
        cout<<"Coach Name: "<<c_name<<endl;
        cout<<"Experience: "<<exp<<endl;
    }
};
class Training: public Player{
    protected:
    int t_hrs;
    public:
    Training(string name,string sport,int t_hrs):Player(name,sport)
    {
        this->t_hrs=t_hrs;
    }
    void displayTrainingInfo()
    {
        cout<<"Training Hours: "<<t_hrs<<endl;
    }

};
class Tournament:public Coach
{
    protected:
    int m_won,m_played;
    Tournament(string c_name,int exp,int m_won,int m_played):Coach(c_name,exp)
    {
        this->m_won=m_won;
        this->m_played=m_played;
    }
    void calculateWinRate()
    {
        float rate=(((float)m_won/(float)m_played)*100);
        cout<<"Win Rate: "<<rate<<endl;
    }
};
class TeamPerformance:public Training,public Tournament
{
    public:
    TeamPerformance(string name,string sport,string c_name,int exp,int t_hrs,int m_won,int m_played):Training(name,sport,t_hrs),Tournament(c_name,exp,m_won,m_played)
    {

    }
    void displayFullPerformance()
    {
        displayPlayerInfo();
        displayCoachInfo();
        displayTrainingInfo();
        calculateWinRate();
    }
};
int main()
{
    TeamPerformance h("John","Football","Mr.Lee",15,132,25,28);
    h.displayFullPerformance();
    return 0;
}