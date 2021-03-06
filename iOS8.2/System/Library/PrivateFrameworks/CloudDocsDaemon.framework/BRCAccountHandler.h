/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:40 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, BRCAccountHandlerDelegate;
@class BRCAccountSession, NSString, NSObject;

@interface BRCAccountHandler : NSObject {

	BRCAccountSession* _accountSession;
	NSString* _currentAccountID;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _migrationStatusSetterQueue;
	char _hasSetMigrationComplete;
	id<BRCAccountHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BRCAccountHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BRCAccountSession * accountSession;                       //@synthesize accountSession=_accountSession - In the implementation block
+(id)inSystemStoreAccountIDForUbiquityDataclass;
+(void)_migrateAccountIfNecessaryForAccountID:(id)arg1 ;
+(id)inSystemStoreAccountIDWithServiceValidation:(char)arg1 isServiceEnabled:(char*)arg2 didCompleteFirstSyncDown:(char*)arg3 ;
+(id)inSystemStoreAccountIDWithServiceValidation:(char)arg1 ;
+(char)isAccountStillUsingUbiquity;
-(void)setDelegate:(id<BRCAccountHandlerDelegate>)arg1 ;
-(id)init;
-(id<BRCAccountHandlerDelegate>)delegate;
-(BRCAccountSession *)accountSession;
-(void)setMigrationStatus:(char)arg1 forDSID:(id)arg2 shouldNotify:(char)arg3 ;
-(id)accountIDPath;
-(void)_watchAccountChanges;
-(id)onDiskAccountID;
-(void)_cleanupPushAndActivitiesStatesWhenNoSessionExists;
-(char)setOnDiskAccountID:(id)arg1 ;
-(char)_loadCurrentOnDiskAccountSessionWithError:(id*)arg1 ;
-(void)jetsamCloudDocsApps;
-(void)_destroyCurrentSessionSynchronously;
-(char)_createCurrentAccountSessionWithID:(id)arg1 error:(id*)arg2 ;
-(void)_handleAccountWillChange;
-(void)_handleAccountDidChange;
-(void)_updateAccountToAccountID:(id)arg1 ;
-(void)_updateAccount;
-(void)startAndLoadCurrentAccountSynchronously;
-(void)destroyCurrentSessionSynchronously;
-(char)createCurrentAccountSessionWithID:(id)arg1 error:(id*)arg2 ;
-(void)markMigrationCompletedForDSID:(id)arg1 ;
@end

