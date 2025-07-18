/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * The version of the OpenAPI document: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.14.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Pet.h
 *
 * A pet for sale in the pet store
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Pet_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Pet_H_

#include <stdexcept>

#include "CppRestPetstoreClient/ModelBase.h"

#include "CppRestPetstoreClient/model/Tag.h"
#include "CppRestPetstoreClient/model/Category.h"
#include <cpprest/details/basic_types.h>
#include "CppRestPetstoreClient/Object.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class Category;
class Tag;


/// <summary>
/// A pet for sale in the pet store
/// </summary>
class  Pet
    : public ModelBase
{
public:
    Pet();
    virtual ~Pet();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;


    /////////////////////////////////////////////
    /// Pet members

    enum class StatusEnum
    {
        AVAILABLE,
        PENDING,
        SOLD,
    };
    /// <summary>
    /// pet status in the store
    /// </summary>

    StatusEnum toStatusEnum(const utility::string_t& value) const;
    const utility::string_t fromStatusEnum(const StatusEnum value) const;


    int64_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(int64_t value);

    std::shared_ptr<Category> getCategory() const;
    bool categoryIsSet() const;
    void unsetCategory();
    void setCategory(const std::shared_ptr<Category>& value);

    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();
    void setName(const utility::string_t& value);

    std::vector<utility::string_t> getPhotoUrls() const;
    bool photoUrlsIsSet() const;
    void unsetPhotoUrls();
    void setPhotoUrls(const std::vector<utility::string_t>& value);

    std::vector<std::shared_ptr<Tag>> getTags() const;
    bool tagsIsSet() const;
    void unsetTags();
    void setTags(const std::vector<std::shared_ptr<Tag>>& value);

    /// <summary>
    /// pet status in the store
    /// </summary>
    StatusEnum getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();
    void setStatus(const StatusEnum value);

    std::shared_ptr<Object> getMetadata() const;
    bool metadataIsSet() const;
    void unsetMetadata();
    void setMetadata(const std::shared_ptr<Object>& value);


protected:
    int64_t m_Id;
    bool m_IdIsSet;

    std::shared_ptr<Category> m_Category;
    bool m_CategoryIsSet;

    utility::string_t m_Name;
    bool m_NameIsSet;

    std::vector<utility::string_t> m_PhotoUrls;
    bool m_PhotoUrlsIsSet;

    std::vector<std::shared_ptr<Tag>> m_Tags;
    bool m_TagsIsSet;

    StatusEnum m_Status;
    bool m_StatusIsSet;

    std::shared_ptr<Object> m_Metadata;
    bool m_MetadataIsSet;

};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Pet_H_ */
