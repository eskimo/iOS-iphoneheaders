/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>
#import <DataDetectorsUI/MFMailComposeViewControllerDelegate.h>

@class PSSpecifier, NSMutableArray, ACAccount, MFMailComposeViewController, NSMutableDictionary;

@interface AADocumentsDataController : ACUIViewController <MFMailComposeViewControllerDelegate> {

	PSSpecifier* _docsAndDataSpecifier;
	NSMutableArray* _appSpecifiers;
	NSMutableArray* _cellularSpecifiers;
	NSMutableArray* _logsSpecifiers;
	ACAccount* _appleAccount;
	bool _isFirstSetup;
	MFMailComposeViewController* _mailComposeController;
	NSMutableDictionary* _enabledByAppID;
	NSMutableDictionary* _bundleByAppID;

}

@property (retain) MFMailComposeViewController * mailComposeController;              //@synthesize mailComposeController=_mailComposeController - In the implementation block
@property (retain) NSMutableDictionary * enabledByAppID;                             //@synthesize enabledByAppID=_enabledByAppID - In the implementation block
@property (retain) NSMutableDictionary * bundleByAppID;                              //@synthesize bundleByAppID=_bundleByAppID - In the implementation block
-(void)_confirmDisableDocsAndData;
-(id)mailComposeController;
-(void)diagnoseDocumentsAndData:(id)arg1 ;
-(void)setBundleByAppID:(id)arg1 ;
-(void)setEnabledByAppID:(id)arg1 ;
-(void)_setUseCellular:(id)arg1 forSpecifier:(id)arg2 ;
-(void)_setDocumentsAndDataEnabled:(bool)arg1 ;
-(id)_documentsAndDataEnabled:(id)arg1 ;
-(void)setMailComposeController:(id)arg1 ;
-(id)bundleByAppID;
-(id)_appleAccount;
-(id)enabledByAppID;
-(void)setAppPermissionEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)appPermissionEnabledForSpecifier:(id)arg1 ;
-(void)_setDocumentsAndDataEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(void)composeEmailDocumentsAndDataDiagnosticsURL:(id)arg1 ;
-(id)_useCellular:(id)arg1 ;
-(id)appSpecifiers;
-(void)viewDidLoad;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void).cxx_destruct;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(id)specifiers;
@end
