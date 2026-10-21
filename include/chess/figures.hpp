#ifndef FIGURES_H
#define FIGURES_H

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

bool validateMove(const ChessFigure& figure, const coordinate& start,
                  const coordinate& end);
#endif