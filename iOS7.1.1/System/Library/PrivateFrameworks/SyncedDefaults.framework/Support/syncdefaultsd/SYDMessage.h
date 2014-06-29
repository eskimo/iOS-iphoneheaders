/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:16:10 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class SYDPeer, NSObject, NSDictionary, NSString;

@interface SYDMessage : NSObject {

	SYDPeer* _peer;
	NSObject<OS_xpc_object>* _message;
	NSDictionary* _nsMessage;
	NSString* _storeIdentifier;

}

@property (nonatomic,readonly) SYDPeer * peer;                                   //@synthesize peer=_peer - In the implementation block
@property (nonatomic,readonly) NSString * messageName; 
@property (nonatomic,readonly) id userInfo; 
@property (nonatomic,readonly) NSString * proposedBundleIdentifier; 
@property (nonatomic,retain) NSString * storeIdentifier;                         //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
-(id)messageName;
-(id)storeIdentifier;
-(id)proposedBundleIdentifier;
-(id)initWithPeer:(id)arg1 andMessage:(id)arg2 ;
-(void)_translateMessageIfNecessary;
-(id)peer;
-(void)setStoreIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)userInfo;
-(void)sendReply:(id)arg1 ;
-(void)finalize;
@end
