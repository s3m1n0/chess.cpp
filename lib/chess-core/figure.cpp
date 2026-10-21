#include <chess/figures.hpp>

bool moveFigure(const ChessFigure& figure, const int start, const int end) {
  using enum ChessFigureTypes;
  switch (figure.type) {
    case Rook:
    case Bishop:
      return moveSlider(figure, start, end);
    case King:
    case Knight:
      return moveLeaper(figure, start, end);
    case Pawn:
      return movePawn(figure, start, end);
    default:
      return false;
  }
}
bool moveSlider(const ChessFigure& figure, const int start, const int end);
bool moveLeaper(const ChessFigure& figure, const int start, const int end);
bool movePawn(const ChessFigure& figure, const int start, const int end);
