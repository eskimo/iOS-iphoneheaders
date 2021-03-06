/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSDAutoscrollDelegate;
#import <iWorkImport/iWorkImport-Structs.h>
@class NSObject, NSTimer;

@interface TSDAutoscroll : NSObject {

	NSObject*<TSDAutoscrollDelegate> mTarget;
	CGPoint mPoint;
	int mDirections;
	double mRepeatInterval;
	NSTimer* mTimer;
	unsigned mCount;
	char mActive;
	CGPoint mLastAutoscrollDelta;
	double mLastFired;

}

@property (assign,nonatomic) NSObject*<TSDAutoscrollDelegate> target; 
@property (assign,nonatomic) CGPoint point; 
@property (assign,nonatomic) int directions; 
@property (assign,nonatomic) double repeatInterval; 
@property (assign,nonatomic) unsigned count; 
@property (assign,nonatomic) char active; 
@property (nonatomic,readonly) CGPoint lastAutoscrollDelta; 
+(void)startAutoscroll:(id)arg1 unscaledPoint:(CGPoint)arg2 ;
-(char)startAutoscroll:(id)arg1 unscaledPoint:(CGPoint)arg2 directions:(int)arg3 repeatInterval:(double)arg4 ;
-(unsigned)p_deltaForCount:(unsigned)arg1 ;
-(CGPoint)lastAutoscrollDelta;
-(void)dealloc;
-(unsigned)count;
-(void)invalidate;
-(void)setTarget:(NSObject*<TSDAutoscrollDelegate>)arg1 ;
-(void)setRepeatInterval:(double)arg1 ;
-(NSObject*<TSDAutoscrollDelegate>)target;
-(void)setCount:(unsigned)arg1 ;
-(char)active;
-(int)directions;
-(CGPoint)point;
-(void)timerFired:(id)arg1 ;
-(void)setActive:(char)arg1 ;
-(double)repeatInterval;
-(void)setPoint:(CGPoint)arg1 ;
-(void)setDirections:(int)arg1 ;
@end

