//
//  CSStorage.h
//  comScore
//

// Copyright 2011 comScore, Inc. All right reserved.
//

#import <Foundation/Foundation.h>


@interface CSStorage : NSObject {
}

-(id) init;
-(BOOL) has: (NSString *) key;
-(id) get: (NSString *) key;
-(void) set: (NSString *) key :(id) obj;
-(void) setBool: (NSString *) key :(BOOL) obj;
-(BOOL) getBool: (NSString *) key;
- (void) clear;

// Adds the value to the previous value stored in the key
- (void) add:(NSString *)key value:(long long)value;

@property (assign) BOOL enabled;

@end