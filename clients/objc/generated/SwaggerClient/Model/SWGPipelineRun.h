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


#import "SWGPipelineRunartifacts.h"
@protocol SWGPipelineRunartifacts;
@class SWGPipelineRunartifacts;



@protocol SWGPipelineRun
@end

@interface SWGPipelineRun : SWGObject


@property(nonatomic) NSString* class;

@property(nonatomic) NSArray<SWGPipelineRunartifacts>* artifacts;

@property(nonatomic) NSNumber* durationInMillis;

@property(nonatomic) NSNumber* estimatedDurationInMillis;

@property(nonatomic) NSString* enQueueTime;

@property(nonatomic) NSString* endTime;

@property(nonatomic) NSString* _id;

@property(nonatomic) NSString* organization;

@property(nonatomic) NSString* pipeline;

@property(nonatomic) NSString* result;

@property(nonatomic) NSString* runSummary;

@property(nonatomic) NSString* startTime;

@property(nonatomic) NSString* state;

@property(nonatomic) NSString* type;

@property(nonatomic) NSString* commitId;

@end
