/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:20 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sharing/SFCompanionConnectionManagerClient.h>
#import <Sharing/SFCompanionXPCManagerObserver.h>

@protocol SFCompanionConnectionDelegate, OS_dispatch_queue, SFCompanionConnectionManagerProtocol;
@class SFCompanionService, SFCompanionInterface, SFCompanionDevice, NSString, NSObject, NSXPCConnection;

@interface SFCompanionConnection : NSObject <SFCompanionConnectionManagerClient, SFCompanionXPCManagerObserver> {

	BOOL _waitForAccept;
	BOOL _invalid;
	id<SFCompanionConnectionDelegate> _delegate;
	unsigned long long _status;
	SFCompanionService* _service;
	SFCompanionInterface* _exportedInterface;
	id _exportedObject;
	SFCompanionInterface* _remoteObjectInterface;
	SFCompanionDevice* _connectedDevice;
	NSString* _connectionID;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSXPCConnection* _userConnection;
	id<SFCompanionConnectionManagerProtocol> _connectionProxy;

}

@property (assign) id<SFCompanionConnectionDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign) unsigned long long status;                                             //@synthesize status=_status - In the implementation block
@property (retain) SFCompanionService * service;                                          //@synthesize service=_service - In the implementation block
@property (retain) SFCompanionInterface * exportedInterface;                              //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (retain) id exportedObject;                                                     //@synthesize exportedObject=_exportedObject - In the implementation block
@property (retain) SFCompanionInterface * remoteObjectInterface;                          //@synthesize remoteObjectInterface=_remoteObjectInterface - In the implementation block
@property (nonatomic,retain) SFCompanionDevice * connectedDevice;                         //@synthesize connectedDevice=_connectedDevice - In the implementation block
@property (assign) BOOL waitForAccept;                                                    //@synthesize waitForAccept=_waitForAccept - In the implementation block
@property (nonatomic,copy,readonly) NSString * connectionID;                              //@synthesize connectionID=_connectionID - In the implementation block
@property (assign) NSObject*<OS_dispatch_queue> workQueue;                                //@synthesize workQueue=_workQueue - In the implementation block
@property (assign) BOOL invalid;                                                          //@synthesize invalid=_invalid - In the implementation block
@property (retain) NSXPCConnection * userConnection;                                      //@synthesize userConnection=_userConnection - In the implementation block
@property (retain) id<SFCompanionConnectionManagerProtocol> connectionProxy;              //@synthesize connectionProxy=_connectionProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)exportedObject;
-(SFCompanionInterface *)remoteObjectInterface;
-(void)dealloc;
-(void)setDelegate:(id<SFCompanionConnectionDelegate>)arg1 ;
-(id<SFCompanionConnectionDelegate>)delegate;
-(void)invalidate;
-(void)suspend;
-(SFCompanionInterface *)exportedInterface;
-(void)setRemoteObjectInterface:(SFCompanionInterface *)arg1 ;
-(void)resume;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(void)connect;
-(void)setExportedInterface:(SFCompanionInterface *)arg1 ;
-(void)setExportedObject:(id)arg1 ;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
-(NSString *)connectionID;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(SFCompanionService *)service;
-(void)setService:(SFCompanionService *)arg1 ;
-(id)initWithService:(id)arg1 ;
-(void)setInvalid:(BOOL)arg1 ;
-(BOOL)invalid;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setConnectionProxy:(id<SFCompanionConnectionManagerProtocol>)arg1 ;
-(id<SFCompanionConnectionManagerProtocol>)connectionProxy;
-(void)xpcManagerConnectionInterrupted;
-(void)connectionResumed;
-(void)setupWorkQueue;
-(void)onqueue_resume;
-(BOOL)waitForAccept;
-(void)onqueue_proxyHandler:(id)arg1 ;
-(void)onqueue_invalidate;
-(void)onqueue_setupUserConnection:(id)arg1 ;
-(void)invalidationCallback;
-(void)onqueue_openXPCConnection;
-(void)onqueue_userInvalidated;
-(id)initWithConnectionID:(id)arg1 ;
-(id)initWithDevice:(id)arg1 serviceType:(id)arg2 delegate:(id)arg3 ;
-(id)initWithDevice:(id)arg1 connectionID:(id)arg2 serviceType:(id)arg3 delegate:(id)arg4 ;
-(BOOL)sendData:(id)arg1 withErrorHandler:(/*^block*/id)arg2 ;
-(void)sendData:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(SFCompanionDevice *)connectedDevice;
-(void)setConnectedDevice:(SFCompanionDevice *)arg1 ;
-(void)setWaitForAccept:(BOOL)arg1 ;
-(NSXPCConnection *)userConnection;
-(void)setUserConnection:(NSXPCConnection *)arg1 ;
@end

