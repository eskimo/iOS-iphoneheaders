/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UILabel, UISwitch;

@interface PLCameraSettingsGroupView : UIView {

	BOOL shouldCenterTitle;
	int type;
	NSString* title;
	UILabel* titleLabel;
	UISwitch* accessorySwitch;

}

@property (assign,nonatomic) int type; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) BOOL shouldCenterTitle; 
@property (nonatomic,retain) UILabel * titleLabel; 
@property (nonatomic,retain) UISwitch * accessorySwitch; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)title;
-(id)titleLabel;
-(void)setTitleLabel:(id)arg1 ;
-(void)setAccessorySwitch:(id)arg1 ;
-(id)accessorySwitch;
-(void)setShouldCenterTitle:(BOOL)arg1 ;
-(BOOL)shouldCenterTitle;
@end

