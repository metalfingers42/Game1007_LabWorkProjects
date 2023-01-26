// Game1007-Lab3-mslodki.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//if
//while
// to randomize number: rand()
//use modulo operator to create random number between x and y
// //5/2=2 remainder 1
// //5%2=1 (the remainder)
// Modulo operator gives the remaindeer after interger division
// review c plus plus reference library
//1. Input Names of players
//a.Player with first name alphabetically is player 1 and goes first
//b.Player with second name alphabetically is player 2 and goes second
//2. AI generates random number between 1 - 100
//3. Player 1 guesses number between 1 - 100
//a.If Player 1 guesses correctly, game ends
//b.If player 1 guesses higher than AI selected number, the hint “lower” is given
//c.If player 1 guesses lower than AI selected number, the hint “higher” is given
//4. Player 2 guesses number between 1 - 100
//a.If Player 2 guesses correctly, game ends
//b.If player 2 guesses higher than AI selected number, the hint “lower” is given
//c.If player 2 guesses lower than AI selected number, the hint “higher” is given
//5. Go back to step 3 until a player guesses correctly, ending the game


int main()
{
    srand(time(NULL));//seed rnd() function with current time

    std::string namePlayer1;
    std::string namePlayer2;
    
    std::cout << "Howdy, welcome to the number guessing game.  Player 1, what is your name?\n";
    std::cin >> namePlayer1;
    std::cout << "Welcome aboard\n" << namePlayer1<< std::endl;


    std::cout << "Player 2, what is your name?\n";
    std::cin >> namePlayer2;
    std::cout << "Welcome aboard\n" << namePlayer2 << std::endl;

    //generate random nmber between 1 and 100 inclusive
    int maxRandnumber = 100;
    int randomNumber = std::rand();//number between 1 and 100 inclusive
    randomNumber = randomNumber % 100+1;
std::cout<<"[Debug] Answer" <<randomNumber<< std::endl;

int i = 0;
while (i < 100);



int whichPlayer = rand() % 2; //either 0 or 1
    int playerGuess = 0;
    bool is; player1Turn = rand() % 2;
isPlayer1Turn = !isPlayer1Turn;
while (true)//the way out of this loop is to guess correctly 
{
    switch (whichPlayer) //switch will jump to different cases based on the value in ()
    {
    case 0:
    {
        std::cout << namePlayer1 << "What is your guess?" << std::endl;
        break;//takes us out of the current scope {}
    }
    {
    case 1:
    {
        std::cout << namePlayer2 << "What is your guess?" << std::endl;

        break;
    }
    default:
        break;
    }
    std::cin >> playerGuess; //takes player guess (Need to define playerguess)

}

//swap player 
    whichPlayer=1-whichPlayer;









    if (playerGuess==randomNumber)
        switch (whichPlayer) //switch will jump to different cases based on the value in ()
        {
        case 0:
        {
            std::cout << namePlayer1 << "You win partner!" << std::endl;
            break;//takes us out of the current scope {}
        }
        {
        case 1:
        {
            std::cout << namePlayer2 << "You win partner!" << std::endl;

            break;
        }
        default:
            break;
        }
        std::cin >> playerGuess; //takes player guess (Need to define playerguess)

        }
    getchar();
    
}



//