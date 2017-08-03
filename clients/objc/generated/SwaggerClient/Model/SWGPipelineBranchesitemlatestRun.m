#import "SWGPipelineBranchesitemlatestRun.h"

@implementation SWGPipelineBranchesitemlatestRun

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"durationInMillis": @"durationInMillis", @"estimatedDurationInMillis": @"estimatedDurationInMillis", @"enQueueTime": @"enQueueTime", @"endTime": @"endTime", @"_id": @"id", @"organization": @"organization", @"pipeline": @"pipeline", @"result": @"result", @"runSummary": @"runSummary", @"startTime": @"startTime", @"state": @"state", @"type": @"type", @"commitId": @"commitId", @"class": @"_class" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"durationInMillis", @"estimatedDurationInMillis", @"enQueueTime", @"endTime", @"_id", @"organization", @"pipeline", @"result", @"runSummary", @"startTime", @"state", @"type", @"commitId", @"class"];
  return [optionalProperties containsObject:propertyName];
}

@end
