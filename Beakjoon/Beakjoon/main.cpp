#include <iostream>
#include "../../ProblemManager.h"

//#include "Problem_17478.h"
#include "Problem_2447.h"

/* ---------------------------------------------
    각 문제를 객체로 들고 있고 main에서는 해당하는
    문제만 호출하면 빌드할 수 있도록한다.
    문제 푸는 환경은 크게 관여하지 않도록 해준다.
--------------------------------------------- */

int main()
{
    {
        //ProblemManager::GetI()->AddProblem(nullptr);
        //ProblemManager::GetI()->AddProblem(nullptr);
        ProblemManager::GetI()->AddProblem(new Problem_2447);
    }

    ProblemManager::GetI()->Flush();
    ProblemManager::GetI()->Clear();



    return 0;
}
