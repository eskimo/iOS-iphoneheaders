/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:24 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <MediaPlayerUI/NSCopying.h>

@class NSString, NSDictionary, UIColor;

@interface MPUExtrasGridCellStyle : NSObject <NSCopying> {

	float _titleFirstBaselineHeight;
	float _subtitleFirstBaselineHeight;
	NSString* _titleTextStyle;
	NSString* _subtitleTextStyle;
	NSDictionary* _titleDefaultFontAttributes;
	NSDictionary* _subtitleDefaultFontAttributes;
	UIColor* _titleTextColor;
	UIColor* _subtitleTextColor;
	float _textFirstBaselineToBottom;
	float _textLastBaselineToBottom;
	int _defaultTextAlignment;
	CGSize _imageSize;

}

@property (assign,nonatomic) CGSize imageSize;                                        //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) float titleFirstBaselineHeight;                          //@synthesize titleFirstBaselineHeight=_titleFirstBaselineHeight - In the implementation block
@property (assign,nonatomic) float subtitleFirstBaselineHeight;                       //@synthesize subtitleFirstBaselineHeight=_subtitleFirstBaselineHeight - In the implementation block
@property (nonatomic,copy) NSString * titleTextStyle;                                 //@synthesize titleTextStyle=_titleTextStyle - In the implementation block
@property (nonatomic,copy) NSString * subtitleTextStyle;                              //@synthesize subtitleTextStyle=_subtitleTextStyle - In the implementation block
@property (nonatomic,copy) NSDictionary * titleDefaultFontAttributes;                 //@synthesize titleDefaultFontAttributes=_titleDefaultFontAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * subtitleDefaultFontAttributes;              //@synthesize subtitleDefaultFontAttributes=_subtitleDefaultFontAttributes - In the implementation block
@property (nonatomic,copy) UIColor * titleTextColor;                                  //@synthesize titleTextColor=_titleTextColor - In the implementation block
@property (nonatomic,copy) UIColor * subtitleTextColor;                               //@synthesize subtitleTextColor=_subtitleTextColor - In the implementation block
@property (assign,nonatomic) float textFirstBaselineToBottom;                         //@synthesize textFirstBaselineToBottom=_textFirstBaselineToBottom - In the implementation block
@property (assign,nonatomic) float textLastBaselineToBottom;                          //@synthesize textLastBaselineToBottom=_textLastBaselineToBottom - In the implementation block
@property (assign,nonatomic) int defaultTextAlignment;                                //@synthesize defaultTextAlignment=_defaultTextAlignment - In the implementation block
-(void)setTitleTextColor:(UIColor *)arg1 ;
-(UIColor *)titleTextColor;
-(UIColor *)subtitleTextColor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)imageSize;
-(NSString *)subtitleTextStyle;
-(NSDictionary *)titleDefaultFontAttributes;
-(int)defaultTextAlignment;
-(NSDictionary *)subtitleDefaultFontAttributes;
-(float)titleFirstBaselineHeight;
-(float)subtitleFirstBaselineHeight;
-(float)textFirstBaselineToBottom;
-(void)setTitleFirstBaselineHeight:(float)arg1 ;
-(void)setTitleDefaultFontAttributes:(NSDictionary *)arg1 ;
-(void)setTextFirstBaselineToBottom:(float)arg1 ;
-(void)setTextLastBaselineToBottom:(float)arg1 ;
-(void)setSubtitleDefaultFontAttributes:(NSDictionary *)arg1 ;
-(void)setSubtitleTextColor:(UIColor *)arg1 ;
-(void)setSubtitleTextStyle:(NSString *)arg1 ;
-(void)setSubtitleFirstBaselineHeight:(float)arg1 ;
-(void)setDefaultTextAlignment:(int)arg1 ;
-(float)textLastBaselineToBottom;
-(void)setTitleTextStyle:(NSString *)arg1 ;
-(NSString *)titleTextStyle;
-(void)setImageSize:(CGSize)arg1 ;
@end

