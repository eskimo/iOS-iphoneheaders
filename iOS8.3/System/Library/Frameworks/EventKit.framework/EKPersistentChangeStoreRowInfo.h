/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:45:59 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface EKPersistentChangeStoreRowInfo : NSObject {

	NSString* _clientIdentifier;
	int _consumedSequenceNumber;

}

@property (nonatomic,retain) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) int consumedSequenceNumber;               //@synthesize consumedSequenceNumber=_consumedSequenceNumber - In the implementation block
-(NSString *)clientIdentifier;
-(int)consumedSequenceNumber;
-(void)setConsumedSequenceNumber:(int)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setClientIdentifier:(NSString *)arg1 ;
@end

