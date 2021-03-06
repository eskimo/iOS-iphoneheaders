/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:18 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>
#import <PhotoLibraryServices/PLOrderKeyObject.h>

@class PLManagedAsset, PLManagedAlbum, NSString;

@interface PLAssetToAlbumOrder : PLManagedObject <PLOrderKeyObject> {

	BOOL _isSpecial;

}

@property (assign,nonatomic) long long orderValue; 
@property (nonatomic,retain) PLManagedAsset * asset; 
@property (nonatomic,retain) PLManagedAlbum * album; 
@property (assign,nonatomic) BOOL isSpecial;                        //@synthesize isSpecial=_isSpecial - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newAssetOrderForAsset:(id)arg1 album:(id)arg2 ;
-(NSString *)description;
-(void)didSave;
-(void)setIsSpecial:(BOOL)arg1 ;
-(BOOL)isSpecial;
-(id)secondaryOrderSortKey;
-(id)childManagedObject;
@end

