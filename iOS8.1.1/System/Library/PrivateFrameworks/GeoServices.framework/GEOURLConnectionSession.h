/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMapTable, NSLock;

@interface GEOURLConnectionSession : NSObject {

	CFURLConnectionSessionRef _connectionSession;
	NSMapTable* _connectionDelegates;
	NSLock* _delegateMapLock;

}
-(void)dealloc;
-(id)initPersistentSessionWithTimeout:(int)arg1 loadWidth:(int)arg2 ;
-(CFURLRequestRef)newCFMutableURLRequestWithURL:(id)arg1 ;
-(CFURLConnectionRef)newCFURLConnectionWithRequest:(CFURLRequestRef)arg1 delegate:(id)arg2 ;
-(void)removeDelegateForConnection:(CFURLConnectionRef)arg1 ;
-(void)_createConnectionSessionWithPurgeTimeout:(int)arg1 loadWidth:(int)arg2 ;
-(id)_delegateForConnection:(CFURLConnectionRef)arg1 ;
@end
