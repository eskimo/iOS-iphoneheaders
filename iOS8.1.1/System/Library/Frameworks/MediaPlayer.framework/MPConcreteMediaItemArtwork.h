/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaItemArtwork.h>

@class MPArtworkCatalog;

@interface MPConcreteMediaItemArtwork : MPMediaItemArtwork {

	MPArtworkCatalog* _catalog;
	CGRect _bounds;

}

@property (nonatomic,readonly) MPArtworkCatalog * artworkCatalog; 
-(MPArtworkCatalog *)artworkCatalog;
-(id)imageWithSize:(CGSize)arg1 ;
-(id)initWithArtworkCatalog:(id)arg1 ;
-(CGRect)bounds;
@end
