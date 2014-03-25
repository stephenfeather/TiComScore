//
//  CSEventType.h
//  comScore
//

// Copyright 2011 comScore, Inc. All right reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
	CSApplicationStart,
	CSApplicationView,
	CSApplicationClose,
	CSApplicationAggregate,
    CSApplicationHidden,
    CSApplicationKeepAlive
} CSApplicationEventType;

extern NSString* const DispatchingEventType_toString[2];
extern NSString* const ApplicationEventType_toString[6];