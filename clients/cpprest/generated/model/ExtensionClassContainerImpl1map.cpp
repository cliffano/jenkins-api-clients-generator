/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "ExtensionClassContainerImpl1map.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

ExtensionClassContainerImpl1map::ExtensionClassContainerImpl1map()
{
    m_Io_jenkins_blueocean_service_embedded_rest_PipelineImplIsSet = false;
    m_Io_jenkins_blueocean_service_embedded_rest_MultiBranchPipelineImplIsSet = false;
    m__class = U("");
    m__classIsSet = false;
}

ExtensionClassContainerImpl1map::~ExtensionClassContainerImpl1map()
{
}

void ExtensionClassContainerImpl1map::validate()
{
    // TODO: implement validation
}

web::json::value ExtensionClassContainerImpl1map::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Io_jenkins_blueocean_service_embedded_rest_PipelineImplIsSet)
    {
        val[U("io.jenkins.blueocean.service.embedded.rest.PipelineImpl")] = ModelBase::toJson(m_Io_jenkins_blueocean_service_embedded_rest_PipelineImpl);
    }
    if(m_Io_jenkins_blueocean_service_embedded_rest_MultiBranchPipelineImplIsSet)
    {
        val[U("io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl")] = ModelBase::toJson(m_Io_jenkins_blueocean_service_embedded_rest_MultiBranchPipelineImpl);
    }
    if(m__classIsSet)
    {
        val[U("_class")] = ModelBase::toJson(m__class);
    }

    return val;
}

void ExtensionClassContainerImpl1map::fromJson(web::json::value& val)
{
    if(val.has_field(U("io.jenkins.blueocean.service.embedded.rest.PipelineImpl")))
    {
        if(!val[U("io.jenkins.blueocean.service.embedded.rest.PipelineImpl")].is_null())
        {
            std::shared_ptr<ExtensionClassImpl> newItem(new ExtensionClassImpl());
            newItem->fromJson(val[U("io.jenkins.blueocean.service.embedded.rest.PipelineImpl")]);
            setIoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl( newItem );
        }
    }
    if(val.has_field(U("io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl")))
    {
        if(!val[U("io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl")].is_null())
        {
            std::shared_ptr<ExtensionClassImpl> newItem(new ExtensionClassImpl());
            newItem->fromJson(val[U("io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl")]);
            setIoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl( newItem );
        }
    }
    if(val.has_field(U("_class")))
    {
        setClass(ModelBase::stringFromJson(val[U("_class")]));
    }
}

void ExtensionClassContainerImpl1map::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Io_jenkins_blueocean_service_embedded_rest_PipelineImplIsSet)
    {
        if (m_Io_jenkins_blueocean_service_embedded_rest_PipelineImpl.get())
        {
            m_Io_jenkins_blueocean_service_embedded_rest_PipelineImpl->toMultipart(multipart, U("io.jenkins.blueocean.service.embedded.rest.PipelineImpl."));
        }
        
    }
    if(m_Io_jenkins_blueocean_service_embedded_rest_MultiBranchPipelineImplIsSet)
    {
        if (m_Io_jenkins_blueocean_service_embedded_rest_MultiBranchPipelineImpl.get())
        {
            m_Io_jenkins_blueocean_service_embedded_rest_MultiBranchPipelineImpl->toMultipart(multipart, U("io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl."));
        }
        
    }
    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("_class"), m__class));
        
    }
}

void ExtensionClassContainerImpl1map::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("io.jenkins.blueocean.service.embedded.rest.PipelineImpl")))
    {
        if(multipart->hasContent(U("io.jenkins.blueocean.service.embedded.rest.PipelineImpl")))
        {
            std::shared_ptr<ExtensionClassImpl> newItem(new ExtensionClassImpl());
            newItem->fromMultiPart(multipart, U("io.jenkins.blueocean.service.embedded.rest.PipelineImpl."));
            setIoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl( newItem );
        }
    }
    if(multipart->hasContent(U("io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl")))
    {
        if(multipart->hasContent(U("io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl")))
        {
            std::shared_ptr<ExtensionClassImpl> newItem(new ExtensionClassImpl());
            newItem->fromMultiPart(multipart, U("io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl."));
            setIoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl( newItem );
        }
    }
    if(multipart->hasContent(U("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(U("_class"))));
    }
}

std::shared_ptr<ExtensionClassImpl> ExtensionClassContainerImpl1map::getIoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl() const
{
    return m_Io_jenkins_blueocean_service_embedded_rest_PipelineImpl;
}


void ExtensionClassContainerImpl1map::setIoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl(std::shared_ptr<ExtensionClassImpl> value)
{
    m_Io_jenkins_blueocean_service_embedded_rest_PipelineImpl = value;
    m_Io_jenkins_blueocean_service_embedded_rest_PipelineImplIsSet = true;
}
bool ExtensionClassContainerImpl1map::ioJenkinsBlueoceanServiceEmbeddedRestPipelineImplIsSet() const
{
    return m_Io_jenkins_blueocean_service_embedded_rest_PipelineImplIsSet;
}

void ExtensionClassContainerImpl1map::unsetIo_jenkins_blueocean_service_embedded_rest_PipelineImpl()
{
    m_Io_jenkins_blueocean_service_embedded_rest_PipelineImplIsSet = false;
}

std::shared_ptr<ExtensionClassImpl> ExtensionClassContainerImpl1map::getIoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl() const
{
    return m_Io_jenkins_blueocean_service_embedded_rest_MultiBranchPipelineImpl;
}


void ExtensionClassContainerImpl1map::setIoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl(std::shared_ptr<ExtensionClassImpl> value)
{
    m_Io_jenkins_blueocean_service_embedded_rest_MultiBranchPipelineImpl = value;
    m_Io_jenkins_blueocean_service_embedded_rest_MultiBranchPipelineImplIsSet = true;
}
bool ExtensionClassContainerImpl1map::ioJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImplIsSet() const
{
    return m_Io_jenkins_blueocean_service_embedded_rest_MultiBranchPipelineImplIsSet;
}

void ExtensionClassContainerImpl1map::unsetIo_jenkins_blueocean_service_embedded_rest_MultiBranchPipelineImpl()
{
    m_Io_jenkins_blueocean_service_embedded_rest_MultiBranchPipelineImplIsSet = false;
}

utility::string_t ExtensionClassContainerImpl1map::getClass() const
{
    return m__class;
}


void ExtensionClassContainerImpl1map::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool ExtensionClassContainerImpl1map::classIsSet() const
{
    return m__classIsSet;
}

void ExtensionClassContainerImpl1map::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}

