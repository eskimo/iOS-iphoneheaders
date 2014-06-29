/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface TSCHStyleSemanticTag : NSObject <NSCopying> {

	int mType;
	unsigned long long mIndex;

}

@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) unsigned long long index; 
+(id)styleSemanticTagWithType:(int)arg1 index:(unsigned long long)arg2 ;
-(id)initWithType:(int)arg1 index:(unsigned long long)arg2 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(int)type;
-(id)copyWithZone:(NSZone)arg1 ;
-(unsigned long long)index;
@end
