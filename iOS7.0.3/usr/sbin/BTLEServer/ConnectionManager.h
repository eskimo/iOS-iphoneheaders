/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/sbin/BTLEServer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AXHearingAidSupport/CBCentralManagerDelegate.h>

@class CBCentralManager, NSMutableDictionary, NSArray, NSMutableSet, TransactionAssertion;

@interface ConnectionManager : NSObject <CBCentralManagerDelegate> {

	CBCentralManager* _centralManager;
	NSMutableDictionary* _connectOnceIdentifiersMap;
	NSArray* _connectAlwaysIdentifiers;
	NSMutableSet* _blacklistedIdentifiers;
	TransactionAssertion* _connectionAssertion;
	NSArray* _peripherals;
	NSMutableDictionary* _clientServiceManagerMap;

}

@property (nonatomic,retain) NSArray * connectAlwaysIdentifiers;              //@synthesize connectAlwaysIdentifiers=_connectAlwaysIdentifiers - In the implementation block
@property (nonatomic,retain) NSArray * peripherals;                           //@synthesize peripherals=_peripherals - In the implementation block
+(id)instance;
-(void)connectAlways:(id)arg1 ;
-(void)connectOnce:(id)arg1 ;
-(void)connectionTimeout:(id)arg1 ;
-(void)refreshConnectionAssertion;
-(void)refreshPeripherals;
-(void)setConnectAlwaysIdentifiers:(id)arg1 ;
-(void)pairingDidFail:(id)arg1 ;
-(void)authDidSucceed:(id)arg1 ;
-(void)authDidFail:(id)arg1 ;
-(void)disconnectPeripheral:(id)arg1 force:(BOOL)arg2 ;
-(void)connectPeripheral:(id)arg1 ;
-(void)setPeripherals:(id)arg1 ;
-(id)peripheralForIdentifier:(id)arg1 ;
-(id)centralManagerStateString;
-(id)connectAlwaysIdentifiers;
-(id)peripherals;
-(id)init;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3 ;
@end

