/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:13 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/WiFiCallingSettingsBundle.bundle/WiFiCallingSettingsBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface PHSettingsWiFiCallingController : PSListController
-(void)setWiFiCallsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)_termsAndConditions;
-(BOOL)_isAddressOnFile;
-(BOOL)_isTermsAndConditionsStatusOnFile;
-(id)_termsAndConditionsURL;
-(id)_termsAndConditionsBody;
-(id)_addressBody;
-(void)showCarrierWebViewControllerWithURL:(id)arg1 body:(id)arg2 ;
-(id)getWiFiCallsEnabled:(id)arg1 ;
-(BOOL)_isAddressConfigurable;
-(void)callCapabilitiesChanged:(id)arg1 ;
-(BOOL)shouldShowEmergencyAddress;
-(id)_addressInfo;
-(void)changeEmergencyAddress:(id)arg1 ;
-(id)_addressURL;
-(void)dealloc;
-(id)init;
-(void)applicationDidResume;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
@end

