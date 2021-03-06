/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/SUManagerClientDelegate.h>
#import <Preferences/SUNetworkObserver.h>

@class SUManagerClient, SUDownload;

@interface SBSoftwareUpdateController : NSObject <SUManagerClientDelegate, SUNetworkObserver> {

	SUManagerClient* _client;
	SUDownload* _updateToInstall;
	int _currentNetworkType;
	int _iCloudRestoreToken;
	BOOL _showOrScheduleForcedInstallAlertAfterNextUnlock;
	BOOL _scheduleForcedInstallAlertAfterNextUnlock;
	BOOL _scheduleForcedInstallAlertWhenAble;
	BOOL _settingsResetPrefsBadgedFlag;

}
+(id)stringFromReasons:(int)arg1 ;
+(id)sharedInstance;
-(void)_prepareMigrationForSettingsReset;
-(void)_completeMigrationForSettingsReset;
-(void)_lockStateChanged:(id)arg1 ;
-(void)_iCloudStatusChanged;
-(void)_migrateForNewOSVersionIfNecessary;
-(void)_registerForInstallRelatedNotifications;
-(void)_setUpdateToInstall:(id)arg1 ;
-(BOOL)_forceInstallAfterDownload;
-(void)_showOrScheduleNextForcedInstallAlert;
-(void)_unregisterForInstallRelatedNotifications;
-(void)_resetAndCancelExistingScheduledForcedInstallAlerts;
-(void)_handleInstallError:(id)arg1 ;
-(void)_scheduleForcedInstallRepeatAlert:(double)arg1 ;
-(BOOL)_isSettingsBadgedForSoftwareUpdate;
-(void)_savePreferencesBadgeFlag:(id)arg1 ;
-(id)_stringForCurrentVersionPreference;
-(void)_saveLastKnownVersionPreference:(id)arg1 ;
-(void)delayForcedInstallUntilAble;
-(void)_autoDownloadUnknownToUserFailedForDescriptor:(id)arg1 error:(id)arg2 ;
-(void)_postDownloadStateChangeNotification:(BOOL)arg1 ;
-(void)_showOrScheduleNextForcedInstallAlertWithReasons:(int)arg1 ;
-(void)_toggleSettingsBadge:(BOOL)arg1 ;
-(void)_isUpdateInstallable:(/*^block*/ id)arg1 ;
-(void)_callCountChanged:(id)arg1 ;
-(void)_syncWillStart:(id)arg1 ;
-(void)_syncDidEnd:(id)arg1 ;
-(void)_iTunesRestoreStateChanged:(id)arg1 ;
-(void)_showForcedInstallAlert;
-(void)_clearLegacyBadgeIfNecessary:(id)arg1 ;
-(void)installUpdate;
-(void)delayForcedInstallWithDefaultDurationFromNow;
-(void)delayForcedInstallWithDefaultDurationAfterNextUnlock;
-(BOOL)_isSettingsActive;
-(void)_resetState;
-(void)dealloc;
-(id)init;
-(void)isDownloading:(/*^block*/ id)arg1 ;
-(void)client:(id)arg1 automaticDownloadDidFailToStartForNewUpdateAvailable:(id)arg2 withError:(id)arg3 ;
-(void)client:(id)arg1 downloadDidStart:(id)arg2 ;
-(void)client:(id)arg1 downloadDidFail:(id)arg2 withError:(id)arg3 ;
-(void)client:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)client:(id)arg1 downloadWasInvalidatedForNewUpdateAvailable:(id)arg2 ;
-(void)client:(id)arg1 installDidStart:(id)arg2 ;
-(void)client:(id)arg1 installDidFail:(id)arg2 withError:(id)arg3 ;
-(void)client:(id)arg1 installDidFinish:(id)arg2 ;
@end

