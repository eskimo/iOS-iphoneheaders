/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface MBPowerAssertion : NSObject {

	unsigned _assertionID;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _name;
	double _timeout;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) double timeout;               //@synthesize timeout=_timeout - In the implementation block
+(id)assertionWithName:(id)arg1 timeout:(double)arg2 ;
-(id)initWithName:(id)arg1 timeout:(double)arg2 ;
-(void)drop;
-(void)dealloc;
-(NSString *)name;
-(double)timeout;
-(void)hold;
@end

