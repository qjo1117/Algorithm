#pragma once

#include "IProblem.h"
#include <vector>

class ProblemManager
{
public:
	static ProblemManager* GetI() {
		static ProblemManager instance;
		return &instance;
	}

public:
	void AddProblem(IProblem* p_problem);
	void Flush();
	void Clear();

private:
	std::vector<IProblem*> m_vecProblems;
};

