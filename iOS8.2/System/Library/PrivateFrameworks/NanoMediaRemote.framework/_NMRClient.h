/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface _NMRClient : NSObject {

	NSXPCConnection* _serverConnection;
	NSObject*<OS_dispatch_queue> _serverConnectionQueue;

}
+(id)sharedClient;
-(id)init;
-(id)_proxy;
-(void)refreshMediaRemoteStateIfNecessary;
-(void)sendMediaRemoteCommand:(unsigned)arg1 withCommandOptions:(id)arg2 commandResultHandler:(/*^block*/id)arg3 ;
@end

