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

/*
 * PipelineImpllinks.h
 *
 * 
 */

#ifndef PipelineImpllinks_H_
#define PipelineImpllinks_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Link.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  PipelineImpllinks
    : public ModelBase
{
public:
    PipelineImpllinks();
    virtual ~PipelineImpllinks();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PipelineImpllinks members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Link> getRuns() const;
    bool runsIsSet() const;
    void unsetRuns();
    void setRuns(std::shared_ptr<Link> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Link> getSelf() const;
    bool selfIsSet() const;
    void unsetSelf();
    void setSelf(std::shared_ptr<Link> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Link> getQueue() const;
    bool queueIsSet() const;
    void unsetQueue();
    void setQueue(std::shared_ptr<Link> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Link> getActions() const;
    bool actionsIsSet() const;
    void unsetActions();
    void setActions(std::shared_ptr<Link> value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getClass() const;
    bool classIsSet() const;
    void unset_class();
    void setClass(utility::string_t value);

protected:
    std::shared_ptr<Link> m_Runs;
    bool m_RunsIsSet;
    std::shared_ptr<Link> m_Self;
    bool m_SelfIsSet;
    std::shared_ptr<Link> m_Queue;
    bool m_QueueIsSet;
    std::shared_ptr<Link> m_Actions;
    bool m_ActionsIsSet;
    utility::string_t m__class;
    bool m__classIsSet;
};

}
}
}
}

#endif /* PipelineImpllinks_H_ */
