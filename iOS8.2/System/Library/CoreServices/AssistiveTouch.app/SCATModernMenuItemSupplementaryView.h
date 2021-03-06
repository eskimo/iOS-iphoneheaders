/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UILabel, SCATModernMenuItem, NSString;

@interface SCATModernMenuItemSupplementaryView : UICollectionReusableView {

	UILabel* _titleLabel;
	SCATModernMenuItem* _menuItem;

}

@property (assign,nonatomic) SCATModernMenuItem * menuItem;              //@synthesize menuItem=_menuItem - In the implementation block
@property (nonatomic,retain) NSString * titleText; 
@property (nonatomic,retain) UILabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
-(void)setMenuItem:(SCATModernMenuItem *)arg1 ;
-(void)didUpdateScatMenuItemStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(SCATModernMenuItem *)menuItem;
-(NSString *)titleText;
-(void)_updateTextAttributes;
@end

