/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:44:48 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssertionServices/BKSProcessAssertionEvent.h>

@class NSString;

@interface BKSProcessAssertionUpdateEvent : BKSProcessAssertionEvent {

	NSString* _name;
	unsigned _flags;

}

@property (nonatomic,copy) NSString * name;               //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned flags;              //@synthesize flags=_flags - In the implementation block
-(void)setFlags:(unsigned)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(unsigned)flags;
@end

