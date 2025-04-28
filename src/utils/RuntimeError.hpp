#pragma once

#include <stdexcept>
#include "../tokenizer/Token.hpp"

class RuntimeError : public std::runtime_error {
  public:
    const Token& token;
    RuntimeError(const Token& token, const std::string& message);
};
