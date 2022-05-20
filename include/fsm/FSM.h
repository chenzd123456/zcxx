#ifndef __FSM_H__
#define __FSM_H__

#include "fsm/IState.h"

#include<memory>

namespace zcxx
{
    namespace fsm
    {
        class StateMachine
        {
        };

        class StateMachineBuilder
        {
        public:
            StateMachineBuilder& SetState(std::shared_ptr<IState> state);
            std::shared_ptr<StateMachine> Build();
        };

    }
}

#endif // __FSM_H__