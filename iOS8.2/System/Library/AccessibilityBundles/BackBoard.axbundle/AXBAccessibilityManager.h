/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:59 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/AccessibilityBundles/BackBoard.axbundle/BackBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <BackBoard/BackBoard-Structs.h>
@class AXSimpleRuntimeManager;

@interface AXBAccessibilityManager : NSObject {

	char _voiceOverItemChooserVisible;
	AXSimpleRuntimeManager* _runtimeManager;
	char _accelerometerDisabled;

}

@property (assign,nonatomic) char accelerometerDisabled;                    //@synthesize accelerometerDisabled=_accelerometerDisabled - In the implementation block
@property (assign,nonatomic) char voiceOverItemChooserVisible;              //@synthesize voiceOverItemChooserVisible=_voiceOverItemChooserVisible - In the implementation block
+(void)initializeAccessibilityMonitor;
+(void)updateAccessibilitySettings;
+(id)sharedManager;
-(void)_sendPressFingerEvent:(char)arg1 location:(CGPoint)arg2 flags:(unsigned long)arg3 contextId:(unsigned)arg4 ;
-(id)_accessibilitySpringBoardApplication;
-(id)_accessibilityUIServerApplication;
-(void)_releasePendingEvents:(double)arg1 ;
-(void)_accessibilityRepostEvent:(id)arg1 ;
-(void)_sendFingerEvent:(unsigned)arg1 location:(CGPoint)arg2 flags:(unsigned long)arg3 contextId:(unsigned)arg4 ;
-(void)simulatePressAtPoint:(CGPoint)arg1 withContextId:(unsigned)arg2 withDelay:(float)arg3 ;
-(void)_sendDeviceChangeEvent:(int)arg1 ;
-(void)_userEventOccurred;
-(void)_sendCancelTouchEvent;
-(CGPoint)_accessibilityConvertHostedViewPoint:(CGPoint)arg1 fromContextId:(unsigned)arg2 ;
-(id)windowServerDisplayForDisplayId:(unsigned)arg1 ;
-(double)_processPassiveEventQueue;
-(char)_handleItemChooserVisible:(unsigned)arg1 ;
-(void)_undoContextShiftedPoints:(id)arg1 ;
-(void)_startPassiveResendThread;
-(char)_screenReaderCapture:(id)arg1 ;
-(char)_accessibilityEventTapCallback:(id)arg1 ;
-(void)resetAssistiveTouchHitPort;
-(void)resetAccessibilityUIHitPort;
-(CGRect)accessibilityConvertHostedViewFrame:(CGRect)arg1 withContextId:(unsigned)arg2 ;
-(void)initializeAccessibility;
-(void)disableAccessibility;
-(void)observerClientDied;
-(void)setAccelerometerDisabled:(char)arg1 ;
-(void)_setDeviceOrientationCapability:(char)arg1 ;
-(int)_handlePidForSpecialCases:(unsigned)arg1 ;
-(id)_accessibilitySystemAppApplicationPid;
-(int)_accessibilityApplicationForContextId:(unsigned)arg1 ;
-(CGPoint)_accessibilityConvertHostedViewPoint:(CGPoint)arg1 toContextId:(unsigned)arg2 ;
-(char)voiceOverItemChooserVisible;
-(CGPoint)_accessibilityConvertHostedViewPoint:(CGPoint)arg1 ;
-(CGPoint)_accessibilityViewPointFromHostedViewContext:(CGPoint)arg1 ;
-(char)accelerometerDisabled;
-(id)_accessibilitySystemAppApplicationBundleId;
-(char)_accessibilityIsInternalInstall;
-(id)accessibilityAttributeValue:(int)arg1 ;
-(char)accessibilityPerformAction:(int)arg1 withValue:(id)arg2 ;
-(id)init;
-(void)setVoiceOverItemChooserVisible:(char)arg1 ;
-(id)allJobLabels;
-(id)accessibilityAttributeValue:(int)arg1 forParameter:(id)arg2 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(int)arg2 ;
@end

