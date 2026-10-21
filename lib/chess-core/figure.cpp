#include <chess/figures.hpp>

bool isSlidingPiece(const ChessFigure& figure) {
  using enum ChessFigureTypes;
  switch (figure.type) {
    case Rook:
      return true;
    case Bishop:
      return true;
    default:
      return false;
  }
}
bool isPromotion(const ChessFigure& figure, const coordinate& end) {}
bool validateMove(const ChessFigure& figure, const coordinate& start,
                  const coordinate& end) {}
