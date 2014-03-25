//
//  CSLog.h
//  comScore

#import <Foundation/Foundation.h>

@interface CSLog : NSObject {
}

+ (void) setEnabled:(BOOL) enable;
+ (BOOL) enabled;

+ (void) log:(NSString *)format, ... NS_FORMAT_FUNCTION(1,2);

@end
