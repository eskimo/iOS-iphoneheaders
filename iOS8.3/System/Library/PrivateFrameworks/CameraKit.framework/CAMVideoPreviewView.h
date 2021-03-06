/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:53:50 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString, AVCaptureVideoPreviewLayer, UIView, CAMEffectsFullsizeView, CAMEffectsGridView, CAMEffectsGridLabelsView;

@interface CAMVideoPreviewView : UIView {

	NSString* _videoGravity;
	char _disableLayoutForPreviewView;
	char _disableLayoutForEffectsFullsizeView;
	char _disableLayoutForEffectsGridViews;
	char _square;
	AVCaptureVideoPreviewLayer* _previewLayer;
	int _orientation;
	UIView* _previewLayerView;
	CAMEffectsFullsizeView* _effectsFullsizeView;
	CAMEffectsGridView* _effectsGridView;
	CAMEffectsGridLabelsView* _effectsGridLabelsView;
	UIView* _fadeOutView;

}

@property (nonatomic,retain) AVCaptureVideoPreviewLayer * previewLayer;                                                           //@synthesize previewLayer=_previewLayer - In the implementation block
@property (assign,nonatomic) int orientation;                                                                                     //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain,readonly) UIView * previewLayerView;                                                                  //@synthesize previewLayerView=_previewLayerView - In the implementation block
@property (nonatomic,retain,readonly) CAMEffectsFullsizeView * effectsFullsizeView;                                               //@synthesize effectsFullsizeView=_effectsFullsizeView - In the implementation block
@property (nonatomic,retain,readonly) CAMEffectsGridView * effectsGridView;                                                       //@synthesize effectsGridView=_effectsGridView - In the implementation block
@property (nonatomic,retain,readonly) CAMEffectsGridLabelsView * effectsGridLabelsView;                                           //@synthesize effectsGridLabelsView=_effectsGridLabelsView - In the implementation block
@property (nonatomic,retain,readonly) UIView * fadeOutView;                                                                       //@synthesize fadeOutView=_fadeOutView - In the implementation block
@property (nonatomic,copy) NSString * videoGravity; 
@property (assign,getter=isDisabledLayoutForPreviewView,nonatomic) char disableLayoutForPreviewView;                              //@synthesize disableLayoutForPreviewView=_disableLayoutForPreviewView - In the implementation block
@property (assign,getter=isDisabledLayoutForEffectsFullsizeView,nonatomic) char disableLayoutForEffectsFullsizeView;              //@synthesize disableLayoutForEffectsFullsizeView=_disableLayoutForEffectsFullsizeView - In the implementation block
@property (assign,getter=isDisabledLayoutForEffectsGridViews,nonatomic) char disableLayoutForEffectsGridViews;                    //@synthesize disableLayoutForEffectsGridViews=_disableLayoutForEffectsGridViews - In the implementation block
@property (assign,getter=isSquare,nonatomic) char square;                                                                         //@synthesize square=_square - In the implementation block
-(NSString *)videoGravity;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setOrientation:(int)arg1 animated:(char)arg2 ;
-(int)orientation;
-(void)setOrientation:(int)arg1 ;
-(CAMEffectsFullsizeView *)effectsFullsizeView;
-(CAMEffectsGridView *)effectsGridView;
-(AVCaptureVideoPreviewLayer *)previewLayer;
-(void)createEffectsFullsizeView;
-(void)createEffectsGridViews;
-(void)destroyEffectsFullsizeViewRemoveFromSuperview:(char)arg1 ;
-(void)destroyEffectsGridViewsRemoveFromSuperview:(char)arg1 ;
-(CAMEffectsGridLabelsView *)effectsGridLabelsView;
-(UIView *)previewLayerView;
-(void)setDisableLayoutForEffectsFullsizeView:(char)arg1 ;
-(void)setDisableLayoutForPreviewView:(char)arg1 ;
-(CGRect)frameForView:(id)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 toSublayer:(id)arg2 ;
-(UIView *)fadeOutView;
-(void)setDisableLayoutForEffectsGridViews:(char)arg1 ;
-(char)isSquare;
-(void)setSquare:(char)arg1 ;
-(void)updateToContentSize:(id)arg1 ;
-(CGRect)rectForCaptureDeviceFace:(id)arg1 ;
-(void)setSquare:(char)arg1 animated:(char)arg2 ;
-(void)setPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1 ;
-(CGRect)_frameForSubviewsAccountForSquare:(char)arg1 ;
-(void)_updateGravityForLayers;
-(char)isDisabledLayoutForPreviewView;
-(char)isDisabledLayoutForEffectsFullsizeView;
-(char)isDisabledLayoutForEffectsGridViews;
-(void)setVideoGravity:(NSString *)arg1 ;
@end

