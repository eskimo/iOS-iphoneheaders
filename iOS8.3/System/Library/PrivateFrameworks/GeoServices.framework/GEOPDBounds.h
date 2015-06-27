/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:10 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEOMapRegion;

@interface GEOPDBounds : PBCodable <NSCopying> {

	GEOMapRegion* _displayMapRegion;
	GEOMapRegion* _mapRegion;

}

@property (nonatomic,readonly) char hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion;                     //@synthesize mapRegion=_mapRegion - In the implementation block
@property (nonatomic,readonly) char hasDisplayMapRegion; 
@property (nonatomic,retain) GEOMapRegion * displayMapRegion;              //@synthesize displayMapRegion=_displayMapRegion - In the implementation block
+(id)boundsInfoForPlaceData:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasMapRegion;
-(void)setDisplayMapRegion:(GEOMapRegion *)arg1 ;
-(char)hasDisplayMapRegion;
-(GEOMapRegion *)displayMapRegion;
-(GEOMapRegion *)mapRegion;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
