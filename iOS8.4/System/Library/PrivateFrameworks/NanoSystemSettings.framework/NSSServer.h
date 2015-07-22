/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/nanosystemsettingsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <nanosystemsettingsd/IDSServiceDelegate.h>
#import <nanosystemsettingsd/NSSConnectionHandlerDelegate.h>
#import <nanosystemsettingsd/NSSIDSServiceDelegate.h>
#import <nanosystemsettingsd/NSXPCListenerDelegate.h>
#import <nanosystemsettingsd/NSSServerProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSXPCListener, NSMutableArray, NSMutableDictionary, IDSService, NSString;

@interface NSSServer : NSObject <IDSServiceDelegate, NSSConnectionHandlerDelegate, NSSIDSServiceDelegate, NSXPCListenerDelegate, NSSServerProtocol> {

	NSObject*<OS_dispatch_queue> _idsQueue;
	NSXPCListener* _listener;
	NSMutableArray* _connections;
	NSObject*<OS_dispatch_queue> _modifyingConnectionsQueue;
	NSObject*<OS_dispatch_source> _vmPressureHandler;
	NSObject*<OS_dispatch_queue> _airplaneModeQueue;
	NSMutableDictionary* _airplaneModeDeliveryTimers;

}

@property (nonatomic,readonly) IDSService * idsService; 
@property (nonatomic,readonly) BOOL isDefaultPairedDeviceNearby; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> idsQueue;                               //@synthesize idsQueue=_idsQueue - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                                            //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSMutableArray * connections;                                        //@synthesize connections=_connections - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> modifyingConnectionsQueue;              //@synthesize modifyingConnectionsQueue=_modifyingConnectionsQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> vmPressureHandler;                     //@synthesize vmPressureHandler=_vmPressureHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> airplaneModeQueue;                      //@synthesize airplaneModeQueue=_airplaneModeQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * airplaneModeDeliveryTimers;                    //@synthesize airplaneModeDeliveryTimers=_airplaneModeDeliveryTimers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)associateProtobufHandlers:(id)arg1 ;
+(Class)connectionHandlerClass;
+(void)tellRadiosPrefsToEnableAirplaneMode:(BOOL)arg1 ;
+(double)mirrorAirplaneSendTimeout;
-(NSObject*<OS_dispatch_queue>)idsQueue;
-(void)earlyIvarInitialzation;
-(BOOL)handleDarwinNotification:(id)arg1 ;
-(void)handleMemoryPressureEvent;
-(id)sendRequest:(id)arg1 expectsResponse:(BOOL)arg2 replyBlock:(id)arg3 replyDictionary:(id)arg4 sendTimeout:(double)arg5 wantsAcknowledgement:(BOOL)arg6 bypassDuet:(BOOL)arg7 ;
-(id)sendMessage:(id)arg1 identifier:(id*)arg2 sendTimeout:(double)arg3 enforceRemoteTimeout:(BOOL)arg4 wantsAcknowledgement:(BOOL)arg5 queueOneIdentifier:(id)arg6 overBluetoothOnly:(BOOL)arg7 ;
-(id)sendProtobuf:(id)arg1 options:(id)arg2 identifier:(id*)arg3 ;
-(BOOL)messageIdentifier:(id)arg1 didSendWithSuccess:(BOOL)arg2 error:(id)arg3 ;
-(BOOL)scheduleTimerForIdentifier:(id)arg1 requests:(id)arg2 timeout:(double)arg3 timeoutHandler:(/*^block*/id)arg4 timers:(id)arg5 utilityName:(id)arg6 ;
-(BOOL)messageIdentifier:(id)arg1 hasBeenDeliveredWithContext:(id)arg2 ;
-(void)cancelTimerForIdentifier:(id)arg1 timers:(id)arg2 utilityName:(id)arg3 ;
-(void)connectionHandlerLostConnection:(id)arg1 ;
-(void)initializeIDS;
-(void)handleAirplaneModeMsg:(id)arg1 ;
-(void)failedToMirrorAirplaneMode;
-(void)displayAirplaneModeMirroringUserEducationAlertIfNeeded;
-(id)sendResponse:(id)arg1 forRequest:(id)arg2 identifier:(id*)arg3 bypassDuet:(BOOL)arg4 ;
-(void)setIdsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)modifyingConnectionsQueue;
-(void)setModifyingConnectionsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_source>)vmPressureHandler;
-(void)setVmPressureHandler:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_queue>)airplaneModeQueue;
-(void)setAirplaneModeQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)airplaneModeDeliveryTimers;
-(void)setAirplaneModeDeliveryTimers:(NSMutableDictionary *)arg1 ;
-(BOOL)isDefaultPairedDeviceNearby;
-(NSMutableArray *)connections;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)enableAirplaneMode:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4 ;
-(IDSService *)idsService;
-(id)systemBuildVersion;
-(void)setConnections:(NSMutableArray *)arg1 ;
@end
