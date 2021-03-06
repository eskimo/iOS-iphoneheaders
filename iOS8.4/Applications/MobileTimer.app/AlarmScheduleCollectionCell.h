/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:58 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class AlarmScheduleLayoutAttributes, UIView, UILabel, NSString;

@interface AlarmScheduleCollectionCell : UICollectionViewCell {

	AlarmScheduleLayoutAttributes* _attributes;
	UIView* _tileView;
	UILabel* _titleLabel;

}

@property (nonatomic,readonly) NSString * alarmId; 
+(float)height;
-(char)bodyContainsPoint:(CGPoint)arg1 ;
-(void)updateColor;
-(void)updateTitleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)description;
-(void)setSelected:(char)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(NSString *)alarmId;
@end

