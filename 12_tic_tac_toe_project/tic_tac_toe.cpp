#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

// I just print the board here
void printBoard(const array<char, 9>& b) {
    cout << "\n";
    cout << " " << b[0] << " | " << b[1] << " | " << b[2] << "\n";
    cout << "---+---+---\n";
    cout << " " << b[3] << " | " << b[4] << " | " << b[5] << "\n";
    cout << "---+---+---\n";
    cout << " " << b[6] << " | " << b[7] << " | " << b[8] << "\n";
    cout << "\n";
}

// checking if move is ok
bool isValidMove(const array<char, 9>& b, int pos) {
    if (pos < 1 || pos > 9) return false;
    return b[pos - 1] == ' ';
}

// checking if someone won
bool checkWin(const array<char, 9>& b, char p) {
    // I hope I didn't mess these up
    int winLines[8][3] = {
        {0,1,2}, {3,4,5}, {6,7,8},
        {0,3,6}, {1,4,7}, {2,5,8},
        {0,4,8}, {2,4,6}
    };

    for (int i = 0; i < 8; i++) {
        if (b[winLines[i][0]] == p &&
            b[winLines[i][1]] == p &&
            b[winLines[i][2]] == p) {
            return true;
        }
    }

    return false;
}

// checking if no more moves
bool checkDraw(const array<char, 9>& b) {
    for (char c : b) {
        if (c == ' ') return false;
    }
    return true;
}

// computer move (kinda simple)
int computerMove(array<char, 9> b, char comp, char player) {
    int winLines[8][3] = {
        {0,1,2}, {3,4,5}, {6,7,8},
        {0,3,6}, {1,4,7}, {2,5,8},
        {0,4,8}, {2,4,6}
    };

    // try to win
    for (int i = 0; i < 8; i++) {
        int compCount = 0;
        int emptyPos = -1;

        for (int j = 0; j < 3; j++) {
            int idx = winLines[i][j];
            if (b[idx] == comp) compCount++;
            else if (b[idx] == ' ') emptyPos = idx;
        }

        if (compCount == 2 && emptyPos != -1) {
            return emptyPos + 1;
        }
    }

    // try to block
    for (int i = 0; i < 8; i++) {
        int playerCount = 0;
        int emptyPos = -1;

        for (int j = 0; j < 3; j++) {
            int idx = winLines[i][j];
            if (b[idx] == player) playerCount++;
            else if (b[idx] == ' ') emptyPos = idx;
        }

        if (playerCount == 2 && emptyPos != -1) {
            return emptyPos + 1;
        }
    }

    // random move (hope it's free)
    int pos = rand() % 9 + 1;
    while (!isValidMove(b, pos)) {
        pos = rand() % 9 + 1;
    }

    return pos;
}

// getting user move
int getPlayerMove(const array<char, 9>& b) {
    int move;

    while (true) {
        cout << "Enter a cell (1-9): ";

        if (!(cin >> move)) {
            cout << "Wrong input, try again.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (!isValidMove(b, move)) {
            cout << "This move doesn't work.\n";
            continue;
        }

        return move;
    }
}

// main game function
void playGame(bool vsComputer) {
    array<char, 9> board;
    board.fill(' ');

    char current = 'X';

    cout << "Tic-Tac-Toe\n";
    cout << "Cells:\n";
    cout << " 1 | 2 | 3\n";
    cout << "---+---+---\n";
    cout << " 4 | 5 | 6\n";
    cout << "---+---+---\n";
    cout << " 7 | 8 | 9\n";

    while (true) {
        printBoard(board);

        int move;

        if (vsComputer && current == 'O') {
            move = computerMove(board, 'O', 'X');
            cout << "Computer picked: " << move << "\n";
        } else {
            move = getPlayerMove(board);
        }

        board[move - 1] = current;

        if (checkWin(board, current)) {
            printBoard(board);
            cout << "Player " << current << " wins!\n";
            break;
        }

        if (checkDraw(board)) {
            printBoard(board);
            cout << "Draw!\n";
            break;
        }

        // switching players
        if (current == 'X') current = 'O';
        else current = 'X';
    }
}

int main() {
    srand((unsigned)time(0));

    while (true) {
        cout << "Choose mode:\n";
        cout << "1. Player vs Player\n";
        cout << "2. Player vs Computer\n";
        cout << "0. Exit\n";
        cout << "Your choice: ";

        int choice;
        if (!(cin >> choice)) {
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (choice == 0) {
            cout << "Goodbye!\n";
            break;
        }

        if (choice == 1) {
            playGame(false);
        } else if (choice == 2) {
            playGame(true);
        } else {
            cout << "Not a valid option.\n";
        }

        cout << "Play again? (y/n): ";
        char again;
        cin >> again;

        if (tolower(again) != 'y') {
            cout << "Thanks for playing!\n";
            break;
        }
    }

    return 0;
}
