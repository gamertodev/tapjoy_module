/**
 * Your Copyright Here
 *
 * Appcelerator Titanium is Copyright (c) 2009-2010 by Appcelerator, Inc.
 * and licensed under the Apache Public License (version 2)
 */
#import "TiModule.h"
#import	"TapjoyConnect.h"

@interface ComTapjoyModule : TiModule 
{
}

@property(nonatomic,readwrite,assign) NSString* secret;

/*
 * Note when an action was completed within the app.
 */
- (void)actionComplete:(NSString*)actionID;

@end
