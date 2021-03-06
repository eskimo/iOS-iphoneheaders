/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MapsDataClassMigrator/NSCopying.h>

@class PersistentAddressBookAddress, PersistentDirectionsHistoryItem, PersistentSearchRequestHistoryItem, PersistentSearchResultHistoryItem;

@interface PersistentHistoryItem : PBCodable <NSCopying> {

	PersistentAddressBookAddress* _addressBookItem;
	PersistentDirectionsHistoryItem* _directionsHistoryItem;
	PersistentSearchRequestHistoryItem* _searchRequestHistoryItem;
	PersistentSearchResultHistoryItem* _searchResultHistoryItem;

}

@property (nonatomic,readonly) BOOL hasAddressBookItem; 
@property (nonatomic,retain) PersistentAddressBookAddress * addressBookItem;                             //@synthesize addressBookItem=_addressBookItem - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchRequestHistoryItem; 
@property (nonatomic,retain) PersistentSearchRequestHistoryItem * searchRequestHistoryItem;              //@synthesize searchRequestHistoryItem=_searchRequestHistoryItem - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchResultHistoryItem; 
@property (nonatomic,retain) PersistentSearchResultHistoryItem * searchResultHistoryItem;                //@synthesize searchResultHistoryItem=_searchResultHistoryItem - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectionsHistoryItem; 
@property (nonatomic,retain) PersistentDirectionsHistoryItem * directionsHistoryItem;                    //@synthesize directionsHistoryItem=_directionsHistoryItem - In the implementation block
-(id)item;
-(BOOL)isEmpty;
-(void)setItem:(id)arg1 ;
-(PersistentAddressBookAddress *)addressBookItem;
-(BOOL)hasSearchRequestHistoryItem;
-(PersistentSearchRequestHistoryItem *)searchRequestHistoryItem;
-(BOOL)hasDirectionsHistoryItem;
-(PersistentDirectionsHistoryItem *)directionsHistoryItem;
-(void)setSearchRequestHistoryItem:(PersistentSearchRequestHistoryItem *)arg1 ;
-(void)setDirectionsHistoryItem:(PersistentDirectionsHistoryItem *)arg1 ;
-(BOOL)hasSearchResultHistoryItem;
-(PersistentSearchResultHistoryItem *)searchResultHistoryItem;
-(BOOL)hasAddressBookItem;
-(void)setSearchResultHistoryItem:(PersistentSearchResultHistoryItem *)arg1 ;
-(void)setAddressBookItem:(PersistentAddressBookAddress *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

