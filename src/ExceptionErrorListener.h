#pragma once

#include "antlr4-runtime.h"

/*
 * alternative error listener that throw the error message
 */
class ExceptionErrorListener : public antlr4::BaseErrorListener {
public:
    virtual void syntaxError(
            antlr4::Recognizer *recognizer, antlr4::Token * offendingSymbol,
            size_t line, size_t charPositionInLine, const std::string &msg,
            std::exception_ptr e) override {

        e = nullptr;
        std::ostringstream oss;
        oss << "line: " << line << ":" << charPositionInLine << " " << msg;
        error_msg = oss.str();
        throw antlr4::ParseCancellationException(error_msg);
    }

private:
    std::string error_msg;
};

