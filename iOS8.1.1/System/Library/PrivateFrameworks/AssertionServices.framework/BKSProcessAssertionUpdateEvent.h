/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
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

