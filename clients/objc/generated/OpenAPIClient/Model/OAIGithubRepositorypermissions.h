#import <Foundation/Foundation.h>
#import "OAIObject.h"

/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 1.0.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/





@protocol OAIGithubRepositorypermissions
@end

@interface OAIGithubRepositorypermissions : OAIObject


@property(nonatomic) NSNumber* admin;

@property(nonatomic) NSNumber* push;

@property(nonatomic) NSNumber* pull;

@property(nonatomic) NSString* _class;

@end