//
// CSEncoding.h
// ComScore
//

// Copyright 2011 comScore, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface CSEncoding : NSObject {
}

+(NSString *) urlencode: (NSString *) str;
+(NSString *) urldecode: (NSString *) str;
+(CSEncoding *) coder;
+(NSArray *) escapeChars;
+(NSArray *) replaceChars;

@end
