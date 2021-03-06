/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:43 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOPDCategory : PBCodable <NSCopying> {

	NSString* _categoryId;
	int _level;
	NSMutableArray* _localizedNames;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) BOOL hasLevel; 
@property (assign,nonatomic) int level;                                    //@synthesize level=_level - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedNames;              //@synthesize localizedNames=_localizedNames - In the implementation block
@property (nonatomic,readonly) BOOL hasCategoryId; 
@property (nonatomic,retain) NSString * categoryId;                        //@synthesize categoryId=_categoryId - In the implementation block
+(id)_allCategoriesForPlaceData:(id)arg1 type:(unsigned)arg2 ;
+(id)categoryNamesForPlaceData:(id)arg1 type:(unsigned)arg2 ;
+(BOOL)hasCategoryNamesForPlaceData:(id)arg1 type:(unsigned)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLevel:(int)arg1 ;
-(int)level;
-(id)dictionaryRepresentation;
-(BOOL)hasLevel;
-(NSMutableArray *)localizedNames;
-(unsigned long long)localizedNamesCount;
-(void)setLocalizedNames:(NSMutableArray *)arg1 ;
-(void)clearLocalizedNames;
-(void)setCategoryId:(NSString *)arg1 ;
-(void)addLocalizedName:(id)arg1 ;
-(id)localizedNameAtIndex:(unsigned long long)arg1 ;
-(void)setHasLevel:(BOOL)arg1 ;
-(BOOL)hasCategoryId;
-(NSString *)categoryId;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

