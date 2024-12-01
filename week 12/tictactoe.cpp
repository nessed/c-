#include <iostream>
using namespace std;

// Function to display the board
void displayBoard(const char* board) {
    cout << "\n";
    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 3; ++col) {
            cout << *(board + row * 3 + col); // Pointer arithmetic to access elements
            if (col < 2) cout << " | ";
        }
        cout << "\n";
        if (row < 2) cout << "---------\n"; // Print horizontal separator
    }
    cout << "\n";
}

// Function to make a move on the board
bool makeMove(char* board, int row, int column, char playerSymbol) {
    if (row < 0 || row >= 3 || column < 0 || column >= 3) {
        cout << "Invalid move. Row and column must be between 1 and 3.\n";
        return false;
    }

    char* cell = board + row * 3 + column; // Pointer arithmetic to find the cell
    if (*cell != ' ') {
        cout << "Cell already occupied. Choose a different move.\n";
        return false;
    }

    *cell = playerSymbol; // Update the board
    return true;
}

// Function to check if a player has won
bool checkWin(const char* board) {
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if (*(board + i * 3) == *(board + i * 3 + 1) && *(board + i * 3 + 1) == *(board + i * 3 + 2) && *(board + i * 3) != ' ')
            return true; // Row match
        if (*(board + i) == *(board + i + 3) && *(board + i + 3) == *(board + i + 6) && *(board + i) != ' ')
            return true; // Column match
    }

    // Check diagonals
    if (*(board) == *(board + 4) && *(board + 4) == *(board + 8) && *(board) != ' ')
        return true; // Top-left to bottom-right diagonal
    if (*(board + 2) == *(board + 4) && *(board + 4) == *(board + 6) && *(board + 2) != ' ')
        return true; // Top-right to bottom-left diagonal

    return false;
}

// Function to check if the game is a draw
bool checkDraw(const char* board) {
    for (int i = 0; i < 9; ++i) {
        if (*(board + i) == ' ') return false; // If there's an empty space, it's not a draw
    }
    return true; // All spaces filled and no winner
}

int main() {
    char board[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' }; // Initialize the board
    char currentPlayer = 'X'; // Start with player 'X'
    bool gameWon = false, gameDraw = false;

    cout << "Welcome to Tic Tac Toe!\n";

    while (!gameWon && !gameDraw) {
        displayBoard(board);

        int row, column;
        cout << "Player " << currentPlayer << ", enter your move (row and column, 1-based): ";
        cin >> row >> column;

        // Check for invalid input
        if (cin.fail()) {
            cout << "Invalid input! Please enter numbers only.\n";
            cin.clear();        // Clear the error flag
            cin.ignore(10000, '\n'); // Discard invalid input
            continue;
        }

        // Adjust for 0-based indexing
        if (makeMove(board, row - 1, column - 1, currentPlayer)) {
            gameWon = checkWin(board);
            gameDraw = !gameWon && checkDraw(board);

            if (gameWon) {
                displayBoard(board);
                cout << "Player " << currentPlayer << " wins!\n";
            } else if (gameDraw) {
                displayBoard(board);
                cout << "It's a draw!\n";
            } else {
                currentPlayer = (currentPlayer == 'X') ? 'O' : 'X'; // Switch players
            }
        }
    }

    return 0;
}
