// Generated by commsdsl2tools_qt v7.1.0

#include "Plugin_CC_Demo3.h"

#include "Protocol_CC_Demo3.h"

namespace cc_tools_qt_plugin
{

namespace cc_demo3
{

namespace plugin
{

Plugin_CC_Demo3::Plugin_CC_Demo3() :
    Base(Type_Protocol)
{
}

Plugin_CC_Demo3::~Plugin_CC_Demo3() = default;

cc_tools_qt::ToolsProtocolPtr Plugin_CC_Demo3::createProtocolImpl()
{
    return cc_tools_qt::ToolsProtocolPtr(new Protocol_CC_Demo3());
}

} // namespace plugin

} // namespace cc_demo3

} // namespace cc_tools_qt_plugin
