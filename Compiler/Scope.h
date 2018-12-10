#pragma once

#include <list>
#include <map>
#include "VariableTree.h"

class Scope {
public:
	Scope * topScope;
	std::map<std::string, std::pair<DataType, int>* > variables;
	std::list<Scope* > subScopes;
	std::pair<DataType, int> * getVariable(std::string name);
};