/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/NotificationSettings.bundle/NotificationSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface AlertStyleView : UIView {

	UIImageView* _selectionImage;
	UILabel* _alertName;
	BOOL _isSelected;
	UIImageView* _alertStyleImageContentView;

}

@property (nonatomic,retain) UIImageView * alertStyleImageContentView;              //@synthesize alertStyleImageContentView=_alertStyleImageContentView - In the implementation block
@property (nonatomic,retain) UIImageView * selectionImage;                          //@synthesize selectionImage=_selectionImage - In the implementation block
@property (nonatomic,retain) UILabel * alertName;                                   //@synthesize alertName=_alertName - In the implementation block
@property (assign,nonatomic) BOOL isSelected;                                       //@synthesize isSelected=_isSelected - In the implementation block
+(id)selectionImageForView:(id)arg1 ;
-(void)setSelectionImage:(UIImageView *)arg1 ;
-(void)setAlertName:(UILabel *)arg1 ;
-(UIImageView *)selectionImage;
-(UIImageView *)alertStyleImageContentView;
-(void)setAlertStyleImageContentView:(UIImageView *)arg1 ;
-(UILabel *)alertName;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithType:(id)arg1 ;
-(void)sizeToFit;
-(BOOL)isSelected;
-(void)setIsSelected:(BOOL)arg1 ;
@end

