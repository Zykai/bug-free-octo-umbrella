// Compiler.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//
#include "stdafx.h"
#include <iostream>
#include "Lexer.h"
#include "IdentifierTree.h"


int main(int numberArgs, const char ** arguments){

	
	std::cout << "Starting Compiler" << std::endl;
	Lexer lexer = Lexer("main.z");
	std::list<std::list<Token>> testlist = lexer.getTokenList();
	/*
	for (std::list<Token> &l : testlist) {
		for (Token &t : l) {
			std::cout << t.getDescription() << std::endl;
		}
	}
	*/
	/*
	int lineNumber = 0;
	for (; lineNumber < line.length(); lineNumber++) {
		if (line.at(lineNumber) == ' ') continue;
		Token test = lexer.findInteger(line, lineNumber, lineNumber);
		std::cout << test.getDescription() << std::endl;
	}
	*/
	system("pause"); // FOR TESTING
	return 1; // FOR TESTING
}

