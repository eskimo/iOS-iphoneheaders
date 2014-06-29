/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicStoreUI/MusicStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, UIBezierPath;

@interface MSPieImageView : UIView {

	UIImage* _backgroundImage;
	UIBezierPath* _clipPath;
	UIImage* _foregroundImage;
	double _pieFraction;
	double _pieRadius;

}

@property (nonatomic,retain) UIImage * backgroundImage;              //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * foregroundImage;              //@synthesize foregroundImage=_foregroundImage - In the implementation block
@property (assign,nonatomic) double pieFraction;                     //@synthesize pieFraction=_pieFraction - In the implementation block
@property (assign,nonatomic) double pieRadius;                       //@synthesize pieRadius=_pieRadius - In the implementation block
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)sizeToFit;
-(id)backgroundImage;
-(void)setBackgroundImage:(id)arg1 ;
-(void)setPieFraction:(double)arg1 ;
-(void)setForegroundImage:(id)arg1 ;
-(void)setPieRadius:(double)arg1 ;
-(void)_reloadClipPath;
-(id)foregroundImage;
-(double)pieFraction;
-(double)pieRadius;
@end
