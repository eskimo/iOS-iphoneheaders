/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:50 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/sbin/wirelessproxd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BTLEServer/CBPeripheralDelegate.h>
#import <wirelessproxd/DBPeripheralDelegate.h>
#import <wirelessproxd/XPCConnectionDelegate.h>

@class XPCConnection, CBPeripheral, CBCharacteristic, NSString, NSMutableData;

@interface WPDTransfer : NSObject <CBPeripheralDelegate, DBPeripheralDelegate, XPCConnectionDelegate> {

	BOOL _scanning;
	BOOL _advertising;
	BOOL _advertiserConnected;
	BOOL _sendingTransferComplete;
	BOOL _unsubscribeComing;
	BOOL _disconnectingFromAdvertiser;
	XPCConnection* _connection;
	CBPeripheral* _connectingPeripheral;
	CBCharacteristic* _writeCharacteristic;
	NSString* _processName;
	NSMutableData* _dataToSend;
	int _sentPacketSize;

}

@property (__weak) XPCConnection * connection;                          //@synthesize connection=_connection - In the implementation block
@property (retain) CBPeripheral * connectingPeripheral;                 //@synthesize connectingPeripheral=_connectingPeripheral - In the implementation block
@property (retain) CBCharacteristic * writeCharacteristic;              //@synthesize writeCharacteristic=_writeCharacteristic - In the implementation block
@property (retain) NSString * processName;                              //@synthesize processName=_processName - In the implementation block
@property (assign) BOOL scanning;                                       //@synthesize scanning=_scanning - In the implementation block
@property (assign) BOOL advertising;                                    //@synthesize advertising=_advertising - In the implementation block
@property (assign) BOOL advertiserConnected;                            //@synthesize advertiserConnected=_advertiserConnected - In the implementation block
@property (assign) BOOL sendingTransferComplete;                        //@synthesize sendingTransferComplete=_sendingTransferComplete - In the implementation block
@property (assign) BOOL unsubscribeComing;                              //@synthesize unsubscribeComing=_unsubscribeComing - In the implementation block
@property (assign) BOOL disconnectingFromAdvertiser;                    //@synthesize disconnectingFromAdvertiser=_disconnectingFromAdvertiser - In the implementation block
@property (retain) NSMutableData * dataToSend;                          //@synthesize dataToSend=_dataToSend - In the implementation block
@property (assign) int sentPacketSize;                                  //@synthesize sentPacketSize=_sentPacketSize - In the implementation block
-(void)centralStateChanged;
-(id)initWithConnection:(id)arg1 processName:(id)arg2 ;
-(void)transferPeripheralDiscovered:(id)arg1 ;
-(void)peripheralDidConnect:(id)arg1 ;
-(void)peripheralDidDisconnect:(id)arg1 ;
-(void)peripheralDidFailToConnect:(id)arg1 ;
-(void)peripheralStateChanged;
-(BOOL)advertising;
-(BOOL)advertiserConnected;
-(void)setScanning:(BOOL)arg1 ;
-(void)setAdvertising:(BOOL)arg1 ;
-(id)dataToSend;
-(void)sendValueByUpdatingCharacteristic;
-(void)setUnsubscribeComing:(BOOL)arg1 ;
-(id)connectingPeripheral;
-(id)writeCharacteristic;
-(void)setSendingTransferComplete:(BOOL)arg1 ;
-(void)setDisconnectingFromAdvertiser:(BOOL)arg1 ;
-(void)msgStartScan;
-(void)msgStopScan;
-(void)msgStartAdvertising;
-(void)msgStopAdvertising;
-(void)msgSendData:(id)arg1 ;
-(void)msgCloseTransfer;
-(void)setWriteCharacteristic:(id)arg1 ;
-(void)setDataToSend:(id)arg1 ;
-(void)setSentPacketSize:(int)arg1 ;
-(int)sentPacketSize;
-(void)setAdvertiserConnected:(BOOL)arg1 ;
-(BOOL)unsubscribeComing;
-(void)setConnectingPeripheral:(id)arg1 ;
-(BOOL)disconnectingFromAdvertiser;
-(void)transferNeedsData;
-(BOOL)sendingTransferComplete;
-(void)couldntStartAdvertising;
-(void)startedAdvertising;
-(void)couldntAddService;
-(void)dataArrived:(id)arg1 ;
-(void)flowControlReady;
-(void)clientSubscribed;
-(void)clientUnsubscribed:(id)arg1 ;
-(void)setProcessName:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)processName;
-(void).cxx_destruct;
-(id)connection;
-(void)setConnection:(id)arg1 ;
-(BOOL)scanning;
-(void)peripheral:(id)arg1 didDiscoverServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)sendData:(id)arg1 ;
-(void)messageArrived:(id)arg1 ;
-(void)connectionDied;
@end
