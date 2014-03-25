//
//  CSRequest.h
//  comScore
//

// Copyright 2011 comScore, Inc. All right reserved.
//

#import <Foundation/Foundation.h>
#import "CSMeasurement.h"

@interface CSRequest : NSObject {
	NSMutableURLRequest *_request;
    NSMutableData *_receivedData;
    CSCore *_core;
}

-(id) initWithCore:(CSCore *)aCore andMeasurement:(CSMeasurement *) m;
-(NSURL *) process: (NSString *) basePixelURL;
-(NSURL *) process;
-(BOOL) send;
-(BOOL) availableConnection;

@property (nonatomic, retain) CSMeasurement *measurement;

@end
