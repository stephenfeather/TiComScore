//
//  CSLabel.h
//  comScore
//

// Copyright 2011 comScore, Inc. All right reserved.
//

#import <Foundation/Foundation.h>

@interface CSLabel : NSObject {
    NSInteger _firstOrder;
}

+(NSArray *) orderFirstLabels;
+(NSArray *) orderLastLabels;

-(NSString *) filter:(NSString *)val;
-(NSString *) pack;
-(id) init: (NSString *) labelName value:(NSString *) labelValue aggregate:(BOOL) aggr;

@property (assign) NSString *name;
@property (assign) NSString *value;
@property (assign) BOOL aggregate;
@property (nonatomic, retain) NSMutableArray *list;

@end
