/*Yash Sarnaik
221-D3
Inclusion Exclusion */
#include <iostream>
using namespace std;
class SportsTwoGames{
    int n1,n2,n3;
    public:
    void setInfo(){
        cout <<"\nEnter Sports Data of Two Games"<<endl;
        cout <<"\nEnter how many number of players interested in Sports:"<<endl;
        cout <<"\nIn Cricket:";
        cin >>n1;
        cout <<"\nIn Kabaddi:";
        cin >>n2;
        cout <<"\nIn Both:";
        cin >>n3;
    }
    void getTotalPlayers(){
        cout <<"\nTotal Number of Players:"<<n1+n2-n3<<endl;
    }
};
class SportsThreeGames{
    int n1,n2,n3,n4,n5,n6,n7;
    public:
    void setInfo(){
        cout<<"\nEnter Sports Data of Three Games:"<<endl;
        cout<<"\nEnter how many number of players interested in Sports:"<<endl;
        cout<<"\nIn Cricket:";
        cin>>n1;
        cout<<"\nIn Hockey:";
        cin>>n2;
        cout<<"\nIn Kabaddi:";
        cin>>n3;
        cout<<"\nIn Cricket and Hockey:";
        cin>>n4;
        cout<<"\nIn Cricket and Kabaddi:";
        cin>>n5;
        cout<<"\nIn Kabaddi and Hockey:";
        cin>>n6;
        cout<<"\nIn All:";
        cin>>n7;
    }
    void getTotalPlayers(){
        cout <<"\nTotal Number of Players:"<<n1+n2+n3-n4-n5-n6+n7<<endl;
    }
};

int main(){

    SportsTwoGames s2;
    s2.setInfo();
    s2.getTotalPlayers();
    SportsThreeGames s3;
    s3.setInfo();
    s3.getTotalPlayers();
}
