/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:08 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <identityservicesd/identityservicesd-Structs.h>
@class NSRecursiveLock, IMTimer, NSMutableDictionary;

@interface IDSPublicKeyStorage : NSObject {

	NSRecursiveLock* _lock;
	/*^block*/id _saveEnqueueBlock;
	IMTimer* _saveTimer;
	BOOL _loaded;
	NSMutableDictionary* _publicKeyStorage;
	NSMutableDictionary* _personalKeyStorage;

}
+(id)sharedInstance;
-(BOOL)_isUnderFirstDataProtectionLock;
-(void)logState;
-(id)publicKeyForToken:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 forService:(id)arg4 ;
-(SecMPPublicIdentityRef)copyPublicIdentityForToken:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 forService:(id)arg4 ;
-(void)storePersonalPublicKey:(id)arg1 forToken:(id)arg2 ;
-(void)_setSaveTimer;
-(void)_loadIfNeeded;
-(id)_existingEntryFromURI:(id)arg1 forURI:(id)arg2 forService:(id)arg3 ;
-(id)personalPublicKeyForToken:(id)arg1 ;
-(void)removePublicKeyForToken:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 forService:(id)arg4 ;
-(id)_entryFromURI:(id)arg1 forURI:(id)arg2 forService:(id)arg3 ;
-(void)_purgeOrphanedKeysToThreshold;
-(void)_purgeEntryIfNecessaryWithFromURI:(id)arg1 forURI:(id)arg2 forService:(id)arg3 forToken:(id)arg4 ;
-(BOOL)hasPublicKeyForToken:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 forService:(id)arg4 ;
-(void)removePersonalPublicKeyForToken:(id)arg1 ;
-(void)storePublicKey:(id)arg1 forToken:(id)arg2 forURI:(id)arg3 fromURI:(id)arg4 forService:(id)arg5 ;
-(void)emptyPersonalPublicKeyCache;
-(void)dealloc;
-(id)init;
-(void)clearCache;
-(void)_save;
@end

