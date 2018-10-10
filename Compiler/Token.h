#pragma once
#include <string>

// enumerator for each differen type of token
enum Tokentype {
	includeStatement,
	parentheseOpen,
	parentheseClose,
	curlyBracesOpen,
	curlyBracesClose,
	arithmeticOperator,
	logicalOperator,
	assignOperator,
	identifier,
	semicolon,
	singleLineComment,
	mulitLineComment,
	integerNumber,
	floatNumber,
	errorToken,
	typeName,
	importStmt,
	whileStmt,
	ifToken
};

// Token struct
// represents a token created by the lexer
struct Token {
public:
	Token(Tokentype t, std::string v);
	std::string getValue();
	std::string getTypeString();
	std::string getDescription();
	Tokentype getType();
private:
	Tokentype type;
	std::string value;
};