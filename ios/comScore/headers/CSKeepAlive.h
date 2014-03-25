//
//  CSKeepAlive.h
//  comScore

#import <Foundation/Foundation.h>

@class CSCore;

@interface CSKeepAlive : NSObject {
    
    NSTimer *_timer;
    CSCore *_core;
    long long _timeout;
    long long _nextKeepAliveTime;
    long long _currentTimeout;
    bool _foreground;
}

-(id) initWithCore:(CSCore *)aCore timeout:(long long)timeout;
- (void) sendKeepAlive;
- (void) reset;
- (void) reset:(long long)timeout;
- (void) processKeepAlive:(BOOL)saveInCache;
- (void) start:(long long)millis;
- (void) stop;


@end
