// Generated by commsdsl2tools_qt v6.3.0

#include "Message.h"

#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_demo3/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_demo3
{

namespace
{

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo3::MessageFields::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version(true));
    return props;
}

} // namespace 

const QVariantList& Message::extraTransportFieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace cc_demo3

} // namespace cc_tools_qt_plugin
