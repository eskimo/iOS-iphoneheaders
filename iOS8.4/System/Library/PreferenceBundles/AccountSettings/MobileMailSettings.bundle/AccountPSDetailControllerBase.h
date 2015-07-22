/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@class NSMutableDictionary, NSDictionary, MFAccount, MFAccountValidator, MFConnectionSettings, NSString, UIResponder;

@interface AccountPSDetailControllerBase : ACUIViewController {

	NSMutableDictionary* _accountValues;
	NSMutableDictionary* _originalAccountValues;
	NSDictionary* _accountValuesAfterFailedValidation;
	MFAccount* _account;
	MFAccountValidator* _accountValidator;
	MFConnectionSettings* _originalConnectionSettings;
	unsigned _validating : 1;
	unsigned _attemptedValidation : 1;
	NSString* _initialTitle;
	UIResponder* _lastFirstResponder;

}

@property (nonatomic,retain) MFAccount * account;                                          //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accountValues;                          //@synthesize accountValues=_accountValues - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * originalAccountValues;                  //@synthesize originalAccountValues=_originalAccountValues - In the implementation block
@property (nonatomic,copy) NSDictionary * accountValuesAfterFailedValidation;              //@synthesize accountValuesAfterFailedValidation=_accountValuesAfterFailedValidation - In the implementation block
@property (nonatomic,retain) MFAccountValidator * accountValidator;                        //@synthesize accountValidator=_accountValidator - In the implementation block
+(id)normalizeAccountProperties:(id)arg1 withAccountClass:(Class)arg2 ;
-(void)saveAndDismiss;
-(void)dealloc;
-(void)suspend;
-(void)viewDidLoad;
-(id)setOfKeysForAlteredValuesInDictionary:(id)arg1 originalDictionary:(id)arg2 ;
-(id)fixAccountInputValues:(id)arg1 ;
-(void)sendPreferencesChangedNotificationForChangedValues;
-(void)setViewsEnabled:(BOOL)arg1 ;
-(int)validateAccount;
-(id)existingAccountForAccountValues:(id)arg1 ;
-(int)validateAccount:(id)arg1 withFallbacks:(BOOL)arg2 ;
-(MFAccountValidator *)accountValidator;
-(BOOL)haveEnoughValues;
-(void)didFinishSaveAccountAnywaysSheetWithResult:(BOOL)arg1 ;
-(void)sendPreferencesChangedNotificationForKey:(id)arg1 ;
-(void)validateForExistingAccount;
-(void)validateForNewAccount;
-(void)handleValidAccount:(id)arg1 ;
-(void)handleInvalidAccount:(id)arg1 ;
-(void)cancelAccountValidation;
-(NSMutableDictionary *)accountValues;
-(NSMutableDictionary *)originalAccountValues;
-(void)doneButtonClickedForNewAccount;
-(void)doneButtonClickedForExistingAccount;
-(void)setAccountValidator:(MFAccountValidator *)arg1 ;
-(NSDictionary *)accountValuesAfterFailedValidation;
-(void)displaySaveAccountAnywaysAlertSheet;
-(void)setAccountValuesAfterFailedValidation:(NSDictionary *)arg1 ;
-(void)_redirectToRecoveryURL:(id)arg1 ;
-(void)_promptUserForWebLoginForAccount:(id)arg1 accountValidator:(id)arg2 error:(id)arg3 ;
-(void)_presentAlertForAccount:(id)arg1 accountValidator:(id)arg2 error:(id)arg3 ;
-(int)validateAccountUsingFallbacks;
-(void)displaySSLAlertForAccount:(id)arg1 ;
-(void)setAccountValues:(NSMutableDictionary *)arg1 ;
-(void)setOriginalAccountValues:(NSMutableDictionary *)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
-(void)confirmationView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(MFAccount *)account;
-(void)setAccount:(MFAccount *)arg1 ;
-(Class)accountClass;
-(void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(BOOL)arg3 ;
@end
