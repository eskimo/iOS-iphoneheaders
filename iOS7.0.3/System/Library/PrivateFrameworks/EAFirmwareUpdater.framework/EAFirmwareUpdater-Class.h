/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileAssetUpdater/MobileAssetUpdater.h>
#import <EAFirmwareUpdater/EAAccessoryDelegate.h>
#import <CoreFoundation/NSStreamDelegate.h>
#import <EAFirmwareUpdater/iAUPServerDelegate.h>

@protocol OS_dispatch_queue;
@class EAAccessory, NSString, EASession, NSURL, NSMutableData, iAUPServer, NSObject, NSTimer;

@interface EAFirmwareUpdater : MobileAssetUpdater <EAAccessoryDelegate, NSStreamDelegate, iAUPServerDelegate> {

	unsigned _productIDCode;
	EAAccessory* _accessory;
	NSString* _protocolString;
	EASession* _session;
	NSString* _bootloaderProtocol;
	NSString* _appProtocol;
	unsigned _firmwareVersionMajor;
	unsigned _firmwareVersionMinor;
	unsigned _firmwareVersionRelease;
	NSString* _firmwareBundleFilename;
	NSURL* _firmwareBundleURL;
	/*^block*/ id _applyCompletion;
	/*^block*/ id _progressHandler;
	NSMutableData* _outputData;
	iAUPServer* _iAUPServer;
	NSObject<OS_dispatch_queue>* _eaNotificationDispatchQueue;
	BOOL _firmwareUpdateComplete;
	BOOL _isExpectingReconnect;
	NSTimer* _reconnectTimer;
	NSString* _updateBundleFilename;
	NSURL* _updateBundleURL;

}

@property (assign,nonatomic) unsigned productIDCode;                         //@synthesize productIDCode=_productIDCode - In the implementation block
@property (nonatomic,retain) EAAccessory * accessory;                        //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,retain) NSString * protocolString;                      //@synthesize protocolString=_protocolString - In the implementation block
@property (nonatomic,retain) EASession * session;                            //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSString * bootloaderProtocol;                  //@synthesize bootloaderProtocol=_bootloaderProtocol - In the implementation block
@property (nonatomic,retain) NSString * appProtocol;                         //@synthesize appProtocol=_appProtocol - In the implementation block
@property (nonatomic,retain) NSString * firmwareBundleFilename;              //@synthesize updateBundleFilename=_updateBundleFilename - In the implementation block
@property (nonatomic,retain) NSURL * firmwareBundleURL;                      //@synthesize updateBundleURL=_updateBundleURL - In the implementation block
@property (nonatomic,copy) id applyCompletion;                               //@synthesize applyCompletion=_applyCompletion - In the implementation block
@property (nonatomic,retain) iAUPServer * server;                            //@synthesize iAUPServer=_iAUPServer - In the implementation block
+(id)bootloaderProtocolStringWithProductIDCode:(unsigned)arg1 ;
+(id)appProtocolStringWithProductIDCode:(unsigned)arg1 ;
+(id)findAccessoryWithProductIDCode:(unsigned)arg1 ;
-(id)session;
-(void)setSession:(id)arg1 ;
-(void)stream:(id)arg1 handleEvent:(unsigned)arg2 ;
-(void)accessoryDidDisconnect:(id)arg1 ;
-(void)_accessoryDidDisconnect:(id)arg1 ;
-(id)protocolString;
-(id)accessory;
-(void)dealloc;
-(id)server;
-(void)setServer:(id)arg1 ;
-(void)setProductIDCode:(unsigned)arg1 ;
-(BOOL)findAccessory;
-(void)stopReconnectTimer;
-(void)setAccessory:(id)arg1 ;
-(void)reconnectTimerDidFire:(id)arg1 ;
-(void)setBootloaderProtocol:(id)arg1 ;
-(void)setAppProtocol:(id)arg1 ;
-(id)supportedProtocolForAccessory:(id)arg1 ;
-(void)setProtocolString:(id)arg1 ;
-(id)bootloaderProtocol;
-(id)appProtocol;
-(void)setFirmwareBundleFilename:(id)arg1 ;
-(id)firmwareBundleFilename;
-(void)setFirmwareBundleURL:(id)arg1 ;
-(id)firmwareBundleURL;
-(void)_accessoryDidConnect:(id)arg1 ;
-(void)startReconnectTimer;
-(void)updateComplete:(id)arg1 ;
-(id)flushOutput;
-(/*^block*/ id)applyCompletion;
-(void)handleInputData;
-(void)logStatusString:(id)arg1 ;
-(void)firmwareUpdateComplete:(id)arg1 ;
-(id)initWithProductIDCode:(unsigned)arg1 assetType:(id)arg2 ;
-(id)overrideQueryPredicateFromDict:(id)arg1 ;
-(id)queryPredicate;
-(id)assetWithMaxVersion:(id)arg1 ;
-(id)validateAssetAttributes:(id)arg1 ;
-(id)validateAsset;
-(id)applyFirmware:(/*^block*/ id)arg1 progress:(/*^block*/ id)arg2 ;
-(unsigned)productIDCode;
-(void)setApplyCompletion:(/*^block*/ id)arg1 ;
-(id)openSession;
-(void)updateProgress:(double)arg1 ;
-(id)writeData:(id)arg1 ;
@end

