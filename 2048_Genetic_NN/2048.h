#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#include "commonFuncts.h"

#define BOARDSIZE 4

// GameSquare stucture keeps track of value, whether or not it has merged, and
// whether or not it has moved. 
typedef struct GameSquareTag
{
    int value;
    bool merged;
    bool moved;
} GameSquare;

// Game Square constructor.
void InitGameSquare(GameSquare *theSquare);

// Functions for moving game squares. 
void MergeGameSquare(GameSquare *theSquare);
void MoveSquare(GameSquare *theSquare, int value, bool merged);
void RemoveMovement(GameSquare *theSquare);

typedef struct GameBoardTag
{
    GameSquare** board;
    int score;
} GameBoard;

// Board constructor and reinitializer.  
void InitBoard(GameBoard *theBoard);
void ReInitBoard(GameBoard *theBoard);

// Board deconstructor.
void DeconBoard(GameBoard *theBoard);


void SetSquareValue(GameBoard *theBoard, int value, int x, int y);
void SetRandSquareValue(GameBoard *theBoard);

// Board movement functions.
void MoveBoard(GameBoard *theBoard, int theDir);

void MoveBoardLeft(GameBoard *theBoard);
void MoveBoardRight(GameBoard *theBoard);
void MoveBoardUp(GameBoard *theBoard);
void MoveBoardDown(GameBoard *theBoard);

void MoveLeft(GameBoard *theBoard, int x, int y);
void MoveRight(GameBoard *theBoard, int x, int y);
void MoveUp(GameBoard *theBoard, int x, int y);
void MoveDown(GameBoard *theBoard, int x, int y);

// Check the state of the board. 
bool CheckForLoss(GameBoard *theBoard);
bool CheckForMove(GameBoard *theBoard);

// Clear the movement from all board squares. 
void ClearMovement(GameBoard *theBoard);

// Board printing and output functions... 
void PrintBoard(GameBoard* theBoard);
double** getBoardOutput(GameBoard* theBoard);
int getHighestValue(GameBoard* theBoard);
void freeBoardOutput(double** output);
