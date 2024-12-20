#ifndef  BOARD_H
#define  BOARD_H
#include <stddef.h> // Dla size_t

// Struktura planszy 
typedef struct Board {
    int** P;       // Tablica 2D (Pola) [rows][columns]
    size_t rows;      // Liczba wierszy
    size_t cols;      // Liczba kolumn
} board;

//Funkcja alokująca pamiec dla planszy
//@param rows - liczba wierszy
//@param cols - liczba kolumn
board* make_board(size_t rows, size_t cols);

//Funkcja zwalniająca pamiec zaalokowaną dla planszy
//@param Board - wskaźnik na plansze
void free_board(board* Board);

//Funkcja pokazująca plansze
//@param Board - wskaźnik na plansze
void print_board(board* Board);

//Funkcja sprawdzająca poprawność planszy
//@param Board - wskaźnik na plansze
void board_assert(board* Board);

#endif  // BOARD_H
