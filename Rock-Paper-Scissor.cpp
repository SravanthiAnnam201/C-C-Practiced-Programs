#include<time.h>
#include <iostream>
#include<stdlib.h>
#define ROCK 1
#define PAPER 2
#define SCISSOR 3
#define PLAYER1_WIN 1
#define PLAYER2_WIN 2
#define DRAW 0
using namespace std;

void print_word(int v)
{
    if(v==ROCK) cout<<"Rock"<<endl;
    else if(v==PAPER) cout<<"Paper"<<endl;
    else if(v==SCISSOR) cout<<"Scissor"<<endl;
}

int rock_paper_scissor(int player1, int player2)
{
    int result;
    if(player1==ROCK && player2==PAPER) result=PLAYER2_WIN;
    else if(player1==ROCK && player2==SCISSOR) result=PLAYER1_WIN;
    else if(player1==PAPER && player2==ROCK) result=PLAYER1_WIN;
    else if(player1==PAPER && player2==SCISSOR) result=PLAYER2_WIN;
    else if(player1==SCISSOR && player2==ROCK) result=PLAYER2_WIN;
    else if(player1==SCISSOR && player2==PAPER) result=PLAYER1_WIN;
    else result=DRAW;
    return result;
}
int get_user_input()
{
    int choice;
    do
    {
        cout<<"1. Rock"<<endl;
        cout<<"2. Paper"<<endl;
        cout<<"3. Scissor"<<endl;
        cout<<"Please Enter a number [1,2,3]:"<<endl;
        cin>>choice;
        if(!(choice>=1 && choice<=3))
        {
            cout<<"Error__Invalid input, should be 1 or 2 or 3"<<endl;
        }
    }
    while(!(choice>=1 && choice <=3));
    return choice;
}

void finalGameWinner(int U, int C)
{
    cout<<"User's Total Score: "<<U<<"\nComputer's Total Score: "<<C<<endl;
    if(U>C) cout<<"Hurray! User won the game";
    else cout<<"\nHurray! Computer won the game"<<endl;
    
}

int main()
{
    int user_score=0;
    int computer_score=0;
    srand(time(NULL));
    int quit=0;
    while(!quit)
    {
        int user_input=get_user_input();
        int computer_choice=rand()%3+1;
        cout<<"computer choice: ";
        print_word(computer_choice);
        cout<<"User choice: ";
        print_word(user_input);
        int result=rock_paper_scissor(user_input,computer_choice);
        if(result==DRAW) cout<<"It is a draw"<<endl;
        else if(result==PLAYER1_WIN) 
        {
            cout<<"User won and Computer lost the round"<<endl;
            user_score++;
        }
        else if (result==PLAYER2_WIN) 
        {
            cout<<"Computer won and User lost the round"<<endl;
            computer_score++;
        }
        int response;
        cout<<"Plese Enter 1 to continue 0 to exit the game."<<endl;
        
        cin>>response;
        if(response==0) 
        {
          finalGameWinner(user_score,computer_score);  
          quit=1;  
        }
        
    }

    return 0;
}