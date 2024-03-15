#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int Number_Of_Dice;
    int Gamer1=0,Gamer2=0;
    cout<<"Enter how many times you roll the dice: ";
    cin>>Number_Of_Dice;

    // for randomness
    srand(time(NULL));
    
    for(int i=0;i<Number_Of_Dice;i++)
    {
        int z1 = rand()%6+1;
        int z2 = rand()%6+1;

        cout<<z1<<"\t"<<z2<<endl;
        
        if(z1>z2)
        {
            cout<<"Player1 earned one point. "<<endl;
            Gamer1++;
        }
        else if(z2>z1)
        {
            cout<<"Player2 earned one point. "<<endl;
            Gamer2++;
        }
        else
        {
            cout<<"Both players scored the same dice point to draw."<<endl;
        }
    }
    if(Gamer1>Gamer2)
    {
        cout<<"Player1 wins with "<<Gamer1<<" points."<<endl;
    }
    else if(Gamer2>Gamer1)
    {
        cout<<"Player1 wins with "<<Gamer2<<" points."<<endl;
    }
    else
    {
        cout<<"With "<<Gamer1<<" points, both players scored equally"<<endl;
    }


    return 0;
}
