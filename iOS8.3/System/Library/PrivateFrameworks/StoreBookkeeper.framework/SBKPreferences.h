/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:38:11 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SBKPreferences : NSObject
+(id)storeBookkeeperPreferences;
-(char)boolForKey:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setBool:(char)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 withDefaultValue:(id)arg2 ;
-(void)registerDefaultsIfKeyNotSet:(id)arg1 registrationBlock:(/*^block*/id)arg2 ;
-(void)_preferencesDidChange;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

