#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

// Initialize the state of the Tic Tac Toe board.
// Implement and return the initial state of the board.
char intial_state(){

}

// Determine the current player's symbol.
// Implement and return the symbol of the current player ('X' or 'O').
char player(){

}

// Generate all possible actions available on the board.
// Implement and return a set of pairs representing possible actions (1-9)
// Each pair corresponds to an empty cell on the board identified by its row and column indices.
int actions(char board){

}

// Get the resulting state after applying an action.
// Implement and return the resulting state of the board after applying a specific action.
// Takes the current board state and the action to apply as input parameters.
int result(char board, int action){

}

// Determine the winner of the game.
// Implement and return the symbol of the winner ('X', 'O', or ' ') indicating no winner.
// Takes the current board state as input.
char winner(char board){

}

/*
--------------------------------------------------------
The functions above are needed for both AI and Players -
The functions below are used for the AI                -
--------------------------------------------------------
*/

// Calculate the utility value of the current board state.
// Implement and return the utility value of the current board state.
// Returns 1 if 'X' wins, -1 if 'O' wins, and 0 for a draw or ongoing game.
int utility(char board){

}

// Perform the Minimax algorithm to determine the best move for the current player.
// Implement and return the optimal utility value for the current player.
// Takes the current board state as input.
float minimax(char board){
    
}

