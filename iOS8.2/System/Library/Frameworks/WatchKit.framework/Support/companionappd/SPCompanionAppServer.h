/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:24:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/WatchKit.framework/Support/companionappd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <companionappd/NSXPCListenerDelegate.h>
#import <companionappd/SPLocalServerProtocol.h>
#import <companionappd/SPDaemonManagerTransactionObserver.h>
#import <companionappd/SPTransportDelegate.h>
#import <companionappd/PSYSyncCoordinatorDelegate.h>
#import <companionappd/SPCompanionAppServerProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSXPCListener, NSMutableDictionary, SPUsageTrack, BKSProcessAssertion, NSString, NSDate;

@interface SPCompanionAppServer : NSObject <NSXPCListenerDelegate, SPLocalServerProtocol, SPDaemonManagerTransactionObserver, SPTransportDelegate, PSYSyncCoordinatorDelegate, SPCompanionAppServerProtocol> {

	char _paired;
	char _launchRequestIsOutstanding;
	char _cancelOutstandingLaunchRequests;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _queueRemote;
	NSObject*<OS_dispatch_source> _gizmoApplicationsUpdateTimer;
	NSXPCListener* _localListener;
	NSMutableDictionary* _localConnections;
	NSObject*<OS_dispatch_queue> _transactionQueue;
	NSMutableDictionary* _outstandingtransactions;
	unsigned _nextTransactionID;
	SPUsageTrack* _usageTrack;
	NSMutableDictionary* _dateOfFirstAttemptToLaunchGizmoAppsByBundleID;
	BKSProcessAssertion* _processAssertion;
	NSString* _activeApplication;
	NSObject*<OS_dispatch_queue> _processAssertionForXcodeQueue;
	BKSProcessAssertion* _processAssertionForXcode;
	NSString* _plugInIdentifierForXcodeProcessAssertion;
	id _batteryStateObserver;
	NSObject*<OS_dispatch_queue> _remoteInterfaceProcessAssertionsQueue;
	NSMutableDictionary* _remoteInterfaceProcessAssertions;
	NSObject*<OS_dispatch_queue> _launchSockPuppetAppQueue;
	NSDate* _dateOfFirstUnlock;
	double _timingTest_IDSReceiveTime;
	double _timingTest_IDSSendTime;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queueRemote;                                         //@synthesize queueRemote=_queueRemote - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> gizmoApplicationsUpdateTimer;                       //@synthesize gizmoApplicationsUpdateTimer=_gizmoApplicationsUpdateTimer - In the implementation block
@property (retain) NSXPCListener * localListener;                                                              //@synthesize localListener=_localListener - In the implementation block
@property (retain) NSMutableDictionary * localConnections;                                                     //@synthesize localConnections=_localConnections - In the implementation block
@property (assign) char paired;                                                                                //@synthesize paired=_paired - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> transactionQueue;                                    //@synthesize transactionQueue=_transactionQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * outstandingtransactions;                                    //@synthesize outstandingtransactions=_outstandingtransactions - In the implementation block
@property (assign,nonatomic) unsigned nextTransactionID;                                                       //@synthesize nextTransactionID=_nextTransactionID - In the implementation block
@property (nonatomic,retain) SPUsageTrack * usageTrack;                                                        //@synthesize usageTrack=_usageTrack - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dateOfFirstAttemptToLaunchGizmoAppsByBundleID;              //@synthesize dateOfFirstAttemptToLaunchGizmoAppsByBundleID=_dateOfFirstAttemptToLaunchGizmoAppsByBundleID - In the implementation block
@property (retain) BKSProcessAssertion * processAssertion;                                                     //@synthesize processAssertion=_processAssertion - In the implementation block
@property (nonatomic,retain) NSString * activeApplication;                                                     //@synthesize activeApplication=_activeApplication - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processAssertionForXcodeQueue;                       //@synthesize processAssertionForXcodeQueue=_processAssertionForXcodeQueue - In the implementation block
@property (retain) BKSProcessAssertion * processAssertionForXcode;                                             //@synthesize processAssertionForXcode=_processAssertionForXcode - In the implementation block
@property (nonatomic,retain) NSString * plugInIdentifierForXcodeProcessAssertion;                              //@synthesize plugInIdentifierForXcodeProcessAssertion=_plugInIdentifierForXcodeProcessAssertion - In the implementation block
@property (nonatomic,retain) id batteryStateObserver;                                                          //@synthesize batteryStateObserver=_batteryStateObserver - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> remoteInterfaceProcessAssertionsQueue;               //@synthesize remoteInterfaceProcessAssertionsQueue=_remoteInterfaceProcessAssertionsQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * remoteInterfaceProcessAssertions;                           //@synthesize remoteInterfaceProcessAssertions=_remoteInterfaceProcessAssertions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> launchSockPuppetAppQueue;                            //@synthesize launchSockPuppetAppQueue=_launchSockPuppetAppQueue - In the implementation block
@property (assign,nonatomic) char launchRequestIsOutstanding;                                                  //@synthesize launchRequestIsOutstanding=_launchRequestIsOutstanding - In the implementation block
@property (assign,nonatomic) char cancelOutstandingLaunchRequests;                                             //@synthesize cancelOutstandingLaunchRequests=_cancelOutstandingLaunchRequests - In the implementation block
@property (nonatomic,retain) NSDate * dateOfFirstUnlock;                                                       //@synthesize dateOfFirstUnlock=_dateOfFirstUnlock - In the implementation block
@property (assign,nonatomic) double timingTest_IDSReceiveTime;                                                 //@synthesize timingTest_IDSReceiveTime=_timingTest_IDSReceiveTime - In the implementation block
@property (assign,nonatomic) double timingTest_IDSSendTime;                                                    //@synthesize timingTest_IDSSendTime=_timingTest_IDSSendTime - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)unlockedSinceBoot;
-(void)setUsageTrack:(SPUsageTrack *)arg1 ;
-(void)setLocalListener:(NSXPCListener *)arg1 ;
-(NSXPCListener *)localListener;
-(void)setLocalConnections:(NSMutableDictionary *)arg1 ;
-(void)setDateOfFirstUnlock:(NSDate *)arg1 ;
-(void)sendFirstUnlockStatusToGizmo;
-(void)syncApplications;
-(void)startGizmoApplicationsUpdateTimer;
-(void)nanoRegistryChanged:(id)arg1 ;
-(void)sendPlist:(id)arg1 timeOut:(double)arg2 allowInsecureTransport:(char)arg3 ;
-(void)updateGizmoApplications;
-(void)sendPlist:(id)arg1 allowInsecureTransport:(char)arg2 ;
-(SPUsageTrack *)usageTrack;
-(void)setTimingTest_IDSSendTime:(double)arg1 ;
-(void)cancelGizmoApplicationsUpdateTimer;
-(char)_unlockedSinceBoot;
-(NSMutableDictionary *)localConnections;
-(void)sendProtobuf:(id)arg1 sender:(id)arg2 timeOut:(double)arg3 allowInsecureTransport:(char)arg4 ;
-(NSObject*<OS_dispatch_queue>)queueRemote;
-(NSObject*<OS_dispatch_queue>)processAssertionForXcodeQueue;
-(NSString *)plugInIdentifierForXcodeProcessAssertion;
-(void)takeProcessAssertionForXcode:(id)arg1 ;
-(void)takeRemoteInterfaceProcessAssertionForPlugin:(id)arg1 ;
-(id)decodeOutData:(id)arg1 ;
-(void)sendToRemoteInterface:(id)arg1 call:(/*^block*/id)arg2 ;
-(id)decodeProtoData:(id)arg1 ;
-(void)removeApplicationWithBundleID:(id)arg1 installer:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)launchSockPuppetAppQueue;
-(void)_launchSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)launchRequestIsOutstanding;
-(char)cancelOutstandingLaunchRequests;
-(void)setLaunchRequestIsOutstanding:(char)arg1 ;
-(void)setCancelOutstandingLaunchRequests:(char)arg1 ;
-(NSMutableDictionary *)dateOfFirstAttemptToLaunchGizmoAppsByBundleID;
-(void)setDateOfFirstAttemptToLaunchGizmoAppsByBundleID:(NSMutableDictionary *)arg1 ;
-(void)setApplicationIDForXcodeProcessAssertion:(id)arg1 ;
-(void)releaseProcessAssertionForXcode;
-(void)sendAndTrackTransactionDict:(id)arg1 withCompletion:(id)arg2 ;
-(void)releaseProcessAssertion:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)remoteInterfaceProcessAssertionsQueue;
-(NSMutableDictionary *)remoteInterfaceProcessAssertions;
-(id)logStringArray:(id)arg1 ;
-(id)decodeInData:(id)arg1 ;
-(double)timingTest_IDSReceiveTime;
-(double)timingTest_IDSSendTime;
-(void)sendProtoData:(id)arg1 toCompanionApplication:(id)arg2 fromIdentifier:(id)arg3 ;
-(void)handleIncomingProtoPlist:(id)arg1 ;
-(void)handleIncomingPlist:(id)arg1 ;
-(void)setTimingTest_IDSReceiveTime:(double)arg1 ;
-(void)handleIncomingData:(id)arg1 ;
-(void)_applicationActivated:(id)arg1 ;
-(void)_applicationDeactivated:(id)arg1 ;
-(void)sendData:(id)arg1 toApplication:(id)arg2 ;
-(id)transactionDictForID:(id)arg1 removeFromOutstanding:(char)arg2 ;
-(void)sendData:(id)arg1 toCompanionApplication:(id)arg2 fromIdentifier:(id)arg3 ;
-(void)takeProcessAssertion:(id)arg1 ;
-(void)releaseRemoteInterfaceAssertionsForPluginIdentifer:(id)arg1 ;
-(void)setPlugInIdentifierForXcodeProcessAssertion:(NSString *)arg1 ;
-(id)batteryStateObserver;
-(void)setBatteryStateObserver:(id)arg1 ;
-(void)updateGizmoApplicationsWithCompletion:(/*^block*/id)arg1 ;
-(void)installApplicationIfNeeded:(id)arg1 newGizmo:(char)arg2 ;
-(char)isAlwaysInstallMode;
-(unsigned)nextTransactionID;
-(void)setNextTransactionID:(unsigned)arg1 ;
-(NSMutableDictionary *)outstandingtransactions;
-(void)setOutstandingtransactions:(NSMutableDictionary *)arg1 ;
-(void)incomingData:(id)arg1 ;
-(void)logDataSentToGizmo:(unsigned)arg1 application:(id)arg2 ;
-(void)incomingProtobuf:(id)arg1 ;
-(NSDate *)dateOfFirstUnlock;
-(char)showUserNotificationWithTitle:(id)arg1 message:(id)arg2 ;
-(void)notifyGizmoContainerApplicationInstalled:(id)arg1 ;
-(void)setQueueRemote:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_source>)gizmoApplicationsUpdateTimer;
-(void)setGizmoApplicationsUpdateTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSString *)activeApplication;
-(void)setActiveApplication:(NSString *)arg1 ;
-(void)setProcessAssertionForXcodeQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BKSProcessAssertion *)processAssertionForXcode;
-(void)setProcessAssertionForXcode:(BKSProcessAssertion *)arg1 ;
-(void)setRemoteInterfaceProcessAssertionsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setRemoteInterfaceProcessAssertions:(NSMutableDictionary *)arg1 ;
-(void)setLaunchSockPuppetAppQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLogLevel:(id)arg1 ;
-(char)paired;
-(void)setPaired:(char)arg1 ;
-(NSObject*<OS_dispatch_queue>)transactionQueue;
-(void)setTransactionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)run;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)sendCacheRequest:(id)arg1 identifier:(id)arg2 ;
-(void)sendData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3 ;
-(void)fetchNotificationForNotificationID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendTimingData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3 index:(int)arg4 ;
-(void)launchCompanionAppForGizmoAppWithIdentifier:(id)arg1 withUserInfoData:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)remoteInterfaceDidDeactivate:(id)arg1 ;
-(void)_setupSignalHandlers;
-(id)_setupSignal:(int)arg1 handler:(/*^block*/id)arg2 ;
-(void)daemonManagerWillEndXPCTransaction;
-(void)fetchInstalledGlancesWithCompletion:(/*^block*/id)arg1 ;
-(void)installAllApplicationsForProcessWithIdentifier:(id)arg1 ;
-(void)cancelPendingInstallations;
-(void)installApplicationWithIdentifier:(id)arg1 installer:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeApplicationWithIdentifier:(id)arg1 installer:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchApplicationWithContainingApplicationBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchWatchAppBundleURLWithinCompanionAppWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)launchSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)terminateSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSockPuppetAppRunningStatusForCompanionAppWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getCompanionExtensionPIDForCompanionAppWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)showUserNotification:(int)arg1 applicationName:(id)arg2 ;
-(void)hideUserNotification;
-(void)wakeExtensionForWatchApp:(id)arg1 ;
-(void)installProvisioningProfileWithName:(id)arg1 profileData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAlwaysInstall:(id)arg1 ;
-(void)getAlwaysInstallWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchInstalledApplicationsWithCompletion:(/*^block*/id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)logDictionary:(id)arg1 ;
-(char)isPaired;
-(void)syncCoordinatorDidReceiveStartSyncCommand:(id)arg1 ;
-(void)setProcessAssertion:(BKSProcessAssertion *)arg1 ;
-(BKSProcessAssertion *)processAssertion;
@end

