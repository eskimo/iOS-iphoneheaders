/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKCalendarItemEditor.h>

@protocol EKStyleProvider, EKReminderEditorDelegate;
@class EKReminder;

@interface EKReminderEditor : EKCalendarItemEditor {

	<EKStyleProvider>* _styleProvider;
	<EKReminderEditorDelegate>* _reminderEditorDelegate;

}

@property (nonatomic,retain) EKReminder * reminder; 
@property (nonatomic,retain) <EKStyleProvider> * styleProvider;                                       //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic,__weak) <EKReminderEditorDelegate> * reminderEditorDelegate;              //@synthesize reminderEditorDelegate=_reminderEditorDelegate - In the implementation block
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(BOOL)_canDetachSingleOccurrence;
-(id)preferredTitle;
-(id)_editItems;
-(BOOL)shouldDisplayEditItem:(id)arg1 withVisibility:(int)arg2 ;
-(id)notificationNamesForLocaleChange;
-(void)_revertEvent;
-(void)prepareEditItems;
-(void)_copyEventForPossibleRevert;
-(id)defaultAlertTitle;
-(BOOL)allowsDeletingFutureOccurrences;
-(id)defaultTitleForCalendarItem;
-(BOOL)saveCalendarItemWithSpan:(int)arg1 error:(id*)arg2 ;
-(id)_nameForDeleteButton;
-(void)customizeActionSheet:(id)arg1 ;
-(id)_viewForSheet;
-(void)editItem:(id)arg1 didCommitFromDetailViewController:(BOOL)arg2 ;
-(void)editItemTextChanged:(id)arg1 ;
-(void)editItem:(id)arg1 willBeginDatePickingWithDate:(id)arg2 action:(SEL)arg3 animated:(BOOL)arg4 forSubitem:(unsigned)arg5 inSubsection:(unsigned)arg6 ;
-(void)editItem:(id)arg1 didEndDatePickingAnimated:(BOOL)arg2 ;
-(void)setupDeleteButton;
-(void)setReminderEditorDelegate:(id)arg1 ;
-(void)setReminder:(id)arg1 ;
-(id)reminder;
-(id)reminderEditorDelegate;
-(unsigned)entityType;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)marginForTableView:(id)arg1 ;
-(void)loadView;
-(void).cxx_destruct;
@end

