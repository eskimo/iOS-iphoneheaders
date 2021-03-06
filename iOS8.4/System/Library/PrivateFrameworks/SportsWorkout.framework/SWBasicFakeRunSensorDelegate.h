/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SportsWorkout/SportsWorkout-Structs.h>
#import <SportsWorkout/SWFakeRunSensorDelegate.h>

@class NSTimer, NSString;

@interface SWBasicFakeRunSensorDelegate : NSObject <SWFakeRunSensorDelegate> {

	NSTimer* _packetTimer;
	BOOL _firstPacketDelivered;
	unsigned char _payload[28];
	SDARunState _runState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)_schedulePacketTimerForFakeSensor:(id)arg1 ;
-(void)_fakeNextPacketForTimer:(id)arg1 ;
-(void)_updatePayload;
-(unsigned long long)remainingBatteryLifetimeInHoursForFakeSensor:(id)arg1 ;
-(void)beginLinkingForFakeSensor:(id)arg1 ;
-(void)cancelLinkingForFakeSensor:(id)arg1 ;
-(void)beginSearchingForFakeSensor:(id)arg1 ;
-(void)cancelSearchingForFakeSensor:(id)arg1 ;
@end

