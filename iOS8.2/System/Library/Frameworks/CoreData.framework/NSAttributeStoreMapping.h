/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:18 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSPropertyStoreMapping.h>

@interface NSAttributeStoreMapping : NSPropertyStoreMapping {

	int _externalType;
	unsigned _externalPrecision;
	int _externalScale;

}
-(id)sqlType;
-(void)setExternalType:(int)arg1 ;
-(void)setExternalPrecision:(unsigned)arg1 ;
-(void)setExternalScale:(int)arg1 ;
-(int)externalType;
-(unsigned)externalPrecision;
-(int)externalScale;
-(id)attribute;
-(id)columnDefinition;
-(char)isEqual:(id)arg1 ;
-(id)initWithProperty:(id)arg1 ;
@end

