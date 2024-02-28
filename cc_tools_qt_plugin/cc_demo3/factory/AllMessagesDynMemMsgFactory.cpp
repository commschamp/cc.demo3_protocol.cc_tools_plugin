// Generated by commsdsl2tools_qt v6.3.0

#include "cc_demo3/MsgId.h"
#include "cc_tools_qt_plugin/cc_demo3/factory/AllMessagesDynMemMsgFactory.h"
#include "cc_tools_qt_plugin/cc_demo3/input/AllMessages.h"

namespace cc_tools_qt_plugin
{

namespace cc_demo3
{

namespace factory
{

AllMessagesDynMemMsgFactory::MsgPtr AllMessagesDynMemMsgFactory::createMsg(MsgIdParamType id, unsigned idx, CreateFailureReason* reason) const
{
    auto updateReasonFunc =
        [reason](CreateFailureReason val)
        {
            if (reason != nullptr) {
                *reason = val;
            }
        };

    if (1U <= idx) {
        updateReasonFunc(CreateFailureReason::InvalidId);
        return MsgPtr();
    }

    updateReasonFunc(CreateFailureReason::None);
    switch (id) {
        case ::cc_demo3::MsgId_Connect: return MsgPtr(new cc_tools_qt_plugin::cc_demo3::message::Connect);
        case ::cc_demo3::MsgId_Msg1: return MsgPtr(new cc_tools_qt_plugin::cc_demo3::message::Msg1);
        default: break;
    }

    updateReasonFunc(CreateFailureReason::InvalidId);
    return MsgPtr();
}

std::size_t AllMessagesDynMemMsgFactory::msgCount(MsgIdParamType id) const
{
    switch (id)
    {
        case ::cc_demo3::MsgId_Connect: return 1U;
        case ::cc_demo3::MsgId_Msg1: return 1U;
        default: break;
    }

    return 0U;
}

} // namespace factory

} // namespace cc_demo3

} // namespace cc_tools_qt_plugin
