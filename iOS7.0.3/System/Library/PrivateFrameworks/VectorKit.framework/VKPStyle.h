/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSData, NSString, VKPStyleProperties;

@interface VKPStyle : PBCodable {

	SCD_Struct_VK58* _inherits;
	NSMutableArray* _attributes;
	NSData* _contents;
	NSString* _name;
	VKPStyleProperties* _properties;
	NSMutableArray* _zooms;

}

@property (nonatomic,readonly) unsigned inheritsCount; 
@property (nonatomic,readonly) unsigned* inherits; 
@property (nonatomic,retain) NSMutableArray * attributes;                  //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) BOOL hasProperties; 
@property (nonatomic,retain) VKPStyleProperties * properties;              //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) NSMutableArray * zooms;                       //@synthesize zooms=_zooms - In the implementation block
@property (nonatomic,readonly) BOOL hasContents; 
@property (nonatomic,retain) NSData * contents;                            //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                              //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)contents;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setContents:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)properties;
-(id)attributes;
-(void)setProperties:(id)arg1 ;
-(void)setAttributes:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)addAttributes:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setZooms:(id)arg1 ;
-(void)addZooms:(id)arg1 ;
-(unsigned)inheritsCount;
-(void)clearInherits;
-(unsigned)inheritAtIndex:(unsigned)arg1 ;
-(void)addInherit:(unsigned)arg1 ;
-(unsigned)attributesCount;
-(void)clearAttributes;
-(id)attributesAtIndex:(unsigned)arg1 ;
-(BOOL)hasProperties;
-(unsigned)zoomsCount;
-(void)clearZooms;
-(id)zoomsAtIndex:(unsigned)arg1 ;
-(BOOL)hasContents;
-(BOOL)hasName;
-(unsigned*)inherits;
-(void)setInherits:(unsigned*)arg1 count:(unsigned)arg2 ;
-(id)zooms;
@end

