// Generated by commsdsl2tools_qt v6.3.4

#include "Connect.h"

#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_demo3/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_demo3
{

namespace message
{

namespace
{

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_demo3::message::ConnectFields<cc_tools_qt_plugin::cc_demo3::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version(false));
    return props;
}

} // namespace

Connect::Connect() = default;
Connect::~Connect() = default;
Connect& Connect::operator=(const Connect&) = default;
Connect& Connect::operator=(Connect&&) = default;

const QVariantList& Connect::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace message

} // namespace cc_demo3

} // namespace cc_tools_qt_plugin
