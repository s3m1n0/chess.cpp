#ifndef FIGURES_H
#define FIGURES_H

enum class ChessFigureTypes { Pawn, Knight, Bishop, Rook, Queen, King };

enum PlayerColours { White, Black };

struct ChessFigure {
  ChessFigureTypes type;
  PlayerColours colour;
};

bool isSlidingPiece(const ChessFigure& figure);
bool isPromotion(const ChessFigure& figure, const int end);
bool validateMove(const ChessFigure& figure, const int start, const int end);
#endif