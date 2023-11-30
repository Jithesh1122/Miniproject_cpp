#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main()
{
    int random,a,i=0;
    srand(time(NULL));
    
    system("cls");

    jump:
    while(i>=0)
    {
    
    random=rand()%3+1;
    cout<<"Press 1 for ROCK\nPress 2 for PAPER\nPress 3 for SCISSOR"<<endl;
    cout<<"Enter your choice:";
    cin>>a;
    
    if(random==a)
    {
      cout<<"IT'S A TIE\nTRY AGAIN"<<endl;
      
      goto jump;
    }

    else if(random==1 && a==2)
    {
        cout<<"YOU WON"<<endl;
        cout<<"YOUR CHOICE WAS PAPER"<<endl;
        cout<<" OPPONENT CHOSE ROCK"<<endl;
        break;
    }

    else if(random==2 && a==3)
    {
        cout<<"YOU WON"<<endl;
        cout<<"YOUR CHOICE WAS SCISSOR"<<endl;
        cout<<"OPPONENT CHOSE PAPER"<<endl;
        break;
    }

    else if(random==3 && a==1)
    {
        cout<<"YOU WON"<<endl;
        cout<<"YOUR CHOICE WAS STONE"<<endl;
        cout<<"OPPONENT CHOSE SCISSOR"<<endl;
        break;
    }

    else if(random==1 && a==3)
    {
        cout<<"YOU LOST"<<endl;
        cout<<"YOUR CHOICE WAS SCISSOR"<<endl;
        cout<<"OPPONENT CHOSE ROCK"<<endl;
        break;
    }

    else if(random==2 && a==1)
    {
        cout<<"YOU LOST"<<endl;
        cout<<"YOUR CHOICE WAS ROCK"<<endl;
        cout<<"OPPONENT CHOSE PAPER"<<endl;
        break;
    }

    else if(random==3 && a==2)
    {
        cout<<"YOU LOST"<<endl;
        cout<<"YOUR CHOICE WAS PAPER"<<endl;
        cout<<"OPPONENT CHOSE SCISSOR"<<endl;
        break;
    }
    
    }
}