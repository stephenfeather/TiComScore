/**
 * Your Copyright Here
 *
 * Appcelerator Titanium is Copyright (c) 2009-2010 by Appcelerator, Inc.
 * and licensed under the Apache Public License (version 2)
 */
#import "ComFeatherdirectTicomscoreModule.h"
#import "TiBase.h"
#import "TiHost.h"
#import "TiUtils.h"
#import "CsComScore.h"

@implementation ComFeatherdirectTicomscoreModule

#pragma mark Internal

// this is generated for your module, please do not change it
-(id)moduleGUID
{
	return @"7e074a77-b985-4c26-bad2-7f8b3d2ac2d3";
}

// this is generated for your module, please do not change it
-(NSString*)moduleId
{
	return @"com.featherdirect.ticomscore";
}

#pragma mark Lifecycle

-(void)startup
{
	// this method is called when the module is first loaded
	// you *must* call the superclass
	[super startup];
	[CSComScore setAppContext];
	NSLog(@"[INFO] %@ loaded",self);
	
}

-(void)shutdown:(id)sender
{
	// this method is called when the module is being unloaded
	// typically this is during shutdown. make sure you don't do too
	// much processing here or the app will be quit forceably
	
	// you *must* call the superclass
	[super shutdown:sender];
}

#pragma mark Cleanup 

-(void)dealloc
{
	// release any resources that have been retained by the module
	[super dealloc];
}

#pragma mark Internal Memory Management

-(void)didReceiveMemoryWarning:(NSNotification*)notification
{
	// optionally release any resources that can be dynamically
	// reloaded once memory is available - such as caches
	[super didReceiveMemoryWarning:notification];
}

#pragma Public APIs

-(void)setAppName:(id)appName
{   ENSURE_SINGLE_ARG(appName, NSString);
	[CSComScore setAppName:appName];
    NSLog(@"[INFO] comScore AppName set to %@", appName);
}

-(void)setCustomerC2:(id)customerC2
{   ENSURE_SINGLE_ARG(customerC2, NSString);
	[CSComScore setCustomerC2:customerC2];
    NSLog(@"[INFO] comScore CustomerC2 set");
}

-(void)setPublisherSecret:(id)publisherSecret
{   ENSURE_SINGLE_ARG(publisherSecret, NSString);
	[CSComScore setPublisherSecret:publisherSecret];
    NSLog(@"[INFO] comScore PublisherSecret set");
}

-(void)enableAutoUpdate:(id)args
{
	ENSURE_SINGLE_ARG_OR_NIL(args, NSDictionary);
	NSUInteger * interval = [TiUtils intValue:@"interval" properties:args def:120];
	BOOL * foregroundOnly = [TiUtils boolValue:@"foregroundOnly" properties:args def:YES];
    
	[CSComScore enableAutoUpdate: interval foregroundOnly: foregroundOnly];
	NSLog(@"[INFO] comScore AutoUpdate interval set to %u", interval);
	NSLog(@"[INFO] comScore AutoUpdate foregroundOnly set to %s", foregroundOnly ? "true" : "false");
}

-(void)onUxActive:(id)args
{
	[CSComScore onUxActive];
	NSLog(@"[INFO] comScore onUxActive");

}

-(void)onUxInactive:(id)args
{
	[CSComScore onUxInactive];
	NSLog(@"[INFO] comScore onUxInactive");
	
}


@end
