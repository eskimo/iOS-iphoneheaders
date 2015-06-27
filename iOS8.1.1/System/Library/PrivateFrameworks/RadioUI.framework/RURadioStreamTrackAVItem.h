/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:34 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RURadioAVItem.h>
#import <RadioUI/AVAssetResourceLoaderDelegate.h>

@class _MPRadioStreamMetadata, NSArray, NSData, NSString;

@interface RURadioStreamTrackAVItem : RURadioAVItem <AVAssetResourceLoaderDelegate> {

	_MPRadioStreamMetadata* _adamIDMetadata;
	long long _albumStoreID;
	NSArray* _buyOffers;
	_MPRadioStreamMetadata* _effectiveMetadata;
	NSData* _previousAdamIDBlob;
	_MPRadioStreamMetadata* _radioStreamTrackMetadata;
	long long _storeID;
	_MPRadioStreamMetadata* _timedMetadata;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(void)setPlayerItem:(id)arg1 ;
-(long long)storeID;
-(void)loadAssetAndPlayerItem;
-(BOOL)isExplicitTrack;
-(BOOL)isAlwaysLive;
-(id)mainTitle;
-(long long)albumStoreID;
-(id)buyOffers;
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)artist;
-(id)album;
-(long long)albumBuyButtonType;
-(id)albumBuyButtonText;
-(BOOL)supportsRadioTrackActions;
-(id)initWithStreamTrack:(id)arg1 ;
-(id)_createMetadataForRadioStreamTrack;
-(void)_reloadMetadataAndPostNotificationsIfNeeded:(BOOL)arg1 ;
-(id)streamTrack;
-(float)_maximumBitRateForNetworkType:(long long)arg1 ;
-(void)_getCurrentTimedMetadata:(id*)arg1 pings:(id*)arg2 adamIDBlob:(id*)arg3 ;
-(void)_updateEffectiveMetadataAndPostNotifications:(BOOL)arg1 ;
-(id)effectiveArtworkCollection;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
@end
