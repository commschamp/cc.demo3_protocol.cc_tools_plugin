// Generated by commsdsl2tools_qt v6.3.4

#include "Protocol_CC_Demo3.h"

#include <cassert>
#include "cc_tools_qt/ProtocolBase.h"
#include "cc_tools_qt_plugin/cc_demo3/frame/Frame.h"
#include "cc_tools_qt_plugin/cc_demo3/frame/FrameTransportMessage.h"

namespace cc_tools_qt_plugin
{

namespace cc_demo3
{

namespace plugin
{

class Protocol_CC_Demo3Impl : public
    cc_tools_qt::ProtocolBase<
        cc_tools_qt_plugin::cc_demo3::frame::Frame,
        cc_tools_qt_plugin::cc_demo3::frame::FrameTransportMessage
    >
{
    using Base =
        cc_tools_qt::ProtocolBase<
            cc_tools_qt_plugin::cc_demo3::frame::Frame,
            cc_tools_qt_plugin::cc_demo3::frame::FrameTransportMessage
        >;
public:
    friend class cc_tools_qt_plugin::cc_demo3::plugin::Protocol_CC_Demo3;

    Protocol_CC_Demo3Impl() = default;
    virtual ~Protocol_CC_Demo3Impl() = default;

    int getVersion() const
    {
        return m_version;
    }

    void setVersion(int value)
    {
        m_version = value;
    }

protected:
    virtual const QString& nameImpl() const override
    {
        static const QString Str("CC Demo3");
        return Str;
    }

    virtual MessagesList createAllMessagesImpl() override
    {
        auto list = Base::createAllMessagesImpl();
        for (auto& mPtr : list) {
            updateMessageWithVersion(*mPtr);
        }
        return list;
    }

    virtual cc_tools_qt::MessagePtr createMessageImpl(const QString& idAsString, unsigned idx) override
    {
        auto mPtr = Base::createMessageImpl(idAsString, idx);
        updateMessageWithVersion(*mPtr);
        return mPtr;
    }

    using Base::createInvalidMessageImpl;
    using Base::createRawDataMessageImpl;
    using Base::createExtraInfoMessageImpl;

private:
    void updateMessageWithVersion(cc_tools_qt::Message& msg)
    {
        assert(dynamic_cast<cc_tools_qt_plugin::cc_demo3::Message*>(&msg) != nullptr);
        static_assert(cc_tools_qt_plugin::cc_demo3::Message::hasVersionInTransportFields(),
            "Interface type is expected to has version in transport fields");
        static const std::size_t VersionIdx = 
            cc_tools_qt_plugin::cc_demo3::Message::versionIdxInTransportFields();
        auto& castedMsg = static_cast<cc_tools_qt_plugin::cc_demo3::Message&>(msg);
        std::get<VersionIdx>(castedMsg.transportFields()).value() =
            static_cast<cc_tools_qt_plugin::cc_demo3::Message::VersionType>(m_version);
        castedMsg.refresh();
        updateMessage(msg);
    }

    int m_version = 5U;
};

Protocol_CC_Demo3::Protocol_CC_Demo3()
  : m_pImpl(new Protocol_CC_Demo3Impl())
{
}

Protocol_CC_Demo3::~Protocol_CC_Demo3() = default;

int Protocol_CC_Demo3::getVersion() const
{
    return m_pImpl->getVersion();
}

void Protocol_CC_Demo3::setVersion(int value)
{
    m_pImpl->setVersion(value);
}

const QString& Protocol_CC_Demo3::nameImpl() const
{
    return m_pImpl->name();
}

Protocol_CC_Demo3::MessagesList Protocol_CC_Demo3::readImpl(const cc_tools_qt::DataInfo& dataInfo, bool final)
{
    return m_pImpl->read(dataInfo, final);
}

cc_tools_qt::DataInfoPtr Protocol_CC_Demo3::writeImpl(cc_tools_qt::Message& msg)
{
    return m_pImpl->write(msg);
}

Protocol_CC_Demo3::MessagesList Protocol_CC_Demo3::createAllMessagesImpl()
{
    return m_pImpl->createAllMessages();
}

cc_tools_qt::MessagePtr Protocol_CC_Demo3::createMessageImpl(const QString& idAsString, unsigned idx)
{
    return static_cast<cc_tools_qt::Protocol*>(m_pImpl.get())->createMessage(idAsString, idx);
}

Protocol_CC_Demo3::UpdateStatus Protocol_CC_Demo3::updateMessageImpl(cc_tools_qt::Message& msg)
{
    return m_pImpl->updateMessage(msg);
}

cc_tools_qt::MessagePtr Protocol_CC_Demo3::cloneMessageImpl(const cc_tools_qt::Message& msg)
{
    return m_pImpl->cloneMessage(msg);
}

cc_tools_qt::MessagePtr Protocol_CC_Demo3::createInvalidMessageImpl()
{
    return m_pImpl->createInvalidMessageImpl();
}

cc_tools_qt::MessagePtr Protocol_CC_Demo3::createRawDataMessageImpl()
{
    return m_pImpl->createRawDataMessageImpl();
}

cc_tools_qt::MessagePtr Protocol_CC_Demo3::createExtraInfoMessageImpl()
{
    return m_pImpl->createExtraInfoMessageImpl();
}

} // namespace plugin

} // namespace cc_demo3

} // namespace cc_tools_qt_plugin
