#ifndef CHESS_H
#define CHESS_H

enum class ChessFigureTypes { Pawn, Knight, Bishop, Rook, Queen, King };

enum PlayerColours { White, Black };

struct ChessFigure {
  ChessFigureTypes type;
  PlayerColours colour;
};

struct coordinate {
  int x;
  int y;
};

#endif