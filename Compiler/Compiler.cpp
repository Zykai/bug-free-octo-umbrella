// Compiler.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//
#include "stdafx.h"
#include <iostream>
#include "Lexer.h"
#include "Parser.h"
#include "IdentifierTree.h"
#include "ExpressionTree.h"


int main(int numberArgs, const char ** arguments){
	std::cout << "Starting Compiler" << std::endl;


	Lexer lexer = Lexer("exprtest.z");
	std::list<Token> testlist = lexer.getTokenList();
	

	Parser parser = Parser();
	parser.setTokenList(&testlist);
	parser.startParsing();

	ExpressionTree * e = parser.parseExpression();
	e->output();

	system("pause"); // FOR TESTING
	return 1; // FOR TESTING
}

