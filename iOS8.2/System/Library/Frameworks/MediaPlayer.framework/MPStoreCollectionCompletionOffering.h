/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:39 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MPMediaQuery, MPStoreOfferMediaItemCollection, NSArray;

@interface MPStoreCollectionCompletionOffering : NSObject {

	MPMediaQuery* _localItemsQuery;
	int _preferredStoreOfferVariant;
	MPStoreOfferMediaItemCollection* _offeredCollection;
	MPStoreOfferMediaItemCollection* _mergedCollection;

}

@property (nonatomic,readonly) MPStoreOfferMediaItemCollection * itemsWithCompletionsCollection; 
@property (nonatomic,readonly) NSArray * localItems; 
@property (nonatomic,readonly) int preferredStoreOfferVariant;                                                //@synthesize preferredStoreOfferVariant=_preferredStoreOfferVariant - In the implementation block
@property (nonatomic,readonly) MPStoreOfferMediaItemCollection * offeredCollection;                           //@synthesize offeredCollection=_offeredCollection - In the implementation block
@property (nonatomic,readonly) MPStoreOfferMediaItemCollection * mergedCollection;                            //@synthesize mergedCollection=_mergedCollection - In the implementation block
-(id)initWithOfferedCollection:(id)arg1 localItemsQuery:(id)arg2 preferredStoreOfferVariant:(int)arg3 ;
-(MPStoreOfferMediaItemCollection *)mergedCollection;
-(MPStoreOfferMediaItemCollection *)itemsWithCompletionsCollection;
-(int)preferredStoreOfferVariant;
-(NSArray *)localItems;
-(MPStoreOfferMediaItemCollection *)offeredCollection;
@end

