// Generated by commsdsl2tools_qt v6.3.4

#pragma once

#include "cc_demo3/frame/Frame.h"
#include "cc_tools_qt_plugin/cc_demo3/Message.h"
#include "cc_tools_qt_plugin/cc_demo3/Version.h"
#include "cc_tools_qt_plugin/cc_demo3/input/AllMessages.h"
#include "cc_tools_qt_plugin/cc_demo3/options/MsgFactoryFrameOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_demo3
{

namespace frame
{

using Frame =
    ::cc_demo3::frame::Frame<
        cc_tools_qt_plugin::cc_demo3::Message,
        cc_tools_qt_plugin::cc_demo3::input::AllMessages,
        cc_tools_qt_plugin::cc_demo3::options::MsgFactoryFrameOptions
    >;

} // namespace frame

} // namespace cc_demo3

} // namespace cc_tools_qt_plugin
