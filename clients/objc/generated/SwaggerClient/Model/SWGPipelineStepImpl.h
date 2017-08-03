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


#import "SWGInputStepImpl.h"
#import "SWGPipelineStepImpllinks.h"
@protocol SWGInputStepImpl;
@class SWGInputStepImpl;
@protocol SWGPipelineStepImpllinks;
@class SWGPipelineStepImpllinks;



@protocol SWGPipelineStepImpl
@end

@interface SWGPipelineStepImpl : SWGObject


@property(nonatomic) NSString* class;

@property(nonatomic) SWGPipelineStepImpllinks* links;

@property(nonatomic) NSString* displayName;

@property(nonatomic) NSNumber* durationInMillis;

@property(nonatomic) NSString* _id;

@property(nonatomic) SWGInputStepImpl* input;

@property(nonatomic) NSString* result;

@property(nonatomic) NSString* startTime;

@property(nonatomic) NSString* state;

@end
