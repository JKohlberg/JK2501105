//
//  main.cpp
//  Black Jack v2
//
//  Created by JuLio on 6/7/14.
//  Copyright (c) 2014 JuLio. All rights reserved.
//
//  Black Jack v2

#include <cstdlib> //Random function srand
#include <iostream> //Standard input/output
#include <fstream> //file input/output
#include <ctime> //time for random and program
#include <iomanip> //Formatting
#include <cmath> //Math Functions

using namespace std;


//Funtion Prototypes

//Input the winner output

int winner1 (int player_1st_total, int bet)
{
    int winner;
    if (player_1st_total <= 21) {
        cout<<"You Win "<< bet*2.5 <<" $" <<endl;
    }
    else
        cout<<"You Lose =( ""you have "<< (bet-bet)<<" $"<<endl;
    return winner;
}

int winner2 (int player_2nd_total, int bet)
{
    int winner;
    if (player_2nd_total <= 21) {
        cout<<"You Win "<< bet*2.5 <<" $" <<endl;
    }
    else
        cout<<"You Lose =( ""you have "<< (bet-bet)<<" $"<<endl;
    return winner;
}
int winner3 (int player_3th_total, int bet)
{
    int winner;
    if (player_3th_total <= 21) {
        cout<<"You Win "<< bet*2.5 <<" $" <<endl;
    }
    else
        cout<<"You Lose =( "<<"you have "<< (bet-bet)<<" $"<<endl;
    return winner;
}


int main(int argc, char** argv)
{
    
    
    //Declare variables
    
    //Random Number
    
    srand((int)time(0));
    
    //Input the Bet/wager
    
    float bet;
    
    //Input Player Cards
    
    int player_card1 = rand() % 11 + 1;
    int player_card2 = rand() % 11 + 1;
    int player_card3 = rand() % 11 + 1;
    int player_card4 = rand() % 11 + 1;
    
    //Input Player Total Card Values
    
    int player_1st_total = player_card1 + player_card2;
    int player_2nd_total = player_card1 + player_card2 + player_card3;
    int player_3th_total = player_card1 + player_card2 + player_card3 + player_card4;
    
    //Loop the Game
    
    char choice;
    do
    {
        //Welcome to the game
        
        cout<<"************************* Black Jack v2 *************************"<<endl;
        cout<<"Welcome! Please place your bet: $ ";
        cin >>bet;
        
        while(cin.fail())
        {
            cout << "Invalid Entry" <<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max());
            cin >> bet;
        }
        cout << "Entered: " << bet <<endl;
        
        cout << "The dealer will now give you your cards..."<<endl;
        cout << "You got "<<endl;
        
        
        switch (player_card1)
        {
            case 1:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   A  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 2:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   2  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 3:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   3  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 4:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   4  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 5:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   5  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 6:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   6  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 7:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   7  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 8:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   8  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 9:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   9  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 10:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   10 |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 11:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   J  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 12:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   Q  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 13:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   K  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
        }
        
        switch (player_card2)
        {
            case 1:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   A  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 2:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   2  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 3:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   3  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 4:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   4  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 5:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   5  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 6:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   6  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 7:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   7  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 8:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   8  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 9:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   9  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 10:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   10 |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 11:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   J  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 12:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   Q  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 13:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   K  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
        }
        
        //Output Blackjack
        
        if ((player_card1 == 1) && (player_card2 > 10))
        {
            cout << "That's a Blackjack! You Win $ " << bet*2.5 << "!!" << endl;
            return 0;
        }
        if ((player_card1 > 10) && (player_card2 == 1))
        {
            cout << "That's a Blackjack! You Win $ " << bet*2.5 << "!!" << endl;
            return 0;
        }

        cout<<"You want another card? Y/N ";
        cin>>choice;
        
        if (choice == 'Y' || choice == 'y')
        {
            cout << "You got a "<<endl;
        
        switch (player_card3)
        {
            case 1:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   A  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 2:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   2  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 3:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   3  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 4:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   4  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 5:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   5  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 6:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   6  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 7:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   7  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 8:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   8  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 9:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   9  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 10:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   10 |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 11:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   J  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 12:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   Q  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
            case 13:
                cout<<"-------\n";
                cout<<"|      |\n";
                cout<<"|   K  |\n";
                cout<<"|      |\n";
                cout<<"-------\n";
                break;
        }
        
        cout<<"You have "<<(player_2nd_total)<<endl;
        }

        
        if (choice == 'n' || choice == 'N')
        {
            cout << "You have a total of "<<(player_1st_total)<<endl;
            return winner1(player_1st_total, bet);
        }
        if (player_2nd_total > 21)
        {
            return winner2(player_2nd_total, bet);
        }
        cout<<"You want another card? Y/N ";
        cin>>choice;
        
        if (choice == 'Y' || choice == 'y')
        {
            cout << "You got a "<<endl;
            
            switch (player_card3)
            {
                case 1:
                    cout<<"-------\n";
                    cout<<"|      |\n";
                    cout<<"|   A  |\n";
                    cout<<"|      |\n";
                    cout<<"-------\n";
                    break;
                case 2:
                    cout<<"-------\n";
                    cout<<"|      |\n";
                    cout<<"|   2  |\n";
                    cout<<"|      |\n";
                    cout<<"-------\n";
                    break;
                case 3:
                    cout<<"-------\n";
                    cout<<"|      |\n";
                    cout<<"|   3  |\n";
                    cout<<"|      |\n";
                    cout<<"-------\n";
                    break;
                case 4:
                    cout<<"-------\n";
                    cout<<"|      |\n";
                    cout<<"|   4  |\n";
                    cout<<"|      |\n";
                    cout<<"-------\n";
                    break;
                case 5:
                    cout<<"-------\n";
                    cout<<"|      |\n";
                    cout<<"|   5  |\n";
                    cout<<"|      |\n";
                    cout<<"-------\n";
                    break;
                case 6:
                    cout<<"-------\n";
                    cout<<"|      |\n";
                    cout<<"|   6  |\n";
                    cout<<"|      |\n";
                    cout<<"-------\n";
                    break;
                case 7:
                    cout<<"-------\n";
                    cout<<"|      |\n";
                    cout<<"|   7  |\n";
                    cout<<"|      |\n";
                    cout<<"-------\n";
                    break;
                case 8:
                    cout<<"-------\n";
                    cout<<"|      |\n";
                    cout<<"|   8  |\n";
                    cout<<"|      |\n";
                    cout<<"-------\n";
                    break;
                case 9:
                    cout<<"-------\n";
                    cout<<"|      |\n";
                    cout<<"|   9  |\n";
                    cout<<"|      |\n";
                    cout<<"-------\n";
                    break;
                case 10:
                    cout<<"-------\n";
                    cout<<"|      |\n";
                    cout<<"|   10 |\n";
                    cout<<"|      |\n";
                    cout<<"-------\n";
                    break;
                case 11:
                    cout<<"-------\n";
                    cout<<"|      |\n";
                    cout<<"|   J  |\n";
                    cout<<"|      |\n";
                    cout<<"-------\n";
                    break;
                case 12:
                    cout<<"-------\n";
                    cout<<"|      |\n";
                    cout<<"|   Q  |\n";
                    cout<<"|      |\n";
                    cout<<"-------\n";
                    break;
                case 13:
                    cout<<"-------\n";
                    cout<<"|      |\n";
                    cout<<"|   K  |\n";
                    cout<<"|      |\n";
                    cout<<"-------\n";
                    break;
            }
            cout<<"You have "<<(player_3th_total)<<endl;
            return winner3(player_3th_total, bet);
        }
        
        if (choice == 'n' || choice == 'N')
        {
            cout << "You have a total of "<<(player_2nd_total)<<endl;
            return winner2(player_2nd_total, bet);
        }
        if (player_3th_total > 21)
        {
            return winner3(player_3th_total, bet);
        }

        
        
        
        
        
        
            cout << "You want to repeat calculations?";
            cout << "Y / N";
            cin >> choice;
        }
        while (choice == 'Y' || choice == 'y');
    }


