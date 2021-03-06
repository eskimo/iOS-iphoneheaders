/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:13 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/WirelessModemSettings.bundle/WirelessModemSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WirelessModemSettings/WirelessModemSettings-Structs.h>
#import <Preferences/PSListController.h>

@class UIAlertView, PSSpecifier;

@interface WirelessModemController : PSListController {

	WiFiManagerClientRef _wifiClient;
	WiFiDeviceClientRef _wifiDevice;
	BOOL _waitingOnBTPower;
	BOOL _waitingOnWifiPower;
	BOOL _wifiTetheringSupported;
	BOOL _wifiIsWAPI;
	BOOL _showBTPowerPrompt;
	UIAlertView* _powerAlert;
	PSSpecifier* _tetheringGroupSpec;
	PSSpecifier* _tetheringSwitchSpec;
	PSSpecifier* _currentDeviceSpecifier;
	CGRect _lastSuperviewBounds;
	Class _btPairControllerClass;
	Class _btPairSetupClass;
	Class _btSSPRequestClass;
	Class _btAlertClass;
	Class _btClassicDeviceClass;
	id _btSSPAlert;
	id _btAlert;

}
-(void)cleanupPairing;
-(void)_btSSPConfirmationHandler:(id)arg1 ;
-(void)_btSSPNumericComparisonHandler:(id)arg1 ;
-(void)_btSSPPasskeyDisplayHandler:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)alertSheetDismissed:(id)arg1 ;
-(void)_setWiFiPassword:(id)arg1 ;
-(id)_wiFiPassword;
-(id)wifiPassword:(id)arg1 ;
-(void)applicationWillResignOrTerminate:(id)arg1 ;
-(void)_misStateChangedHandler:(id)arg1 ;
-(void)_btPowerChangedHandler:(id)arg1 ;
-(void)_btAuthenticationRequestHandler:(id)arg1 ;
-(void)_btDevicePairedHandler:(id)arg1 ;
-(void)allowWirelessConnections:(BOOL)arg1 ;
-(void)_updateTetheringText:(BOOL)arg1 ;
-(void)_wiFiPowerChangedHandler;
-(void)_btPinRequestHandler:(id)arg1 ;
-(BOOL)_wiFiPower;
-(id)internetTethering:(id)arg1 ;
-(void)setInternetTethering:(id)arg1 specifier:(id)arg2 ;
-(id)specifiers;
@end

