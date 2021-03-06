/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@interface SBLowPowerAlertItem : SBAlertItem {

	unsigned _talkLevel;

}
+(void)saveLowBatteryLogWithCapacity:(int)arg1 voltage:(int)arg2 ;
+(BOOL)_shouldIgnoreChangeToBatteryLevel:(unsigned)arg1 ;
+(unsigned)_thresholdForLevel:(unsigned)arg1 ;
+(void)initialize;
+(id)systemVersionDescription;
+(void)setBatteryLevel:(unsigned)arg1 ;
-(id)init;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)willPresentAlertView:(id)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)shouldShowInEmergencyCall;
-(BOOL)shouldShowInLockScreen;
-(BOOL)undimsScreen;
-(id)initWithLevel:(unsigned)arg1 ;
@end

