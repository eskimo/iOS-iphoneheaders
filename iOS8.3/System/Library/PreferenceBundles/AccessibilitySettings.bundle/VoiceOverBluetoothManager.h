/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:34:03 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
@class NSMutableDictionary;

@interface VoiceOverBluetoothManager : NSObject {

	BTLocalDeviceImplRef _localDevice;
	BTSessionImplRef _session;
	int _available;
	unsigned _authorizedServices;
	char _audioConnected;
	char _scanningEnabled;
	BTDiscoveryAgentImplRef _discoveryAgent;
	BTPairingAgentImplRef _pairingAgent;
	NSMutableDictionary* _btAddrDict;
	NSMutableDictionary* _btDeviceDict;

}

@property (assign,nonatomic) unsigned authorizedServices;              //@synthesize authorizedServices=_authorizedServices - In the implementation block
+(id)sharedInstance;
+(int)lastInitError;
-(void)setAuthorizedServices:(unsigned)arg1 ;
-(void)_cleanup:(char)arg1 ;
-(unsigned)authorizedServicesForDevice:(id)arg1 ;
-(unsigned)authorizedServices;
-(id)deviceForAddressString:(id)arg1 ;
-(void)setDevicePairingEnabled:(char)arg1 ;
-(void)setDeviceScanningEnabled:(char)arg1 ;
-(void)resetDeviceScanning;
-(id)pairedDevices;
-(char)isServiceSupported:(unsigned)arg1 ;
-(void)cancelPairing;
-(void)dealloc;
-(id)init;
-(void)postNotificationName:(id)arg1 object:(id)arg2 ;
-(char)setEnabled:(char)arg1 ;
-(void)postNotification:(id)arg1 ;
-(char)enabled;
-(void)_powerChanged;
-(char)wasDeviceDiscovered:(id)arg1 ;
-(void)_removeDevice:(id)arg1 ;
-(id)connectingDevices;
-(void)acceptSSP:(int)arg1 forDevice:(id)arg2 ;
-(void)setConnectable:(char)arg1 ;
-(char)_setup:(BTSessionImplRef)arg1 ;
-(void)connectDevice:(id)arg1 ;
-(void)connectDevice:(id)arg1 withServices:(unsigned)arg2 ;
-(void)setPincode:(id)arg1 forDevice:(id)arg2 ;
-(void)unpairDevice:(id)arg1 ;
-(char)_attach:(id)arg1 ;
-(void)_postNotificationWithArray:(id)arg1 ;
-(char)devicePairingEnabled;
-(id)addDeviceIfNeeded:(BTDeviceImplRef)arg1 ;
-(char)_onlySensorsConnected;
-(void)postNotificationName:(id)arg1 object:(id)arg2 error:(id)arg3 ;
-(char)isAnyoneScanning;
-(char)deviceScanningEnabled;
-(void)_restartScan;
-(void)_discoveryStateChanged;
-(char)connectable;
-(void)_connectedStatusChanged;
-(void)_connectabilityChanged;
-(char)audioConnected;
-(void)setAudioConnected:(char)arg1 ;
-(void)setDiscoverable:(char)arg1 ;
-(char)setPowered:(char)arg1 ;
-(char)available;
-(char)powered;
-(void)_postNotification:(id)arg1 ;
-(char)isDiscoverable;
-(int)powerState;
-(char)connected;
@end

