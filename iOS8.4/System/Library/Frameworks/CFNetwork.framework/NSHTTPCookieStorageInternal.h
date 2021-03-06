/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:19 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSRecursiveLock;

@interface NSHTTPCookieStorageInternal : NSObject {

	OpaqueCFHTTPCookieStorageRef storage;
	OpaqueCFHTTPCookieStorageRef privateStorage;
	NSRecursiveLock* dataLock;
	BOOL privateBrowsing;

}
-(id)_initWithIdentifier:(id)arg1 private:(BOOL)arg2 ;
-(void)_syncCookies;
-(void)registerForPostingNotifications;
-(id)initInternalWithCFStorage:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(void)dealloc;
@end

