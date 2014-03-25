//
//  CSUtils.h
//  comScore

#import <Foundation/Foundation.h>

@interface CSUtils : NSObject

+ (long long) getLongLong:(NSString *)value;
+ (long long) getLongLong:(NSString *)value defaultValue:(long long)defaultValue;
+ (int) getInt:(NSString *)value;
+ (int) getInt:(NSString *)value defaultValue:(int)defaultValue;
+ (bool) getBool:(NSString *)value;
+ (NSString *)combineDictionaryIntoString:(NSSet *)ssidDict;
+ (NSMutableSet*)populateSSIDDict:(NSString *) storedSSIDs;
+ (bool)isNotEmpty:(NSString *)string;
+ (bool)isEmpty:(NSString *)string;

@end
