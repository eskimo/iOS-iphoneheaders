/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:18 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/NSCopying.h>

@interface CoreIRButton : NSObject <NSCopying> {

	unsigned _usagePage;
	unsigned _usageID;

}

@property (nonatomic,readonly) unsigned usagePage;              //@synthesize usagePage=_usagePage - In the implementation block
@property (nonatomic,readonly) unsigned usageID;                //@synthesize usageID=_usageID - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)usagePage;
-(unsigned)usageID;
-(id)initWithUsagePage:(unsigned)arg1 usageID:(unsigned)arg2 ;
@end

