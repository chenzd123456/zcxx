#ifndef __ZCXX_IEVENT_H__
#define __ZCXX_IEVENT_H__

namespace zcxx
{
    namespace fsm
    {
        class IEvent
        {
        public:
            const char *What();
        };
    } // namespace fsm
} // namespace zcxx

#endif // __ZCXX_IEVENT_H__