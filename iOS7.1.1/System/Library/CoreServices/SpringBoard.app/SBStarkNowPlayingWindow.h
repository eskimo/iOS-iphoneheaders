/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBWindow.h>
#import <SpringBoard/SBWindowContextManagerDelegate.h>
#import <SpringBoard/SBWindowContextHostManagerDelegate.h>

@class SBWindowContextManager, SBWindowContextHostManager;

@interface SBStarkNowPlayingWindow : SBWindow <SBWindowContextManagerDelegate, SBWindowContextHostManagerDelegate> {

	SBWindowContextManager* _contextManager;
	SBWindowContextHostManager* _contextHostManager;

}
-(id)initWithScreen:(id)arg1 jailBehavior:(int)arg2 ;
-(BOOL)windowContextManager:(id)arg1 shouldAddContext:(id)arg2 ;
-(void)windowContextManager:(id)arg1 willStartTrackingContextsForScreen:(id)arg2 ;
-(void)windowContextManager:(id)arg1 didStopTrackingContextsForScreen:(id)arg2 ;
-(id)contextHostManager;
-(void)dealloc;
@end

