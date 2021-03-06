/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:29 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <AccessibilityUtilities/AXServer.h>

@class NSMutableArray;

@interface AXBackBoardServer : AXServer {

	BOOL _overrideGestureRecognition;
	NSMutableArray* _eventListeners;

}

@property (assign,nonatomic) BOOL invertColorsEnabled; 
@property (assign,nonatomic) BOOL inPreboardMode; 
+(id)server;
-(void)dealloc;
-(id)init;
-(BOOL)inPreboardMode;
-(void)_didConnectToServer;
-(void)_willClearServer;
-(id)_serviceName;
-(BOOL)_shouldDispatchLocally;
-(BOOL)isGuidedAccessActive;
-(id)_handleEventListener:(id)arg1 ;
-(void)registerSiriViewServicePID:(int)arg1 ;
-(void)registerAccessibilityUIServicePID:(int)arg1 ;
-(void)setInPreboardMode:(BOOL)arg1 ;
-(id)backboardServiceInstance;
-(void)registerAssistiveTouchPID:(int)arg1 ;
-(void)registerEventListener:(/*^block*/id)arg1 withIdentifierCallback:(/*^block*/id)arg2 ;
-(id)_springboardParametersForGuidedAccessAvailability;
-(void)registerGestureConflictWithZoom:(id)arg1 ;
-(void)adjustSystemZoom:(int)arg1 ;
-(void)setLockScreenDimTimerEnabled:(BOOL)arg1 ;
-(BOOL)invertColorsEnabled;
-(void)setInvertColorsEnabled:(BOOL)arg1 ;
-(void)postEvent:(id)arg1 afterNamedTap:(id)arg2 includeTaps:(id)arg3 ;
-(void)postEvent:(id)arg1 systemEvent:(BOOL)arg2 ;
-(unsigned)contextIdForPoint:(CGPoint)arg1 ;
-(CGRect)convertFrame:(CGRect)arg1 forContextId:(unsigned)arg2 ;
-(void)userEventOccurred;
-(void)wakeUpDeviceIfNecessary;
-(void)setVoiceOverItemChooserVisible:(BOOL)arg1 ;
-(void)removeEventListener:(id)arg1 ;
-(void)setHearingAidControlIsVisible:(BOOL)arg1 ;
-(void)setAccessibilityPreferenceAsMobile:(id)arg1 value:(id)arg2 notification:(id)arg3 ;
-(BOOL)requestGuidedAccessSession:(BOOL)arg1 appID:(id)arg2 ;
-(BOOL)isGuidedAccessSelfLockedToApp:(id)arg1 ;
-(void)toggleGuidedAccess;
-(void)jetsamThirdPartyApps;
-(unsigned long long)guidedAccessAvailability;
@end

