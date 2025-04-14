#include<iostream>
#include<ctime>

char GetComputerChoice();
char GetPlayerChoice();
void DetermineWinner(char computer, char player);
void ShowCoice(char choice);    

int main(){
    char player;
    char computer;

    player = GetPlayerChoice();
    std::cout << "You chose: ";
    ShowCoice(player);

    computer = GetComputerChoice();
    std::cout << "Computers choice: ";
    ShowCoice(computer);

    DetermineWinner(player, computer);

return 0;
}

char GetComputerChoice(){
    srand(time(0));
    int num = rand() % 3 + 1;
switch (num)
{
case 1: return 'r';
case 2: return 'p';
case 3: return 's';
}

return 0;
}

char GetPlayerChoice(){
char choice;
do{
std::cout << "Rock-Paper-Scissors Game\n";
std::cout << "**************************\n";
std::cout << "Enter r for rock\n" << "Enter p for paper\n" << "Enter s for scissors\n" << "Enter your choice: ";
std::cin >> choice;

} while(choice != 'r' && choice != 'p' && choice != 's' );
return choice;
}

void DetermineWinner(char computer, char player){
switch (player){
    case 'r':  if(computer == 'r'){
                    std::cout << "It is tie!\n";
                }
                else if(computer == 'p'){
                    std::cout << "You lose!\n";
                }
                else{
                    std::cout << "You won!\n";
                }
                break;
    case 'p':  if(computer == 'p'){
                    std::cout << "It is tie!\n";
                }
                else if(computer == 's'){
                    std::cout << "You lose!\n";
                }
                else{
                    std::cout << "You won!\n";
                }
                break;
    case 's':  if(computer == 's'){
                    std::cout << "It is tie!\n";
                }
                else if(computer == 'r'){
                    std::cout << "You lose!\n";
                }
                else{
                    std::cout << "You won!\n";
                }
                break;
}
}
void ShowCoice(char choice){
switch (choice)
{
case 'r': std::cout << "Rock\n";
    break;
case 'p': std::cout << "Paper\n";
    break;
case 's': std::cout << "Scissors\n";
    break;
}
}
