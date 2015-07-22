/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIImageView.h>

@protocol OS_dispatch_queue;
@class NSObject, UIColor, UIImage, NSMutableDictionary, NSString;

@interface MPUSlantedTextPlaceholderArtworkView : UIImageView {

	NSObject*<OS_dispatch_queue> _accessQueue;
	UIColor* _externalBackgroundColor;
	long long _externalContentMode;
	UIImage* _externalImage;
	BOOL _hasValidEffectiveImage;
	BOOL _hasValidPlaceholderImage;
	BOOL _hasValidPlaceholderTextAttributes;
	UIColor* _placeholderBackgroundColor;
	NSObject*<OS_dispatch_queue> _placeholderCreationQueue;
	NSMutableDictionary* _placeholderSubtitleTextAttributes;
	NSMutableDictionary* _placeholderTitleTextAttributes;
	unsigned long long _placeholderVersion;
	BOOL _drawsArtworkAsynchronously;
	long long _placeholderContentMode;
	UIImage* _placeholderImage;
	UIColor* _placeholderStrokeColor;
	double _placeholderStrokeLineWidth;
	long long _placeholderStyle;
	NSString* _placeholderSubtitle;
	NSString* _placeholderTitle;
	CGSize _placeholderSize;

}

@property (assign,nonatomic) BOOL drawsArtworkAsynchronously;                                          //@synthesize drawsArtworkAsynchronously=_drawsArtworkAsynchronously - In the implementation block
@property (getter=isDisplayingPlaceholder,nonatomic,readonly) BOOL displayingPlaceholder; 
@property (nonatomic,retain) UIColor * placeholderBackgroundColor;                                     //@synthesize placeholderBackgroundColor=_placeholderBackgroundColor - In the implementation block
@property (assign,nonatomic) long long placeholderContentMode;                                         //@synthesize placeholderContentMode=_placeholderContentMode - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                               //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,nonatomic) CGSize placeholderSize;                                                   //@synthesize placeholderSize=_placeholderSize - In the implementation block
@property (nonatomic,retain) UIColor * placeholderStrokeColor;                                         //@synthesize placeholderStrokeColor=_placeholderStrokeColor - In the implementation block
@property (assign,nonatomic) double placeholderStrokeLineWidth;                                        //@synthesize placeholderStrokeLineWidth=_placeholderStrokeLineWidth - In the implementation block
@property (assign,nonatomic) long long placeholderStyle;                                               //@synthesize placeholderStyle=_placeholderStyle - In the implementation block
@property (nonatomic,copy) NSString * placeholderSubtitle;                                             //@synthesize placeholderSubtitle=_placeholderSubtitle - In the implementation block
@property (nonatomic,copy) NSString * placeholderTitle;                                                //@synthesize placeholderTitle=_placeholderTitle - In the implementation block
-(void)_updatePlaceholderImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithImage:(id)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)placeholderImage;
-(BOOL)isDisplayingPlaceholder;
-(void)_updateEffectiveImage;
-(void)_invalidateEffectiveImage;
-(void)_invalidateForChangedPlaceholderProperties;
-(void)setPlaceholderBackgroundColor:(UIColor *)arg1 ;
-(void)setPlaceholderStrokeColor:(UIColor *)arg1 ;
-(void)setPlaceholderStrokeLineWidth:(double)arg1 ;
-(void)_invalidatePlaceholderTextAttributes;
-(void)_updatePlaceholderTextAttributes;
-(void)_drawPlaceholderWithBounds:(CGRect)arg1 displayScale:(double)arg2 ;
-(void)setPlaceholderContentMode:(long long)arg1 ;
-(void)setPlaceholderSize:(CGSize)arg1 ;
-(void)setPlaceholderStyle:(long long)arg1 ;
-(void)setPlaceholderSubtitle:(NSString *)arg1 ;
-(void)setPlaceholderTitle:(NSString *)arg1 ;
-(BOOL)drawsArtworkAsynchronously;
-(void)setDrawsArtworkAsynchronously:(BOOL)arg1 ;
-(UIColor *)placeholderBackgroundColor;
-(long long)placeholderContentMode;
-(UIColor *)placeholderStrokeColor;
-(double)placeholderStrokeLineWidth;
-(long long)placeholderStyle;
-(NSString *)placeholderSubtitle;
-(NSString *)placeholderTitle;
-(CGSize)placeholderSize;
@end
