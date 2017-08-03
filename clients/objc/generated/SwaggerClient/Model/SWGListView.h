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


#import "SWGFreeStyleProject.h"
@protocol SWGFreeStyleProject;
@class SWGFreeStyleProject;



@protocol SWGListView
@end

@interface SWGListView : SWGObject


@property(nonatomic) NSString* class;

@property(nonatomic) NSString* _description;

@property(nonatomic) NSArray<SWGFreeStyleProject>* jobs;

@property(nonatomic) NSString* name;

@property(nonatomic) NSString* url;

@end
