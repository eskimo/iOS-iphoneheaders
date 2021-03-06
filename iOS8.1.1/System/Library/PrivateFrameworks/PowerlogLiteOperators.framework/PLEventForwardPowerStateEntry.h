/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:25 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLEntry.h>

@class NSArray;

@interface PLEventForwardPowerStateEntry : PLEntry

@property (readonly) short state; 
@property (readonly) short event; 
@property (readonly) NSArray * reason; 
@property (readonly) BOOL isBasebandWake; 
+(void)load;
+(id)entryKey;
-(short)state;
-(NSArray *)reason;
-(short)event;
-(id)initEntryWithState:(short)arg1 withEvent:(short)arg2 withReason:(id)arg3 withDate:(id)arg4 ;
-(id)initEntryWithIOMessage:(unsigned)arg1 ;
-(BOOL)isBasebandWake;
@end

