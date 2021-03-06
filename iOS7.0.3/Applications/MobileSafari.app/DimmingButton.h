/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@interface DimmingButton : UIButton {

	float _normalImageAlpha;
	float _highlightedImageAlpha;
	double _highlightAnimationDuration;

}

@property (assign,nonatomic) float normalImageAlpha;                         //@synthesize normalImageAlpha=_normalImageAlpha - In the implementation block
@property (assign,nonatomic) float highlightedImageAlpha;                    //@synthesize highlightedImageAlpha=_highlightedImageAlpha - In the implementation block
@property (assign,nonatomic) double highlightAnimationDuration;              //@synthesize highlightAnimationDuration=_highlightAnimationDuration - In the implementation block
-(void)setNormalImageAlpha:(float)arg1 ;
-(void)setHighlightedImageAlpha:(float)arg1 ;
-(void)_updateImageAlpha;
-(float)normalImageAlpha;
-(float)highlightedImageAlpha;
-(double)highlightAnimationDuration;
-(void)setHighlightAnimationDuration:(double)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
@end

