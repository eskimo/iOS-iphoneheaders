/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryBrowseTableViewConfiguration.h>

@class MusicEntityViewDescriptor;

@interface MusicLibraryArtistsViewConfiguration : MusicLibraryBrowseTableViewConfiguration {

	MusicEntityViewDescriptor* _artistsEntityViewDescriptor;
	MusicEntityViewDescriptor* _recentlyAddedOverviewEntityViewDescriptor;
	BOOL _shouldIncludeRecentlyAddedOverview;

}

@property (assign,nonatomic) BOOL shouldIncludeRecentlyAddedOverview;              //@synthesize shouldIncludeRecentlyAddedOverview=_shouldIncludeRecentlyAddedOverview - In the implementation block
-(id)init;
-(id)loadEntityViewDescriptor;
-(long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(long long)handleSelectionFromUserActivityContext:(id)arg1 containerItem:(id)arg2 entityValueContext:(id)arg3 viewController:(id)arg4 ;
-(void)configureContentDescriptorForSearchResults:(id)arg1 ;
-(void)setShouldIncludeRecentlyAddedOverview:(BOOL)arg1 ;
-(id)_detailViewControllerForEntityValueContext:(id)arg1 sourceViewController:(id)arg2 ;
-(id)_entityViewDescriptorsForCurrentProperties;
-(id)_artistsEntityViewDescriptor;
-(id)_loadArtistsEntityViewDescriptor;
-(id)_recentlyAddedOverviewEntityViewDescriptor;
-(id)_loadHorizontalLockupContentEntityViewDescriptor;
-(id)_loadArtistsEntityProvider;
-(id)_loadRecentlyAddedOverviewEntityProvider;
-(id)_loadRecentlyAddedOverviewEntityViewDescriptor;
-(BOOL)wantsToDisplayDetailViewControllerUponEntityValueProviderSelection;
-(BOOL)shouldIncludeRecentlyAddedOverview;
@end
