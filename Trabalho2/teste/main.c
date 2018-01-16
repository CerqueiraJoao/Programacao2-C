#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>


using namespace std;

int player=0;

void display(char [][3]);
char arraytest[3][3] = {{'*','*','*'}, {'*','*','*'}, {'*','*','*'}};
void win(char [][3], int &);
void move(char [][3], int);
void getplayer(int &);

int main() {

    int winner;
    do {
    
    display(arraytest);
    getplayer(player);
    move(arraytest, player);
    win(arraytest, winner);

    }//end of do statement
    while(winner != 1);
    cout << "Player has won the game!!" << endl;
    return 0;
}

void display(char board[][3]) {
    for (int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout << board[i][j];
            cout << "  ";
        }
        cout << endl;
        if(i!=2) {
            cout << "-------------------------" << endl;
        }
    }
}

void win(char board[][3], int &winner) {

    int n;
    for(n=0;n<3;n++) {
        if(board[n][0]==board[n][1] && board[n][0]==board[n][2]) {
            if(board[n][0]=='O' || board[n][0]=='X') {
                winner=1;
            }
        }
    }
    for(n=0;n<3;n++) {
        if(board[0][n]==board[1][n]&&board[0][n]==board[2][n]) {
            if(board[0][n]=='O' || board[0][n]=='X') {
                winner=1;
            }
        }
    }
    if(board[0][0]==board[1][1]&&board[0][0]==board[2][2]) {
        if(board[0][0]=='O' || board[0][0]=='X') {
            winner=1;
        }
    }
    if(board[0][2]==board[1][1]&&board[1][1]==board[2][2]) {

        if(board[0][2]=='O' || board[0][2]=='X') {
            winner=1;
        }
    }
    else {
        winner=0;
    }
}

void move(char board[][3], int player) {
    int x,y, input;
    cout << "Please enter the row number for the place you wish to mark: " << endl;
    cin >> x;
    cout << "Please enter the column number for the place you wish to mark" << endl;
    cin >> y;

    if(player == 1) {
        board[x][y]='X';
    }
    else {
        board[x][y]='O';
    }

}

void getplayer(int &previous) {
    //previous will be the number of the previous player
    switch(previous) {

    case 0: if(previous == 0) {
        previous = 1;
    }

    case 1: if(previous == 1) {
        previous++;
    }

    case 2: if(previous==2) {
        previous--;
        }
    }
}