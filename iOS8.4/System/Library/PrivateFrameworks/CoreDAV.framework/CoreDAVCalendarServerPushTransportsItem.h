/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVCalendarServerPushTransportsItem : CoreDAVItem {

	NSMutableSet* _transports;

}

@property (nonatomic,retain) NSMutableSet * transports;              //@synthesize transports=_transports - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSMutableSet *)transports;
-(void)addTransport:(id)arg1 ;
-(void)setTransports:(NSMutableSet *)arg1 ;
@end
