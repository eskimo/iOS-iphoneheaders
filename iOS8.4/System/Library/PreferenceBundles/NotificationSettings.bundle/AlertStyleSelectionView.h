/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:11 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/NotificationSettings.bundle/NotificationSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotificationSettings/NotificationSettings-Structs.h>
#import <UIKit/UIView.h>

@class AlertStyleView;

@interface AlertStyleSelectionView : UIView {

	AlertStyleView* _noneAlertType;
	AlertStyleView* _topAlertType;
	AlertStyleView* _frontAlertType;
	unsigned long long _selectedStyle;

}

@property (assign,nonatomic) unsigned long long selectedStyle;              //@synthesize selectedStyle=_selectedStyle - In the implementation block
-(void)setSelectedStyle:(unsigned long long)arg1 ;
-(void)layoutAlertType:(id)arg1 withXPos:(float)arg2 ;
-(unsigned long long)selectedStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
@end

