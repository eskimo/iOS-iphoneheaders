/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class PUBackgroundColorView, PUVideoBannerView, UIView, UIImage, PUPhotoDecoration, UIImageView;

@interface PUPhotoViewContentHelper : NSObject {

	PUBackgroundColorView* _photoDecorationBorderView;
	PUBackgroundColorView* _photoDecorationOverlayView;
	PUVideoBannerView* _videoBannerView;
	bool _hasTransform;
	bool _isVideoBannerVisible;
	bool _avoidsImageViewIfPossible;
	bool _flattensVideoBanner;
	bool _avoidsPhotoDecoration;
	bool _transitionFillerViewEnabled;
	bool _slalom;
	UIView* _transitionFillerView;
	UIView* _contentView;
	long long _fillMode;
	UIImage* _photoImage;
	PUPhotoDecoration* _photoDecoration;
	double _videoDuration;
	UIImageView* _photoImageView;
	UIImageView* __crossfadeImageView;
	CGSize _photoSize;
	UIEdgeInsets _fillerEdgeInsets;
	CGAffineTransform _imageTransform;

}

@property (nonatomic,readonly) UIView * contentView;                                             //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) long long fillMode;                                                 //@synthesize fillMode=_fillMode - In the implementation block
@property (assign,nonatomic) CGAffineTransform imageTransform;                                   //@synthesize imageTransform=_imageTransform - In the implementation block
@property (assign,nonatomic) CGSize photoSize;                                                   //@synthesize photoSize=_photoSize - In the implementation block
@property (nonatomic,readonly) CGRect imageContentFrame; 
@property (nonatomic,retain) UIImage * photoImage;                                               //@synthesize photoImage=_photoImage - In the implementation block
@property (nonatomic,copy) PUPhotoDecoration * photoDecoration;                                  //@synthesize photoDecoration=_photoDecoration - In the implementation block
@property (assign,nonatomic) bool avoidsImageViewIfPossible;                                     //@synthesize avoidsImageViewIfPossible=_avoidsImageViewIfPossible - In the implementation block
@property (assign,nonatomic) bool flattensVideoBanner;                                           //@synthesize flattensVideoBanner=_flattensVideoBanner - In the implementation block
@property (assign,nonatomic) bool avoidsPhotoDecoration;                                         //@synthesize avoidsPhotoDecoration=_avoidsPhotoDecoration - In the implementation block
@property (nonatomic,readonly) UIView * transitionFillerView;                                    //@synthesize transitionFillerView=_transitionFillerView - In the implementation block
@property (nonatomic,readonly) UIView * videoBannerContainerView; 
@property (assign,nonatomic) UIEdgeInsets fillerEdgeInsets;                                      //@synthesize fillerEdgeInsets=_fillerEdgeInsets - In the implementation block
@property (assign,nonatomic) bool transitionFillerViewEnabled;                                   //@synthesize transitionFillerViewEnabled=_transitionFillerViewEnabled - In the implementation block
@property (getter=isVideoBannerVisible,nonatomic,readonly) bool videoBannerVisible;              //@synthesize isVideoBannerVisible=_isVideoBannerVisible - In the implementation block
@property (nonatomic,readonly) double videoDuration;                                             //@synthesize videoDuration=_videoDuration - In the implementation block
@property (getter=isSlalom,nonatomic,readonly) bool slalom;                                      //@synthesize slalom=_slalom - In the implementation block
@property (nonatomic,retain) UIImageView * photoImageView;                                       //@synthesize photoImageView=_photoImageView - In the implementation block
@property (nonatomic,retain) UIImageView * _crossfadeImageView;                                  //@synthesize _crossfadeImageView=__crossfadeImageView - In the implementation block
+(CGRect)_imageContentFrameForBounds:(CGRect)arg1 imageSize:(CGSize)arg2 fillMode:(long long)arg3 ;
+(CGSize)sizeThatFits:(CGSize)arg1 imageSize:(CGSize)arg2 fillMode:(long long)arg3 ;
-(id)contentView;
-(void)setFillMode:(long long)arg1 ;
-(void)_updateImageView;
-(void).cxx_destruct;
-(id)initWithContentView:(id)arg1 ;
-(void)setAvoidsImageViewIfPossible:(bool)arg1 ;
-(void)setPhotoSize:(CGSize)arg1 ;
-(void)setPhotoImage:(id)arg1 ;
-(void)setFlattensVideoBanner:(bool)arg1 ;
-(void)setVideoBannerVisible:(bool)arg1 videoDuration:(double)arg2 isSlalom:(bool)arg3 ;
-(void)setPhotoDecoration:(id)arg1 ;
-(id)photoDecoration;
-(CGSize)photoSize;
-(void)_updateSubviewOrdering;
-(CGRect)imageContentFrame;
-(void)layoutSubviewsOfContentView;
-(CGSize)contentViewSizeThatFits:(CGSize)arg1 ;
-(id)transitionFillerView;
-(void)setTransitionFillerViewEnabled:(bool)arg1 ;
-(void)setFillerEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setAvoidsPhotoDecoration:(bool)arg1 ;
-(CGRect)imageContentFrameForBounds:(CGRect)arg1 ;
-(CGRect)photoDecorationBorderViewFrameForImageContentFrame:(CGRect)arg1 ;
-(void)_updateVideoBannerView;
-(void)_updatePhotoDecoration;
-(void)_layoutTransitionFillerView;
-(void)_updateContentViewClipsToBounds;
-(void)setPhotoImageView:(id)arg1 ;
-(bool)avoidsPhotoDecoration;
-(void)setImageTransform:(CGAffineTransform)arg1 ;
-(id)videoBannerContainerView;
-(void)animateCrossfadeToImage:(id)arg1 ;
-(bool)isVideoBannerVisible;
-(CGAffineTransform)imageTransform;
-(id)photoImage;
-(bool)avoidsImageViewIfPossible;
-(bool)flattensVideoBanner;
-(UIEdgeInsets)fillerEdgeInsets;
-(bool)transitionFillerViewEnabled;
-(double)videoDuration;
-(bool)isSlalom;
-(id)photoImageView;
-(id)_crossfadeImageView;
-(void)set_crossfadeImageView:(id)arg1 ;
-(long long)fillMode;
@end

