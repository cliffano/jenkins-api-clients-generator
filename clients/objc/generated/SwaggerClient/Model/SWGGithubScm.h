#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 0.1.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "SWGGithubScmlinks.h"
@protocol SWGGithubScmlinks;
@class SWGGithubScmlinks;



@protocol SWGGithubScm
@end

@interface SWGGithubScm : SWGObject


@property(nonatomic) NSString* class;

@property(nonatomic) SWGGithubScmlinks* links;

@property(nonatomic) NSString* credentialId;

@property(nonatomic) NSString* _id;

@property(nonatomic) NSString* uri;

@end
