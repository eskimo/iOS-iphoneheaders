/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:11 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UITableViewController.h>
#import <EventKitUI/EKCalendarItemEditItemDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol EKCalendarItemEditorDelegate;
@class NSArray, EKUIRecurrenceAlertController, EKCalendarItemEditItem, NSMutableSet, UIBarButtonItem, EKEventStore, EKCalendarItem, UIResponder, _UIAccessDeniedView, NSString;

@interface EKCalendarItemEditor : UITableViewController <EKCalendarItemEditItemDelegate, UIActionSheetDelegate, UIAlertViewDelegate> {

	NSArray* _editItems;
	NSArray* _orderedEditItems;
	id _revertState;
	BOOL _showsTimeZone;
	NSArray* _currentItems;
	EKUIRecurrenceAlertController* _recurrenceAlertController;
	EKCalendarItemEditItem* _currentEditItem;
	BOOL _giveTitleCellKeyboardFocus;
	int _editItemVisibility;
	BOOL _isIgnoringCellHeightChange;
	BOOL _needsCellHeightChange;
	NSMutableSet* _editItemsDisablingDoneButton;
	long long _lastAuthorizationStatus;
	BOOL _hasAppeared;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _leftButtonSpacer;
	UIBarButtonItem* _rightButtonSpacer;
	double _leftButtonSpace;
	double _rightButtonSpace;
	BOOL _scrollToNotes;
	BOOL _canHideDoneAndCancelButtons;
	id<EKCalendarItemEditorDelegate> _editorDelegate;
	EKEventStore* _store;
	EKCalendarItem* _calendarItem;
	UIResponder* _responderToRestoreOnAppearence;
	unsigned long long _visibleSectionToRestoreOnAppearence;
	_UIAccessDeniedView* _accessDeniedView;

}

@property (assign,nonatomic,__weak) id<EKCalendarItemEditorDelegate> editorDelegate;              //@synthesize editorDelegate=_editorDelegate - In the implementation block
@property (nonatomic,retain) EKEventStore * store;                                                //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) EKCalendarItem * calendarItem;                                       //@synthesize calendarItem=_calendarItem - In the implementation block
@property (assign,nonatomic) BOOL scrollToNotes;                                                  //@synthesize scrollToNotes=_scrollToNotes - In the implementation block
@property (nonatomic,retain) UIResponder * responderToRestoreOnAppearence;                        //@synthesize responderToRestoreOnAppearence=_responderToRestoreOnAppearence - In the implementation block
@property (assign,nonatomic) unsigned long long visibleSectionToRestoreOnAppearence;              //@synthesize visibleSectionToRestoreOnAppearence=_visibleSectionToRestoreOnAppearence - In the implementation block
@property (assign,nonatomic) BOOL showsTimeZone;                                                  //@synthesize showsTimeZone=_showsTimeZone - In the implementation block
@property (assign,nonatomic) BOOL canHideDoneAndCancelButtons;                                    //@synthesize canHideDoneAndCancelButtons=_canHideDoneAndCancelButtons - In the implementation block
@property (readonly) EKCalendarItemEditItem * currentEditItem;                                    //@synthesize currentEditItem=_currentEditItem - In the implementation block
@property (assign,nonatomic) double navBarLeftContentInset; 
@property (assign,nonatomic) double navBarRightContentInset; 
@property (nonatomic,retain) _UIAccessDeniedView * accessDeniedView;                              //@synthesize accessDeniedView=_accessDeniedView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(EKEventStore *)store;
-(void)setStore:(EKEventStore *)arg1 ;
-(EKCalendarItem *)calendarItem;
-(void)setEditorDelegate:(id<EKCalendarItemEditorDelegate>)arg1 ;
-(void)refreshStartAndEndDates;
-(BOOL)saveWithSpan:(int)arg1 animated:(BOOL)arg2 ;
-(void)cancelEditingWithDelegateNotification:(BOOL)arg1 ;
-(void)completeWithAction:(int)arg1 animated:(BOOL)arg2 ;
-(BOOL)scrollToNotes;
-(void)setScrollToNotes:(BOOL)arg1 ;
-(BOOL)canHideDoneAndCancelButtons;
-(void)setCanHideDoneAndCancelButtons:(BOOL)arg1 ;
-(void)handleTapOutside;
-(void)completeAndSave;
-(BOOL)willPresentDialogOnSave;
-(void)setNavBarLeftContentInset:(double)arg1 ;
-(double)navBarLeftContentInset;
-(void)setNavBarRightContentInset:(double)arg1 ;
-(double)navBarRightContentInset;
-(void)editItem:(id)arg1 textViewShouldReturn:(id)arg2 ;
-(id)viewControllerForEditItem:(id)arg1 ;
-(void)editItemDidStartEditing:(id)arg1 ;
-(void)editItemDidEndEditing:(id)arg1 ;
-(void)editItem:(id)arg1 didCommitFromDetailViewController:(BOOL)arg2 ;
-(void)editItemTextChanged:(id)arg1 ;
-(void)editItemRequiresHeightChange:(id)arg1 ;
-(void)editItem:(id)arg1 wantsKeyboardPinned:(BOOL)arg2 ;
-(void)editItemWantsInjectableViewControllerToBeShown:(id)arg1 ;
-(void)_localeChanged;
-(void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 ;
-(void)editItem:(id)arg1 wantsDoneButtonDisabled:(BOOL)arg2 ;
-(void)editItemRequiresPopoverSizeUpdate:(id)arg1 ;
-(void)setCalendarItem:(EKCalendarItem *)arg1 ;
-(id)preferredTitle;
-(unsigned long long)tableSectionForEditItem:(id)arg1 ;
-(void)refreshInvitees;
-(void)refreshLocation;
-(void)deleteClicked:(id)arg1 ;
-(id)_editItems;
-(EKCalendarItemEditItem *)currentEditItem;
-(id)_orderedEditItems;
-(BOOL)saveCalendarItemWithSpan:(int)arg1 error:(id*)arg2 ;
-(id)defaultTitleForCalendarItem;
-(id)_nameForDeleteButton;
-(void)setupDeleteButton;
-(id)defaultAlertTitle;
-(id)notificationNamesForLocaleChange;
-(void)_copyEventForPossibleRevert;
-(void)_revertEvent;
-(BOOL)_canDetachSingleOccurrence;
-(id)_viewForSheet;
-(id)defaultAlertTitleForEditItem:(id)arg1 ;
-(long long)rowNumberForEditItem:(id)arg1 ;
-(void)editItem:(id)arg1 wantsRowReload:(id)arg2 ;
-(void)prepareEditItems;
-(void)setEditItemVisibility:(int)arg1 animated:(BOOL)arg2 ;
-(BOOL)shouldDisplayEditItem:(id)arg1 withVisibility:(int)arg2 ;
-(void)customizeActionSheet:(id)arg1 ;
-(BOOL)allowsDeletingFutureOccurrences;
-(_UIAccessDeniedView *)accessDeniedView;
-(void)setAccessDeniedView:(_UIAccessDeniedView *)arg1 ;
-(void)tableViewDidStartReload:(id)arg1 ;
-(void)storeChanged:(id)arg1 ;
-(void)setupForEvent;
-(void)_tableViewWillUpdateHeights;
-(void)_tableViewDidUpdateHeights;
-(void)_configureVisibleItems;
-(void)_updateCurrentEditItemsFromVisibility:(int)arg1 toVisibility:(int)arg2 animated:(BOOL)arg3 ;
-(void)setResponderToRestoreOnAppearence:(UIResponder *)arg1 ;
-(unsigned long long)visibleSectionToRestoreOnAppearence;
-(void)setVisibleSectionToRestoreOnAppearence:(unsigned long long)arg1 ;
-(void)_setWantsToEnableDoneButton:(BOOL)arg1 ;
-(UIResponder *)responderToRestoreOnAppearence;
-(void)_pinKeyboard:(BOOL)arg1 ;
-(void)_setShowingAccessDeniedView:(BOOL)arg1 showSettingsInstructions:(BOOL)arg2 ;
-(void)_keyboardWillHide;
-(void)_completeWithAction:(int)arg1 animated:(BOOL)arg2 notify:(BOOL)arg3 ;
-(void)_presentDetachSheet;
-(BOOL)_performSave:(int)arg1 animated:(BOOL)arg2 ;
-(void)_setCalendarItemOnEditItems;
-(BOOL)_canEnableDoneButton;
-(void)_setDoneAndCancelButtonVisible:(BOOL)arg1 ;
-(void)_setWantsToEnableDoneButtonAfterTextChanged;
-(void)_reallyHandleCellHeightChange;
-(long long)firstTableRowForEditItem:(id)arg1 ;
-(void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4 ;
-(id)_editItemAtIndexPath:(id)arg1 firstRowIndex:(long long*)arg2 ;
-(void)_performDelete:(int)arg1 ;
-(void)editItem:(id)arg1 performActionsOnCellAtSubitem:(unsigned long long)arg2 actions:(/*^block*/id)arg3 ;
-(void)editItem:(id)arg1 wantsRowsScrolledToVisible:(id)arg2 ;
-(int)editItemVisibility;
-(id<EKCalendarItemEditorDelegate>)editorDelegate;
-(BOOL)showsTimeZone;
-(void)setShowsTimeZone:(BOOL)arg1 ;
-(unsigned long long)entityType;
-(void)dealloc;
-(id)init;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)applicationDidResume;
-(unsigned long long)supportedInterfaceOrientations;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(CGSize)preferredContentSize;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)done:(id)arg1 ;
-(void)_keyboardWillChangeFrame:(id)arg1 ;
-(void)cancel:(id)arg1 ;
@end

