// Generated by commsdsl2tools_qt v7.0.2

#pragma once

#include "cc_tools_qt/ToolsProtocol.h"

namespace cc_tools_qt_plugin
{

namespace cc_demo3
{

namespace plugin
{

class Protocol_CC_Demo3 : public cc_tools_qt::ToolsProtocol
{
    using Base = cc_tools_qt::ToolsProtocol;
public:
    Protocol_CC_Demo3();
    virtual ~Protocol_CC_Demo3();

protected:
    virtual const QString& nameImpl() const override;
};

} // namespace plugin

} // namespace cc_demo3

} // namespace cc_tools_qt_plugin
