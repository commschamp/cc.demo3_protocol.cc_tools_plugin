// Generated by commsdsl2tools_qt v6.3.4

#include "MsgId.h"

#include "cc_demo3/field/MsgId.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_demo3/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_demo3
{

namespace field
{

QVariantMap createProps_msgId(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo3::field::MsgId<cc_tools_qt_plugin::cc_demo3::options::DefaultOptions>;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add("Connect", 1)
            .add("Msg1", 2)
            .asMap();
}

} // namespace field

} // namespace cc_demo3

} // namespace cc_tools_qt_plugin
