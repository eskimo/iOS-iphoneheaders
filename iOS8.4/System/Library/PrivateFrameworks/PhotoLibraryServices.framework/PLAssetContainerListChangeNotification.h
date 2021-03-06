/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:38 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary;

@interface PLAssetContainerListChangeNotification : PLContainerChangeNotification {

	NSDictionary* _userInfo;

}

@property (nonatomic,retain,readonly) id<PLAssetContainerList> assetContainerList; 
@property (nonatomic,retain,readonly) NSObject*<PLAlbumContainer> albumList; 
+(id)notificationWithContainerList:(id)arg1 snapshot:(id)arg2 changedContainers:(id)arg3 ;
+(id)notificationWithSimulatedReloadRequestForContainerList:(id)arg1 ;
-(id)_contentRelationshipName;
-(void)dealloc;
-(id)description;
-(id)name;
-(id)userInfo;
-(NSObject*<PLAlbumContainer>)albumList;
-(id<PLAssetContainerList>)assetContainerList;
@end

