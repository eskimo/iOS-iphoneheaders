/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Accounts/Authentication/TencentWeiboAuthenticationPlugin.bundle/TencentWeiboAuthenticationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TencentWeiboAuthenticationPlugin/ACDAccountAuthenticationPlugin.h>
#import <TencentWeiboAuthenticationPlugin/SLTencentWeiboMigrationDialogListener.h>
#import <TencentWeiboAuthenticationPlugin/NSXPCListenerDelegate.h>

@protocol SLTencentWeiboMigrationDialogProtocol;
@class NSXPCListener, ACDClient, ACDAccountStore, ACAccount, ACAccountCredential, NSString;

@interface TEAuthenticationPlugin : NSObject <ACDAccountAuthenticationPlugin, SLTencentWeiboMigrationDialogListener, NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	id<SLTencentWeiboMigrationDialogProtocol> _migrationDialogProxy;
	ACDClient* _client;
	ACDAccountStore* _store;
	ACAccount* _account;
	ACAccountCredential* _cachedCredential;
	/*^block*/id _completionHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsAccountType:(id)arg1 ;
-(void)_renewMasterCredentialsForAccount:(id)arg1 accountStore:(id)arg2 reason:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)_renewClientCredentialsForAccount:(id)arg1 accountStore:(id)arg2 reason:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)showUserAlertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 textFieldTitle:(id)arg5 keyboardType:(id)arg6 withCompletionBlock:(/*^block*/id)arg7 ;
-(void)_displayBadCredentialsAlertForAccount:(id)arg1 clientName:(id)arg2 reason:(id)arg3 accountStore:(id)arg4 resetAuthenticatedOnAlertFailure:(BOOL)arg5 handler:(/*^block*/id)arg6 ;
-(void)_stopListeningForMigrationDialog;
-(void)_obtainPasswordForAccount:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)migrationDialogDidLaunch;
-(void)migrationDialogWasCanceled;
-(void)migrationDialogDidObtainPassword:(id)arg1 ;
-(void)_startListeningForMigrationDialog;
-(id)_errorForErrorCode:(id)arg1 ;
-(void)_authenticateAccount:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)md5:(id)arg1 ;
-(BOOL)_validateClientRenewalReturnObject:(id)arg1 ;
-(BOOL)_validateAuthenticationReturnObject:(id)arg1 ;
-(BOOL)_duplicateAccountExists:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 ;
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 reason:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

