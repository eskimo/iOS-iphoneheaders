/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSArray, PSListController;

@interface SignatureEditingPane : PSListController {

	NSArray* _defaultSignatureSpecifiers;
	NSArray* _accountSignaturesSpecifiers;
	PSListController* _parentListController;
	BOOL _useAccountSignatures;
	BOOL _singleAccountActive;

}

@property (assign,nonatomic) PSListController * parentListController;              //@synthesize parentListController=_parentListController - In the implementation block
+(BOOL)hasMultipleMailAccounts;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)suspend;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setParentListController:(PSListController *)arg1 ;
-(PSListController *)parentListController;
-(void)_setSignature:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_signatureWithSpecifier:(id)arg1 ;
-(void)_setAccountSignature:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_accountSignatureWithSpecifier:(id)arg1 ;
-(id)accountSignaturesSpecifiers;
-(id)defaultSignatureSpecifiers;
-(void)commitChangesAndDismissKeyboard:(BOOL)arg1 ;
-(id)specifiers;
@end

