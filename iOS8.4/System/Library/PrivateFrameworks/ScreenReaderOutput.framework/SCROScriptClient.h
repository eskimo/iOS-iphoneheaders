/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:16 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class NSLock, SCROConnection, SCRCTargetSelectorTimer;

@interface SCROScriptClient : NSObject {

	NSLock* _lock;
	SCROConnection* _connection;
	SCRCTargetSelectorTimer* _timer;
	BOOL _isReady;

}
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedClient;
-(BOOL)_isReady;
-(id)retain;
-(void)dealloc;
-(id)init;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_lazyConnection;
-(void)_killConnection;
-(BOOL)runScriptFile:(id)arg1 ;
-(void)handleCallback:(id)arg1 ;
-(oneway void)release;
@end

