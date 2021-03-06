/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:28 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <EventKitUI/EKEventTitleDetailItemDelegate.h>
#import <EventKitUI/EKUIEventStatusButtonsViewDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol EKEventViewDelegate;
@class _UIAccessDeniedView, EKEventDetailItem, EKEventEditViewController, EKUIRecurrenceAlertController, EKUIEventStatusButtonsView, SingleToolbarItemContainerView, UITableView, NSArray, UIView, EKEvent, UIViewController, NSString;

@interface EKEventViewController : UIViewController <EKEventTitleDetailItemDelegate, EKUIEventStatusButtonsViewDelegate, UIAlertViewDelegate> {

	char _ignoreDBChanges;
	int _lastAuthorizationStatus;
	_UIAccessDeniedView* _accessDeniedView;
	EKEventDetailItem* _selectedEditItem;
	int _disclosedTableSection;
	NSRange _disclosedTableRange;
	int _pendingStatus;
	EKEventEditViewController* _activeEventEditor;
	EKUIRecurrenceAlertController* _recurrenceAlertController;
	EKUIEventStatusButtonsView* _statusButtonsView;
	SingleToolbarItemContainerView* _statusButtonsContainerView;
	float _statusButtonsViewCachedFontSize;
	int _lastOrientation;
	EKEventDetailItem* _currentEditItem;
	UITableView* _tableView;
	char _didAppear;
	char _viewIsVisible;
	char _autoPop;
	char _allowsSubitems;
	char _showsPreview;
	char _forcePreview;
	char _trustsStatus;
	char _allowsInviteResponses;
	char _showsAddToCalendar;
	char _ICSPreview;
	char _needsReload;
	char _showsDoneButton;
	char _showsOutOfDateMessage;
	char _showsDelegatorMessage;
	char _showsDelegateMessage;
	char _dead;
	char _tableIsBeingEdited;
	NSArray* _items;
	NSArray* _currentSections;
	int _scrollToSection;
	UIView* _blankFooterView;
	char _showingBlankFooterView;
	char _allowsEditing;
	char _hideNavigationBar;
	char _minimalMode;
	id<EKEventViewDelegate> _delegate;
	EKEvent* _event;
	int _editorShowTransition;
	int _editorHideTransition;
	UIViewController* _eventDetailContainer;
	float _leftInset;
	float _rightInset;

}

@property (assign,nonatomic,__weak) id<EKEventViewDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) EKEvent * event;                                            //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) char allowsEditing;                                         //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) char allowsCalendarPreview; 
@property (assign,nonatomic) char alwaysShowsCalendarPreview; 
@property (assign,nonatomic) int scrollToSection; 
@property (assign,getter=isICSPreview,nonatomic) char ICSPreview;                        //@synthesize ICSPreview=_ICSPreview - In the implementation block
@property (assign,nonatomic) char allowsInviteResponses;                                 //@synthesize allowsInviteResponses=_allowsInviteResponses - In the implementation block
@property (assign,nonatomic) char showsAddToCalendar;                                    //@synthesize showsAddToCalendar=_showsAddToCalendar - In the implementation block
@property (assign,nonatomic) char allowsSubitems;                                        //@synthesize allowsSubitems=_allowsSubitems - In the implementation block
@property (assign,nonatomic) char showsDoneButton;                                       //@synthesize showsDoneButton=_showsDoneButton - In the implementation block
@property (assign,nonatomic) char showsOutOfDateMessage;                                 //@synthesize showsOutOfDateMessage=_showsOutOfDateMessage - In the implementation block
@property (assign,nonatomic) char showsDelegatorMessage;                                 //@synthesize showsDelegatorMessage=_showsDelegatorMessage - In the implementation block
@property (assign,nonatomic) char showsDelegateMessage;                                  //@synthesize showsDelegateMessage=_showsDelegateMessage - In the implementation block
@property (assign,nonatomic) char hideNavigationBar;                                     //@synthesize hideNavigationBar=_hideNavigationBar - In the implementation block
@property (assign,nonatomic) char minimalMode;                                           //@synthesize minimalMode=_minimalMode - In the implementation block
@property (assign,nonatomic) int editorShowTransition;                                   //@synthesize editorShowTransition=_editorShowTransition - In the implementation block
@property (assign,nonatomic) int editorHideTransition;                                   //@synthesize editorHideTransition=_editorHideTransition - In the implementation block
@property (nonatomic,retain) UIViewController * eventDetailContainer;                    //@synthesize eventDetailContainer=_eventDetailContainer - In the implementation block
@property (assign,nonatomic) float topInset; 
@property (assign,nonatomic) float leftInset;                                            //@synthesize leftInset=_leftInset - In the implementation block
@property (assign,nonatomic) float rightInset;                                           //@synthesize rightInset=_rightInset - In the implementation block
@property (nonatomic,retain) EKEventEditViewController * activeEventEditor; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setDefaultDatesForEvent:(id)arg1 ;
+(void)adjustLayoutForCell:(id)arg1 tableViewWidth:(float)arg2 numRowsInSection:(unsigned)arg3 cellRow:(unsigned)arg4 ;
-(id)initWithEvent:(id)arg1 ;
-(void)eventStatusButtonsView:(id)arg1 didSelectAction:(int)arg2 ;
-(float)eventStatusButtonsViewButtonFontSize:(id)arg1 ;
-(void)eventStatusButtonsView:(id)arg1 calculatedFontSizeToFit:(float)arg2 ;
-(void)_storeChanged:(id)arg1 ;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(void)editButtonPressed;
-(char)shouldShowEditButtonInline;
-(void)_localeChanged;
-(void)setICSPreview:(char)arg1 ;
-(void)setShowsAddToCalendar:(char)arg1 ;
-(void)setShowsOutOfDateMessage:(char)arg1 ;
-(void)setShowsDelegatorMessage:(char)arg1 ;
-(void)setShowsDelegateMessage:(char)arg1 ;
-(void)setAllowsInviteResponses:(char)arg1 ;
-(void)setAllowsSubitems:(char)arg1 ;
-(void)setShowsDoneButton:(char)arg1 ;
-(char)allowsSubitems;
-(void)setScrollToSection:(int)arg1 ;
-(void)setAllowsCalendarPreview:(char)arg1 ;
-(void)_updateTableContentInsetForKeyboard:(id)arg1 ;
-(void)eventItemDidStartEditing:(id)arg1 ;
-(void)eventItemDidEndEditing:(id)arg1 ;
-(void)eventItemDidCommit:(id)arg1 ;
-(void)_deleteClicked:(id)arg1 ;
-(void)_presentValidationAlert:(id)arg1 ;
-(id)viewControllerForEventItem:(id)arg1 ;
-(id)accessDeniedView;
-(char)showsDoneButton;
-(void)_presentDetachSheet;
-(char)_performSave:(int)arg1 animated:(char)arg2 ;
-(void)_performDelete:(int)arg1 ;
-(void)setEditorShowTransition:(int)arg1 ;
-(void)setEditorHideTransition:(int)arg1 ;
-(void)_teardownTableView;
-(char)minimalMode;
-(void)_updateResponseVisibility;
-(void)_updateResponse;
-(void)_updateFooterIfNeeded;
-(void)_setNeedsReload;
-(id)_indexPathForSection:(int)arg1 ;
-(void)_updateTableContentForSizeCategoryChange:(id)arg1 ;
-(void)_setObservesKeyboardNotifications:(char)arg1 ;
-(void)_updateNavBarAnimated:(char)arg1 ;
-(void)_reloadIfNeeded;
-(id)_indexPathForAttendeesDetailItem;
-(UIViewController *)eventDetailContainer;
-(char)_shouldShowEditButton;
-(void)editEvent;
-(char)_shouldDisplayDoneButton;
-(void)doneButtonPressed;
-(void)_setUpForEvent;
-(void)_configureItemsForStoreConstraintsGivenCalendar:(id)arg1 ;
-(void)_updateStatusButtonsActions;
-(void)_dismissEditor:(char)arg1 deleted:(char)arg2 ;
-(void)_updateFrameForInsets;
-(void)_keyboardWasShown:(id)arg1 ;
-(void)_keyboardWasHidden:(id)arg1 ;
-(void)completeWithAction:(int)arg1 ;
-(void)_refreshEventAndReload;
-(void)_setUpAttendeesWithAcceptedItem:(id)arg1 declinedItem:(id)arg2 maybeItem:(id)arg3 noReplyItem:(id)arg4 ;
-(char)allowsInviteResponses;
-(char)showsOutOfDateMessage;
-(char)showsDelegatorMessage;
-(char)showsDelegateMessage;
-(char)_shouldDisplayDelegateOrOutOfDateMessage;
-(id)_footerLabelContainingText:(id)arg1 ;
-(void)_prepareEventForEdit;
-(id)_statusButtons;
-(char)_isDisplayingInvitation;
-(void)setActiveEventEditor:(EKEventEditViewController *)arg1 ;
-(void)presentEditorAnimated:(char)arg1 ;
-(int)editorShowTransition;
-(id)_viewControllerForEditorPresentation;
-(CGSize)_idealSize;
-(void)_saveStatus:(int)arg1 span:(int)arg2 ;
-(int)editorHideTransition;
-(void)_saveStatus:(int)arg1 ;
-(id)_statusButtonsView;
-(void)_addToCalendarClicked:(id)arg1 ;
-(char)_shouldDisplayStatusButtons;
-(id)_statusButtonsContainerView;
-(char)showsAddToCalendar;
-(char)isICSPreview;
-(char)_isDisplayingDeletableEvent;
-(void)invokeAction:(int)arg1 ;
-(void)setMinimalMode:(char)arg1 ;
-(unsigned)_sectionForDetailItem:(id)arg1 ;
-(void)openAttendeesDetailItem;
-(char)allowsCalendarPreview;
-(char)alwaysShowsCalendarPreview;
-(void)setAlwaysShowsCalendarPreview:(char)arg1 ;
-(int)scrollToSection;
-(void)setHideNavigationBar:(char)arg1 ;
-(EKEventEditViewController *)activeEventEditor;
-(void)_layoutStatusButtonsForInterfaceOrientation:(int)arg1 ;
-(void)detailItem:(id)arg1 performActionsOnCellAtIndexPath:(id)arg2 actions:(/*^block*/id)arg3 ;
-(void)detailItem:(id)arg1 wantsRowReload:(id)arg2 ;
-(void)detailItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4 ;
-(void)detailItem:(id)arg1 wantsIndexPathsScrolledToVisible:(id)arg2 ;
-(char)hideNavigationBar;
-(void)setEventDetailContainer:(UIViewController *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<EKEventViewDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id<EKEventViewDelegate>)delegate;
-(unsigned)supportedInterfaceOrientations;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(CGSize)preferredContentSize;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)_items;
-(id)tableView;
-(char)allowsEditing;
-(void)setAllowsEditing:(char)arg1 ;
-(void)setEvent:(EKEvent *)arg1 ;
-(EKEvent *)event;
-(void)_pop;
-(char)allowContextProvider:(id)arg1 ;
-(id)getCurrentContext;
-(float)topInset;
-(float)leftInset;
-(float)rightInset;
-(void)setLeftInset:(float)arg1 ;
-(void)setTopInset:(float)arg1 ;
-(void)setRightInset:(float)arg1 ;
@end

