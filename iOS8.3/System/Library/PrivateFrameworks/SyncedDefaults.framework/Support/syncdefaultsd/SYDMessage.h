/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:44:51 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class SYDPeer, NSObject, NSDictionary, NSString;

@interface SYDMessage : NSObject {

	SYDPeer* _peer;
	NSObject*<OS_xpc_object> _message;
	NSDictionary* _nsMessage;

}

@property (nonatomic,readonly) SYDPeer * peer;                                   //@synthesize peer=_peer - In the implementation block
@property (nonatomic,readonly) NSString * messageName; 
@property (nonatomic,readonly) id userInfo; 
@property (nonatomic,readonly) NSString * proposedBundleIdentifier; 
@property (nonatomic,readonly) NSString * storeIdentifier; 
@property (nonatomic,readonly) NSString * proposedStoreIdentifier; 
@property (nonatomic,readonly) char hasProposedAdditionalStores; 
-(NSString *)messageName;
-(NSString *)storeIdentifier;
-(NSString *)proposedBundleIdentifier;
-(id)initWithPeer:(id)arg1 andMessage:(id)arg2 ;
-(void)_translateMessageIfNecessary;
-(NSString *)proposedStoreIdentifier;
-(char)hasProposedAdditionalStores;
-(SYDPeer *)peer;
-(void)dealloc;
-(id)userInfo;
-(void)sendReply:(id)arg1 ;
-(void)finalize;
@end

