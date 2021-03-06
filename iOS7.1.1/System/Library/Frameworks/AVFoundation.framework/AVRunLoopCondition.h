/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSCondition.h>

@class NSMutableArray;

@interface AVRunLoopCondition : NSCondition {

	NSMutableArray* _runLoopStateList;

}
-(void)waitInMode:(id)arg1 ;
-(bool)waitUntilDate:(id)arg1 inMode:(id)arg2 ;
-(bool)_waitInMode:(id)arg1 untilDate:(id)arg2 ;
-(void)_signalRunLoopWithState:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)signal;
-(bool)waitUntilDate:(id)arg1 ;
-(void)wait;
-(void)broadcast;
@end

