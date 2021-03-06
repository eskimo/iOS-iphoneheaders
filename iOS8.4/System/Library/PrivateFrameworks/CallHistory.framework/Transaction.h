/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CallHistory/NSSecureCoding.h>

@class NSData;

@interface Transaction : NSObject <NSSecureCoding> {

	unsigned long long _transactionType;
	NSData* _record;

}

@property (assign) unsigned long long transactionType;              //@synthesize transactionType=_transactionType - In the implementation block
@property (retain) NSData * record;                                 //@synthesize record=_record - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)toString:(unsigned long long)arg1 ;
-(void)setTransactionType:(unsigned long long)arg1 ;
-(unsigned long long)transactionType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 andRecord:(id)arg2 ;
-(id)initWithString:(id)arg1 andRecord:(id)arg2 ;
-(NSData *)record;
-(void)setRecord:(NSData *)arg1 ;
@end

