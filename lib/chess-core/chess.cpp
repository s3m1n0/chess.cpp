#include <chess/chess.hpp>
#include <format>

std::string getHello(std::string_view name) {
  return std::format("Hello, {}!", name);
}