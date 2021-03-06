/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <DataAccess/DataAccess-Structs.h>
@class NSCountedSet, NSMutableDictionary, NSMutableSet;

@interface DAPowerAssertionManager : NSObject {

	NSCountedSet* _contexts;
	NSMutableDictionary* _groupIdentifierToContexts;
	CFDictionaryRef _contextToGroupIdentifier;
	NSMutableSet* _heldAsideGroupIdentifiers;
	NSCountedSet* _heldAsideContexts;
	CFDictionaryRef _contextToPowerAssertionRef;

}
+(void)vendDaemons:(Class)arg1 ;
+(id)sharedPowerAssertionManager;
-(void)dealloc;
-(id)init;
-(void)_retainAssertionForContext:(id)arg1 ;
-(void)_releaseAssertionForContext:(id)arg1 ;
-(void)retainPowerAssertion:(id)arg1 withGroupIdentifier:(id)arg2 ;
-(unsigned long long)powerAssertionRetainCount:(id)arg1 ;
-(void)releasePowerAssertion:(id)arg1 ;
-(id)stateString;
-(void)reattainPowerAssertionsForGroupIdentifier:(id)arg1 ;
-(void)dropPowerAssertionsForGroupIdentifier:(id)arg1 ;
@end

