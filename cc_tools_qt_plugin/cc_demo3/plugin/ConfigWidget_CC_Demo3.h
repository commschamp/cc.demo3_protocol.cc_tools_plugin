// Generated by commsdsl2tools_qt v6.3.2

#pragma once

#include <functional>
#include <QtWidgets/QWidget>

namespace cc_tools_qt_plugin
{

namespace cc_demo3
{

namespace plugin
{

class ConfigWidget_CC_Demo3 : public QWidget
{
    Q_OBJECT
public:
    using VersionUpdateCb = std::function<void (int)>;

    explicit ConfigWidget_CC_Demo3(int version);

    template <typename TFunc>
    void setVersionUpdateCb(TFunc&& func)
    {
        m_versionUpdateCb = std::forward<TFunc>(func);
    }

private slots:
    void versionChanged(int value);

private:
    VersionUpdateCb m_versionUpdateCb;};

} // namespace plugin

} // namespace cc_demo3

} // namespace cc_tools_qt_plugin
