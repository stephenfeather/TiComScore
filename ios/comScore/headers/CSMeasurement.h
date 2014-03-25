//
//  CSMeasurement.h
//  comScore
//

// Copyright 2011 comScore, Inc. All right reserved.
//

#import <Foundation/Foundation.h>
#import "CSLabel.h"
#import "CSPrivilegedLabel.h"

@class CSCore;

// Base class for the different available Measurements.
@interface CSMeasurement : NSObject {
	NSMutableDictionary *_labelsMap;
	double _created;
    NSString *_pixelURL;
}

// Measurement constructors.
-(id) initWithCore:(CSCore *)core;

-(void) setLabel: (NSString *) name value:(NSString *) val aggregate:(BOOL) aggr;
-(void) setLabel: (NSString *) name value:(NSString *) val;
-(CSLabel *) getLabel: (NSString *) name;
-(BOOL) hasLabel: (NSString *) name;
-(NSString *) package;
-(NSDictionary *)getLabels;

@property (nonatomic, retain) NSString *pixelURL;

//Custom methods
-(NSString *) retrieveLabelsAsString:(NSArray*) orderedLabels;
-(void) appendLabel: (CSLabel *) label;
-(void) appendLabel: (NSString *) name value: (NSString *) val aggregate: (BOOL) aggr nedstatPrivilege: (BOOL) np;
-(void) removeLabel: (NSString *) name aggregate: (BOOL) aggr nedstatPrivilege: (BOOL) nedstatPrivilege;

-(void) setLabel: (CSLabel *) label;
-(NSString *) getLabelValue: (NSString *) name;
- (void) addLabels:(NSDictionary *)labels;
- (void) addLabels:(NSDictionary *)labels aggregate:(bool)aggregate;

@end
