// Generated by commsdsl2tools_qt v6.3.2

/// @file
/// @brief Contains definition of the options for framing which force usage of message factory.

#pragma once

#include "cc_tools_qt_plugin/cc_demo3/factory/AllMessagesDynMemMsgFactory.h"
#include "cc_tools_qt_plugin/cc_demo3/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_demo3
{

namespace options
{

struct MsgFactoryFrameOptions : public cc_tools_qt_plugin::cc_demo3::options::DefaultOptions
{
    template <typename TInterface, typename TAllMessages, typename... TOptions>
    using MsgFactory = cc_tools_qt_plugin::cc_demo3::factory::AllMessagesDynMemMsgFactory;

    struct frame : public cc_tools_qt_plugin::cc_demo3::options::DefaultOptions::frame
    {
        struct FrameLayers : public cc_tools_qt_plugin::cc_demo3::options::DefaultOptions::frame::FrameLayers
        {
            using Id =
                std::tuple<
                    comms::option::app::MsgFactoryTempl<MsgFactory>,
                    typename cc_tools_qt_plugin::cc_demo3::options::DefaultOptions::frame::FrameLayers::Id
                >;
        }; // struct FrameLayers
    }; // struct frame
};

} // namespace options

} // namespace cc_demo3

} // namespace cc_tools_qt_plugin
