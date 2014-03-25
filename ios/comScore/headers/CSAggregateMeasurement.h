//
//  CSAggregateMeasurement.h
//  comScore
//

// Copyright 2011 comScore, Inc. All right reserved.
//

#import <Foundation/Foundation.h>
#import "CSApplicationMeasurement.h"


@interface CSAggregateMeasurement : CSApplicationMeasurement {

}

- (id)initWithCore:(CSCore *)core eventType:(CSApplicationEventType)type pixelURL:(NSString *)pixelURL timestamp:(long long)timestamp;
-(NSArray *) getAggregateLabels;
-(void) aggregateLabels: (NSArray *) labelList;
-(void) formatLists;

@end
