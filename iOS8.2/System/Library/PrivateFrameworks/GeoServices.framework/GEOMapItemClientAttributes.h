/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:11 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEOMapItemAddressBookAttributes, GEOMapItemRoutineAttributes;

@interface GEOMapItemClientAttributes : PBCodable <NSCopying> {

	GEOMapItemAddressBookAttributes* _addressBookAttributes;
	GEOMapItemRoutineAttributes* _routineAttributes;

}

@property (nonatomic,readonly) char hasAddressBookAttributes; 
@property (nonatomic,retain) GEOMapItemAddressBookAttributes * addressBookAttributes;              //@synthesize addressBookAttributes=_addressBookAttributes - In the implementation block
@property (nonatomic,readonly) char hasRoutineAttributes; 
@property (nonatomic,retain) GEOMapItemRoutineAttributes * routineAttributes;                      //@synthesize routineAttributes=_routineAttributes - In the implementation block
+(id)clientAttributesCopyForSharing:(id)arg1 ;
-(id)initWithLOIType:(int)arg1 event:(id)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setRoutineAttributes:(GEOMapItemRoutineAttributes *)arg1 ;
-(GEOMapItemAddressBookAttributes *)addressBookAttributes;
-(char)hasAddressBookAttributes;
-(char)hasRoutineAttributes;
-(GEOMapItemRoutineAttributes *)routineAttributes;
-(void)setAddressBookAttributes:(GEOMapItemAddressBookAttributes *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

