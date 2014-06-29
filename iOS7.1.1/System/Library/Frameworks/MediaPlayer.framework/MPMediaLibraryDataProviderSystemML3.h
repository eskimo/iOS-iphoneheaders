/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:28 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaLibraryDataProviderML3.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface MPMediaLibraryDataProviderSystemML3 : MPMediaLibraryDataProviderML3 {

	long long _currentRevision;
	NSObject<OS_dispatch_queue>* _queue;

}
+(bool)_isGeniusEnabled;
+(id)_localizedGeniusErrorForError:(id)arg1 ;
+(id)_localizedCloudGeniusErrorForError:(id)arg1 ;
-(bool)isArtworkImageIdenticalForItemWithIdentifier:(long long)arg1 otherItemWithIdentifier:(long long)arg2 compareRepresentativeItemArtwork:(bool)arg3 missingAlwaysComparesEqual:(bool)arg4 ;
-(bool)isGeniusEnabled;
-(id)errorResolverForMediaItem:(id)arg1 ;
-(bool)hasArtworkImageForItemWithIdentifier:(long long)arg1 ;
-(bool)shouldAsynchrounouslyLoadArtworkForItemWithIdentifier:(long long)arg1 artworkFormat:(long long)arg2 artworkCacheID:(id)arg3 ;
-(bool)shouldAsynchrounouslyLoadArtworkForItemWithIdentifier:(long long)arg1 artworkSize:(CGSize)arg2 artworkCacheID:(id)arg3 ;
-(void)loadArtworkImageForFormat:(long long)arg1 ofItemWithArtworkCacheID:(id)arg2 canUseSurfaceBackedImage:(bool)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)loadArtworkImageForFormat:(long long)arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)loadBestArtworkImageForSize:(CGSize)arg1 forArtworkCacheID:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)loadBestArtworkImageDataForSize:(CGSize)arg1 ofItemWithIdentifier:(long long)arg2 atPlaybackTime:(double)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(id)artworkCacheIDForItemWithIdentifier:(long long)arg1 atPlaybackTime:(double)arg2 ;
-(void)seedPlaylistWithIdentifier:(long long)arg1 withItemWithIdentifier:(long long)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)releaseGeniusClusterPlaylist:(void*)arg1 ;
-(void*)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long*)arg1 count:(unsigned long long)arg2 error:(id*)arg3 ;
-(long long*)generateItemIdentifiersForGeniusClusterPlaylist:(void*)arg1 count:(unsigned long long*)arg2 error:(id*)arg3 ;
-(void)updateEntitesToCurrentRevision;
-(bool)supportsEntityChangeTrackingForMediaEntityType:(long long)arg1 collectionGroupingType:(long long)arg2 dataProviderClass:(out Class*)arg3 ;
-(void)_initInstanceVariableOnce;
-(void)_seedCloudPlaylistWithTrack:(id)arg1 container:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(bool)_formatCanUsePipeline:(unsigned)arg1 ;
-(bool)_formatShouldUseNativeSize:(unsigned)arg1 ;
-(id)_itemArtworkCacheIDForItemIdentifier:(long long)arg1 atPlaybackTime:(double)arg2 ;
-(void)_loadArtworkImageDataForMLArtworkFormatID:(unsigned)arg1 artworkCacheID:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(id)_itemArtworkCacheIDForItemIdentifier:(long long)arg1 ;
-(void)_loadArtworkImageForMLArtworkFormatID:(unsigned)arg1 artworkCacheID:(id)arg2 canUseSurfaceBackedImage:(bool)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(id)_screenshotCacheIDForItemIdentifier:(long long)arg1 ;
-(void).cxx_destruct;
-(id)initWithLibrary:(id)arg1 ;
@end
