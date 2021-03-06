/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:08:58 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/NotificationSettings.bundle/NotificationSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotificationSettings/NotificationSettings-Structs.h>
#import <Preferences/PSEditingPane.h>
#import <NotificationSettings/EKCalendarChooserDelegate.h>

@class EKCalendarChooser, NSString;

@interface CalendarPane : PSEditingPane <EKCalendarChooserDelegate> {

	EKCalendarChooser* _chooser;

}

@property (nonatomic,retain) EKCalendarChooser * chooser;              //@synthesize chooser=_chooser - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setChooser:(EKCalendarChooser *)arg1 ;
-(EKCalendarChooser *)chooser;
-(void)calendarChooserSelectionDidChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
@end

