/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:06:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/VictoriaSettings.bundle/VictoriaSettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <Nike/STWeightPickerDelegate.h>

@class STWeightPicker, UILabel;

@interface NikeSettingsWeightController : PSListController <STWeightPickerDelegate> {

	STWeightPicker* _weightPicker;
	UILabel* _promptLabel;

}
-(void)weightPicker:(id)arg1 weightUnitDidChange:(int)arg2 ;
-(void)weightPicker:(id)arg1 weightDidChange:(float)arg2 ;
-(id)weight:(id)arg1 ;
-(void)_layoutViews;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(id)specifiers;
@end

