#ifndef FIGURES_H
#define FIGURES_H

enum class ChessFigureTypes { Pawn, Knight, Bishop, Rook, Queen, King };

enum PlayerColours { White, Black };

struct ChessFigure {
  ChessFigureTypes type;
  PlayerColours colour;
};

bool moveFigure(const ChessFigure& figure, const int start, const int end);
bool moveSlider(const ChessFigure& figure, const int start, const int end);
bool moveLeaper(const ChessFigure& figure, const int start, const int end);
bool movePawn(const ChessFigure& figure, const int start, const int end);

#endif