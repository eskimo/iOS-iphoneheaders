/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicUI-Structs.h>
#import <MusicUI/MusicMediaTableViewCellContentView.h>

@class NSArray;

@interface MusicStandardMediaTableViewCellContentView : MusicMediaTableViewCellContentView

@property (nonatomic,copy,readonly) NSArray * rightAccessoryViews; 
@property (nonatomic,readonly) double rightContentInset; 
@property (nonatomic,readonly) long long titleLabelNumberOfLines; 
+(void)contentSizeCategoryDidChange;
+(double)interLabelLeading;
+(double)textLeadingDistanceFromArtwork;
+(double)textLeadingDistance;
+(id)detailRegularTextAttributes;
+(id)titleRegularTextAttributes;
+(id)titleEmphasizedTextAttributes;
+(id)detailEmphasizedTextAttributes;
+(id)subtitleRegularTextAttributes;
+(id)subtitleEmphasizedTextAttributes;
+(id)_subtitleRegularTextAttributes;
+(id)_titleRegularTextAttributes;
+(CGSize)artworkSize;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setDisplayAsDisabled:(BOOL)arg1 ;
-(void)reloadContent;
-(double)rightContentInset;
-(NSArray *)rightAccessoryViews;
-(long long)titleLabelNumberOfLines;
@end

