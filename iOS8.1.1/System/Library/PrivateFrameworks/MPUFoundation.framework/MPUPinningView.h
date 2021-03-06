/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <UIKit/UIView.h>

@class UIView, CALayer;

@interface MPUPinningView : UIView {

	UIView* _containerView;
	CALayer* _effectivePinningSourceLayer;
	UIView* _contentView;
	UIView* _pinningSourceView;

}

@property (nonatomic,retain) UIView * contentView;                    //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * pinningSourceView;              //@synthesize pinningSourceView=_pinningSourceView - In the implementation block
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_prepareForDefaultImageSnapshotNotification:(id)arg1 ;
-(void)_unregisterKVOObserversForLayer:(id)arg1 ;
-(void)_configureMatchMoveAnimation;
-(BOOL)_updateEffectivePinningSourceView;
-(void)_registerKVOObserversForLayer:(id)arg1 ;
-(void)setPinningSourceView:(UIView *)arg1 ;
-(UIView *)pinningSourceView;
@end

