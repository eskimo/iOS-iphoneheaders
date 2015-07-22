/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicClientContextConsuming.h>
#import <FuseUI/MusicEntityProviding.h>

@class MusicClientContext, NSArray, NSString;

@interface MusicProviderListEntityProvider : NSObject <MusicClientContextConsuming, MusicEntityProviding> {

	MusicClientContext* _clientContext;
	NSArray* _entityProviderList;

}

@property (nonatomic,retain) MusicClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,copy) NSArray * entityProviderList;                      //@synthesize entityProviderList=_entityProviderList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)numberOfSections;
-(void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1 ;
-(id)indexBarEntryAtIndex:(unsigned long long)arg1 ;
-(void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(id)indexPathForEntityValueContext:(id)arg1 ;
-(BOOL)hasEntitiesNotInLibrary;
-(void)setEditing:(BOOL)arg1 returningInsertedSectionIndexSet:(id*)arg2 deletedSectionIndexSet:(id*)arg3 ;
-(void)getEntityProvider:(id*)arg1 forSectionIndex:(unsigned long long)arg2 returningLocalSectionIndex:(unsigned long long*)arg3 ;
-(id)initWithEntityProviderList:(id)arg1 ;
-(void)setEntityProviderList:(NSArray *)arg1 ;
-(void)_getEntityProvider:(id*)arg1 forIndexBarEntryIndex:(unsigned long long)arg2 returningLocalIndexBarEntryIndex:(unsigned long long*)arg3 ;
-(BOOL)hasEntities;
-(void)setClientContext:(MusicClientContext *)arg1 ;
-(MusicClientContext *)clientContext;
-(id)entityValueProviderAtIndexPath:(id)arg1 ;
-(unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1 ;
-(void)_entityProviderDidInvalidateNotification:(id)arg1 ;
-(unsigned long long)numberOfIndexBarEntries;
-(unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1 ;
-(NSArray *)entityProviderList;
@end
