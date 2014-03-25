//
//  CSDevice.h
//  comScore
//

#import <Foundation/Foundation.h>

@interface CSDevice : NSObject

+ (BOOL) gcdAvailable;
+ (NSString *)ssid;
+ (NSString *)topViewControllerName;

@end
