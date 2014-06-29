/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/VoiceMemos.app/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, RCMainViewController, UINavigationController, NSTimer, UIAlertView;

@interface RecorderAppDelegate : NSObject <UIAlertViewDelegate, UIApplicationDelegate> {

	UIWindow* _window;
	RCMainViewController* _mainViewController;
	UINavigationController* _navigationController;
	NSTimer* _timeUpdateTimer;
	unsigned _backgroundTaskIdentifier;
	int _lockscreenWillAppearToken;
	int _lockscreenDidDisappearToken;
	BOOL _canUseDoubleHeightStatusBar;
	BOOL _recordingActiveOrPaused;
	BOOL _isActive;
	BOOL _hasBecomeActiveOnce;
	UIAlertView* _failedToCreateDatabaseAlertView;

}

@property (nonatomic,retain) UIWindow * window; 
-(void)_failedToCreateDatabase:(id)arg1 ;
-(void)_recordingDidBegin:(id)arg1 ;
-(void)_recordingDidPause:(id)arg1 ;
-(void)_recordingDidResume:(id)arg1 ;
-(void)_recordingDidEnd:(id)arg1 ;
-(void)_recordingDidFail:(id)arg1 ;
-(void)_recordingDidFinishWritingToDisk:(id)arg1 ;
-(void)setCanUseDoubleHeightStatusBar:(BOOL)arg1 ;
-(void)updateDoubleHeightStatusBarForForegroundState;
-(double)_lastSuspendTime;
-(void)resetNavigationStateAnimated:(BOOL)arg1 ;
-(void)_updateLastSuspendTime;
-(void)_showDoubleHeightStatusBarIfNecessary;
-(void)_hideDoubleHeightStatusBar;
-(void)applicationDidResume:(id)arg1 ;
-(void)disableDoubleHeightStatusBar;
-(void)enableDoubleHeightStatusBar;
-(void)dealloc;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void).cxx_destruct;
-(void)_applicationDidFinishLaunching;
-(void)_updateTime:(id)arg1 ;
@end
