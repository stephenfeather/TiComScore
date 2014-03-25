#import <UIKit/UIKit.h>

@interface CSUncaughtExceptionHandler : NSObject
{
	BOOL _dismissed;
}

+ (NSString *)parseCall:(NSString *)call;

@end

void CSInstallUncaughtExceptionHandler();
