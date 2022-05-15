#include "ProblemManager.h"

void ProblemManager::AddProblem(IProblem* p_problem)
{
	auto iter = std::find(m_vecProblems.begin(), m_vecProblems.end(), p_problem);
	if (iter != m_vecProblems.end()) {
		return;
	}
	m_vecProblems.push_back(p_problem);
}

void ProblemManager::Flush()
{
	for (auto& problem : m_vecProblems) {
		problem->Flush();
	}
}

void ProblemManager::Clear()
{
	for (auto& problem : m_vecProblems) {
		if (problem) {
			delete problem;
		}
		problem = nullptr;
	}

	m_vecProblems.clear();
}
