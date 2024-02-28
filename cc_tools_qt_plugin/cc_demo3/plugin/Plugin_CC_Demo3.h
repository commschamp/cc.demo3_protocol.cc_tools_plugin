// Generated by commsdsl2tools_qt v6.3.0

#pragma once

#include <QtCore/QObject>
#include <QtCore/QtPlugin>
#include "cc_tools_qt/Plugin.h"
#include "cc_tools_qt/Protocol.h"

namespace cc_tools_qt_plugin
{

namespace cc_demo3
{

namespace plugin
{

class Plugin_CC_Demo3 : public cc_tools_qt::Plugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "cc.Demo3ProtocolPlugin" FILE "Plugin_CC_Demo3.json")
    Q_INTERFACES(cc_tools_qt::Plugin)

public:
    Plugin_CC_Demo3();
    virtual ~Plugin_CC_Demo3();

private:
    cc_tools_qt::ProtocolPtr m_protocol;
    int m_version = 5U;
};

} // namespace plugin

} // namespace cc_demo3

} // namespace cc_tools_qt_plugin