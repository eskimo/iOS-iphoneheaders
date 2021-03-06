/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:28 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <BaseBoard/BaseBoard-Structs.h>
@class NSString;

@interface BSMIGServer : NSObject {

	NSString* _portName;
	unsigned _port;
	opaque_pthread_t* _thread;
	mig_subsystem* _subsystem;
	CFRunLoopObserverRef _entryObserver;
	CFRunLoopObserverRef _exitObserver;

}

@property (assign,nonatomic) int threadPriority; 
@property (nonatomic,readonly) NSString * threadName; 
-(int)threadPriority;
-(void)setThreadPriority:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_installAutoreleasePoolsIfNecessaryForMode:(CFStringRef)arg1 ;
-(void*)_start;
-(unsigned)port;
-(void)setThreadName:(NSString *)arg1 ;
-(unsigned)_createPortNamed:(id)arg1 ;
-(id)initWithPortName:(id)arg1 subsystem:(mig_subsystem*)arg2 separateThread:(char)arg3 ;
-(NSString *)threadName;
@end

