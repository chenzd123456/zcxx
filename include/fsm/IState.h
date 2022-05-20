#ifndef __ZCXX_ISTATE_H__
#define __ZCXX_ISTATE_H__

namespace zcxx
{
    namespace fsm
    {
        class IState
        {
        public:
            virtual const char *Name() = 0;
            virtual void OnEnter() = 0;
            virtual void OnExit() = 0;
        };
    }
}

#endif // __ZCXX_ISTATE_H__