/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:33 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlertDelegate.h>
#import <SpringBoard/FBWindowContextManagerDelegate.h>
#import <SpringBoard/FBWindowContextManagerObserver.h>

@protocol SBAlertManagerDelegate;
@class UIScreen, FBScene, SBAlertWindow, NSMutableArray, NSMapTable, NSMutableSet, SBDisableActiveInterfaceOrientationChangeAssertion, NSString;

@interface SBAlertManager : NSObject <SBAlertDelegate, FBWindowContextManagerDelegate, FBWindowContextManagerObserver> {

	UIScreen* _screen;
	CGRect _windowFrame;
	FBScene* _alertScene;
	SBAlertWindow* _alertWindow;
	SBAlertWindow* _deferredAlertWindow;
	NSMutableArray* _alerts;
	NSMapTable* _observers;
	NSMutableSet* _removalPendingAlerts;
	NSMapTable* _alertToAccessoryWrappersMap;
	char _deactivatingAllAlerts;
	id<SBAlertManagerDelegate> _delegate;
	SBDisableActiveInterfaceOrientationChangeAssertion* _orientationLockAssertion;
	struct {
		unsigned deactivateDismissed : 1;
		unsigned newWindow : 1;
	}  _delegateFlags;

}

@property (assign,nonatomic) id<SBAlertManagerDelegate> delegate; 
@property (nonatomic,readonly) SBAlertWindow * alertWindow;                    //@synthesize alertWindow=_alertWindow - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activeAlert;
-(char)containsAlert:(id)arg1 ;
-(id)allAlerts;
-(char)hasStackedAlerts;
-(void)deactivate:(id)arg1 ;
-(id)initWithScreen:(id)arg1 delegate:(id)arg2 ;
-(void)deactivateAlertsAfterLaunch;
-(id)stackedAlertsIncludingActiveAlert:(char)arg1 ;
-(char)alertCanAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)alertWillDismiss:(id)arg1 ;
-(void)alertIsReadyToBeDeactivated:(id)arg1 ;
-(void)alert:(id)arg1 requestsBackgroundStyleChangeWithAnimationFactory:(id)arg2 ;
-(void)alertIsReadyToBeRemovedFromView:(id)arg1 ;
-(void)deactivateAll;
-(void)_hideHostedAccessoryViewsForAlert:(id)arg1 ;
-(id)_createAlertWindowForAlert:(id)arg1 ;
-(void)_notificationCenterDidDeactivate:(id)arg1 ;
-(void)_controlCenterDidDeactivate:(id)arg1 ;
-(void)_assistantVisibilityDidChange:(id)arg1 ;
-(void)_deactivate:(id)arg1 ;
-(char)_needsPortraitOrientationLockForAlert:(id)arg1 ;
-(void)_disablePortraitOrientationLock;
-(void)_makeAlertWindowOpaque:(char)arg1 ;
-(void)_resetAlertWindowOpacity;
-(void)_hostAccessoryWindowsForActivatingAlert:(id)arg1 ;
-(void)_enablePortraitOrientationLock;
-(void)_removeFromView:(id)arg1 oldAlertIndex:(unsigned)arg2 ;
-(void)_stopHostingAccessoryWindowsForDeactivatingAlert:(id)arg1 ;
-(id)_accessoryWrapperForAlert:(id)arg1 withWindow:(id)arg2 hostRequester:(id)arg3 ;
-(void)_stopHostingAccessoryWindowsForWrapper:(id)arg1 ;
-(void)_removeHostedAccessoryViewsForRequester:(id)arg1 ;
-(void)alertWantsToForceWallpaperTunnelUpdate:(id)arg1 ;
-(void)setAlertsShouldDeactivateAfterLaunch;
-(void)applicationWillAnimateActivation;
-(void)applicationFinishedAnimatingBeneathAlert;
-(id)_hostedAccessoryViewsForAlert:(id)arg1 ;
-(void)_disablePortraitOrientationLockIfPossibleForAlert:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SBAlertManagerDelegate>)arg1 ;
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(id<SBAlertManagerDelegate>)delegate;
-(id)screen;
-(SBAlertWindow *)alertWindow;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)activate:(id)arg1 ;
-(void)windowContextManagerWillStartTrackingContexts:(id)arg1 ;
-(void)windowContextManagerDidStopTrackingContexts:(id)arg1 ;
-(id)contextHostManager;
-(char)windowContextManager:(id)arg1 shouldAddContext:(id)arg2 ;
-(void)_activate:(id)arg1 ;
@end
