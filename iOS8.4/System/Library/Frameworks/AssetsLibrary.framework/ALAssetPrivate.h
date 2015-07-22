/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssetsLibrary/ALAssetsLibraryAsset.h>

@class ALAssetsLibrary, PLManagedAsset, PLPhotoLibrary, NSString;

@interface ALAssetPrivate : NSObject <ALAssetsLibraryAsset> {

	ALAssetsLibrary* _library;
	BOOL _isValid;
	PLManagedAsset* _photo;
	PLPhotoLibrary* _photoLibrary;

}

@property (assign,nonatomic) ALAssetsLibrary * library; 
@property (assign,nonatomic) BOOL isValid;                                     //@synthesize isValid=_isValid - In the implementation block
@property (getter=isDeletable,nonatomic,readonly) BOOL deletable; 
@property (nonatomic,retain) PLManagedAsset * photo;                           //@synthesize photo=_photo - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * _photoLibrary;                   //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithManagedAsset:(id)arg1 library:(id)arg2 ;
-(void)libraryDidChange;
-(PLPhotoLibrary *)_photoLibrary;
-(void)set_photoLibrary:(PLPhotoLibrary *)arg1 ;
-(PLManagedAsset *)photo;
-(void)dealloc;
-(BOOL)isValid;
-(void)setIsValid:(BOOL)arg1 ;
-(void)setPhoto:(PLManagedAsset *)arg1 ;
-(ALAssetsLibrary *)library;
-(void)setLibrary:(ALAssetsLibrary *)arg1 ;
-(void)_performBlockAndWait:(/*^block*/id)arg1 ;
-(BOOL)isDeletable;
@end
