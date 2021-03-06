/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:25 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEOPDAutocompleteParametersAllEntries, GEOPDAutocompleteParametersFullEntriesOnly, GEOPDAutocompleteParametersLocalitiesAndLandmarks;

@interface GEOPDAutocompleteParameters : PBCodable <NSCopying> {

	GEOPDAutocompleteParametersAllEntries* _allEntries;
	GEOPDAutocompleteParametersFullEntriesOnly* _fullEntries;
	GEOPDAutocompleteParametersLocalitiesAndLandmarks* _localitiesAndLandmarks;
	int _requestType;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) char hasRequestType; 
@property (assign,nonatomic) int requestType;                                                                         //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) char hasFullEntries; 
@property (nonatomic,retain) GEOPDAutocompleteParametersFullEntriesOnly * fullEntries;                                //@synthesize fullEntries=_fullEntries - In the implementation block
@property (nonatomic,readonly) char hasAllEntries; 
@property (nonatomic,retain) GEOPDAutocompleteParametersAllEntries * allEntries;                                      //@synthesize allEntries=_allEntries - In the implementation block
@property (nonatomic,readonly) char hasLocalitiesAndLandmarks; 
@property (nonatomic,retain) GEOPDAutocompleteParametersLocalitiesAndLandmarks * localitiesAndLandmarks;              //@synthesize localitiesAndLandmarks=_localitiesAndLandmarks - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasRequestType:(char)arg1 ;
-(char)hasRequestType;
-(void)setFullEntries:(GEOPDAutocompleteParametersFullEntriesOnly *)arg1 ;
-(void)setAllEntries:(GEOPDAutocompleteParametersAllEntries *)arg1 ;
-(void)setLocalitiesAndLandmarks:(GEOPDAutocompleteParametersLocalitiesAndLandmarks *)arg1 ;
-(char)hasFullEntries;
-(char)hasAllEntries;
-(char)hasLocalitiesAndLandmarks;
-(GEOPDAutocompleteParametersFullEntriesOnly *)fullEntries;
-(GEOPDAutocompleteParametersAllEntries *)allEntries;
-(GEOPDAutocompleteParametersLocalitiesAndLandmarks *)localitiesAndLandmarks;
-(void)setRequestType:(int)arg1 ;
-(int)requestType;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

