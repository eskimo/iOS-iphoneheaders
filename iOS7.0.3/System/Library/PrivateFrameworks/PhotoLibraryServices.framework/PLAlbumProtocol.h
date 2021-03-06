/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol PLAlbumProtocol <PLAssetContainer>
@property (nonatomic,readonly) NSNumber * kind; 
@property (nonatomic,readonly) int kindValue; 
@property (nonatomic,readonly) NSMutableOrderedSet * mutableAssets; 
@property (assign,nonatomic) BOOL hasUnseenContentBoolValue; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) UIImage * posterImage; 
@property (nonatomic,readonly) BOOL isLibrary; 
@property (nonatomic,readonly) BOOL isCameraAlbum; 
@property (nonatomic,readonly) BOOL isPanoramasAlbum; 
@property (nonatomic,readonly) BOOL isWallpaperAlbum; 
@property (nonatomic,readonly) BOOL isPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isPendingPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isStandInAlbum; 
@property (nonatomic,readonly) BOOL isOwnedCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isMultipleContributorCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL canContributeToCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL shouldDeleteWhenEmpty; 
@property (nonatomic,retain) NSDictionary * slideshowSettings; 
@property (nonatomic,retain) NSString * importSessionID; 
@property (nonatomic,readonly) NSURL * groupURL; 
@property (nonatomic,readonly) id sortingComparator; 
@property (nonatomic,readonly) id sectioningComparator; 
@property (assign,nonatomic) int pendingItemsCount; 
@property (assign,nonatomic) int pendingItemsType; 
@optional
-(id)name;
-(id)filteredIndexesForPredicate:(id)arg1;
-(void)setUINotificationsEnabled:(BOOL)arg1;

@required
-(id)kind;
-(BOOL)isCameraAlbum;
-(int)kindValue;
-(BOOL)isCloudSharedAlbum;
-(id)titleForSectionStartingAtIndex:(unsigned)arg1;
-(id)displayableIndexesForCount:(unsigned)arg1;
-(void)reducePendingItemsCountBy:(unsigned)arg1;
-(void)batchFetchAssets:(id)arg1;
-(id)mutableAssets;
-(BOOL)hasUnseenContentBoolValue;
-(void)setHasUnseenContentBoolValue:(BOOL)arg1;
-(id)posterImage;
-(BOOL)isLibrary;
-(BOOL)isPanoramasAlbum;
-(BOOL)isWallpaperAlbum;
-(BOOL)isPhotoStreamAlbum;
-(BOOL)isPendingPhotoStreamAlbum;
-(BOOL)isStandInAlbum;
-(BOOL)isOwnedCloudSharedAlbum;
-(BOOL)isMultipleContributorCloudSharedAlbum;
-(BOOL)canContributeToCloudSharedAlbum;
-(BOOL)shouldDeleteWhenEmpty;
-(id)slideshowSettings;
-(void)setSlideshowSettings:(id)arg1;
-(id)importSessionID;
-(void)setImportSessionID:(id)arg1;
-(id)groupURL;
-(/*^block*/ id)sortingComparator;
-(/*^block*/ id)sectioningComparator;
-(int)pendingItemsCount;
-(void)setPendingItemsCount:(int)arg1;
-(int)pendingItemsType;
-(void)setPendingItemsType:(int)arg1;
@end

