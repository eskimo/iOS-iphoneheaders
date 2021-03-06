/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDAccountInfoProvider.h>

@class ACAccountStore, ACAccountType, CKDBackingAccount, CKDClientContext, NSString;

@interface CKDAccount : NSObject <CKDAccountInfoProvider> {

	BOOL _isUnitTestingAccount;
	BOOL _accountWantsPushRegistration;
	BOOL _isAnonymousAccount;
	BOOL _haveWarnedAboutServerPreferredPushEnvironment;
	ACAccountStore* _accountStore;
	ACAccountType* _acAccountType;
	CKDBackingAccount* _backingAccount;
	CKDClientContext* _context;

}

@property (nonatomic,readonly) NSString * accountIdentifier; 
@property (nonatomic,readonly) BOOL isFakeAccount; 
@property (assign,nonatomic) BOOL isUnitTestingAccount;                                       //@synthesize isUnitTestingAccount=_isUnitTestingAccount - In the implementation block
@property (assign,nonatomic) BOOL accountWantsPushRegistration;                               //@synthesize accountWantsPushRegistration=_accountWantsPushRegistration - In the implementation block
@property (nonatomic,readonly) BOOL allowsCellularAccess; 
@property (nonatomic,readonly) BOOL cloudKitIsEnabled; 
@property (nonatomic,readonly) BOOL cloudPhotosIsEnabled; 
@property (nonatomic,retain) ACAccountStore * accountStore;                                   //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) ACAccountType * acAccountType;                                   //@synthesize acAccountType=_acAccountType - In the implementation block
@property (nonatomic,readonly) NSString * accountID; 
@property (nonatomic,readonly) CKDBackingAccount * backingAccount;                            //@synthesize backingAccount=_backingAccount - In the implementation block
@property (assign,nonatomic,__weak) CKDClientContext * context;                               //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL isAnonymousAccount;                                         //@synthesize isAnonymousAccount=_isAnonymousAccount - In the implementation block
@property (assign,nonatomic) BOOL haveWarnedAboutServerPreferredPushEnvironment;              //@synthesize haveWarnedAboutServerPreferredPushEnvironment=_haveWarnedAboutServerPreferredPushEnvironment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(CKDClientContext *)context;
-(void)setContext:(CKDClientContext *)arg1 ;
-(id)languageCode;
-(id)containerID;
-(NSString *)accountID;
-(id)bundleID;
-(BOOL)allowsCellularAccess;
-(BOOL)isAnonymousAccount;
-(BOOL)canAccessAccount;
-(void)fetchContainerScopedUserIDUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)isUnitTestingAccount;
-(ACAccountStore *)accountStore;
-(id)serverPreferredPushEnvironment;
-(NSString *)accountIdentifier;
-(id)initAnonymousAccountWithContext:(id)arg1 ;
-(id)initFakeAccountWithEmail:(id)arg1 password:(id)arg2 context:(id)arg3 ;
-(id)initPrimaryAccountWithContext:(id)arg1 ;
-(void)setIsUnitTestingAccount:(BOOL)arg1 ;
-(BOOL)accountWantsPushRegistration;
-(void)setAccountWantsPushRegistration:(BOOL)arg1 ;
-(BOOL)cloudPhotosIsEnabled;
-(BOOL)cloudKitIsEnabled;
-(id)config;
-(BOOL)isFakeAccount;
-(id)containerScopedUserID;
-(id)applicationBundle;
-(id)mescalSession;
-(id)trafficContainerIdentifier;
-(id)hardwareID;
-(id)deviceName;
-(id)regionCode;
-(id)enabledKeyboards;
-(void)renewAuthTokenWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchConfigurationUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)resetMescalSession;
-(void)renewMescalSessionForRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2 ;
-(void)fetchPublicURLUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 serverType:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)dsid;
-(void)fetchDeviceIDUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)shouldFailAllTasks;
-(id)cloudKitAuthToken;
-(void)noteTimeSpentInNetworking:(double)arg1 ;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1 ;
-(id)iCloudAuthToken;
-(id)_initWithContext:(id)arg1 ;
-(CKDBackingAccount *)backingAccount;
-(BOOL)haveWarnedAboutServerPreferredPushEnvironment;
-(void)setHaveWarnedAboutServerPreferredPushEnvironment:(BOOL)arg1 ;
-(id)_urlBySettingCustomBaseURL:(id)arg1 onURL:(id)arg2 ;
-(void)noteFailedNetworkRequest;
-(void)noteFailedProtocolRequest;
-(id)initWithAccountID:(id)arg1 context:(id)arg2 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountType *)acAccountType;
-(void)setAcAccountType:(ACAccountType *)arg1 ;
-(void)setIsAnonymousAccount:(BOOL)arg1 ;
@end

