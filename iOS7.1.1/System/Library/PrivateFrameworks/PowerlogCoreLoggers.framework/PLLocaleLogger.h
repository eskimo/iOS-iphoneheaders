/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLoggerSupport/PLLogger.h>

@class NSTimer;

@interface PLLocaleLogger : PLLogger {

	NSTimer* _daylightSavingsTimer;

}

@property (retain) NSTimer * daylightSavingsTimer;              //@synthesize daylightSavingsTimer=_daylightSavingsTimer - In the implementation block
-(void)dealloc;
-(id)init;
-(void)log;
-(void)setDaylightSavingsTimer:(id)arg1 ;
-(void)handleWake:(id)arg1 ;
-(void)daylightSavingsTimerArm;
-(id)daylightSavingsTimer;
-(void)daylightSavingsTimerFire:(id)arg1 ;
@end

