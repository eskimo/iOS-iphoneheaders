/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <vot/vot-Structs.h>
#import <vot/NSCopying.h>

@class NSString;

@interface VOTElementUniqueIdentification : NSObject <NSCopying> {

	NSString* hashKey;

}

@property (nonatomic,copy) NSString * hashKey; 
+(id)identificationFromElement:(id)arg1 ;
+(id)identificationFromKey:(id)arg1 ;
-(NSString *)hashKey;
-(void)setHashKey:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
