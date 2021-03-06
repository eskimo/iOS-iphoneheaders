/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABNewPersonViewControllerDelegate.h>
#import <UIKit/ABPeoplePickerNavigationControllerDelegate.h>
#import <AddressBookUI/ABPersonTableViewDataSourceDelegate.h>
#import <AddressBookUI/ABPickerViewControllerDismissDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <AddressBookUI/ABPopoverRepresentDelegate.h>
#import <AddressBookUI/ABPersonEditDelegate.h>
#import <EventKitUI/ABPersonViewControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIViewControllerRestoration.h>

@protocol ABPersonEditDelegate, ABStyleProvider, ABCardContentProvider;
@class UIViewController, ABDatePickerViewController, UIView, NSString, UIBarButtonItem, ABPersonTableView, NSIndexPath, UIPopoverController, ABPeoplePickerNavigationController, ABMultiCellContentView_RelatedName, ABUIPerson, NSArray, ABPersonTableViewDataSource, ABPersonTableViewLinkingDelegate, UITableView;

@interface ABPersonViewControllerHelper : NSObject <ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, ABPersonTableViewDataSourceDelegate, ABPickerViewControllerDismissDelegate, UIActionSheetDelegate, UIPopoverControllerDelegate, ABPopoverRepresentDelegate, ABPersonEditDelegate, ABPersonViewControllerDelegate, UIScrollViewDelegate, UIViewControllerRestoration> {

	UIViewController* _viewController;
	<ABPersonEditDelegate>* _editDelegate;
	CFArrayRef _displayedProperties;
	ABDatePickerViewController* _datePickerViewController;
	bool _isAnimatingDatePickerInputView;
	bool _willPresentDatePickerViewController;
	id _activeDialog;
	id _deletionDelegate;
	id _actionSheetDelegate;
	bool _allowsSettingAsPreferredCardForName;
	bool _animatedRight;
	bool _automaticallySetEditing;
	bool _allowsAddingToAddressBook;
	bool _showsPeoplePickerCancelButton;
	bool _savesNewContactOnSuspend;
	void* _addressBook;
	CFDictionaryRef _valueByProperty;
	<ABStyleProvider>* _styleProvider;
	<ABCardContentProvider>* _cardContentProvider;
	bool _isOverridingCardContentProvider;
	UIView* _cardContentProviderHeaderView;
	long long _selectedCardContentIndex;
	bool _isLocation;
	NSString* _addToPersonButtonTitle;
	UIBarButtonItem* _reusableCancelButton;
	ABPersonTableView* _controllerTableView;
	unsigned long long _modelDatabaseLocalChangeCancellationCount;
	NSIndexPath* _popoverCellIndexPath;
	NSIndexPath* _popoverViewInCellIndexPath;
	UIPopoverController* _presentationPopoverController;
	ABPeoplePickerNavigationController* _peoplePickerForLinking;
	ABPeoplePickerNavigationController* _peoplePickerForAddToContacts;
	ABPeoplePickerNavigationController* _peoplePickerForRelatedNames;
	ABMultiCellContentView_RelatedName* _relatedPersonCell;
	bool _disablePopoverUpdates;
	long long _favoritesListChangeNotificationCount;
	bool _hasAddedUnknownPersonActions;
	ABUIPerson* _displayedPerson;
	NSArray* _displayedPeople;
	ABPersonTableViewDataSource* _dataSource;
	ABPersonTableViewLinkingDelegate* _linkingDelegate;

}

@property (nonatomic,readonly) UIViewController * viewController;                                                //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) <ABPersonEditDelegate> * editDelegate;                                              //@synthesize editDelegate=_editDelegate - In the implementation block
@property (assign,nonatomic) bool automaticallySetEditing;                                                       //@synthesize automaticallySetEditing=_automaticallySetEditing - In the implementation block
@property (assign,nonatomic) void* addressBook; 
@property (nonatomic,readonly) void* existingAddressBook; 
@property (nonatomic,retain) ABUIPerson * displayedPerson;                                                       //@synthesize displayedPerson=_displayedPerson - In the implementation block
@property (nonatomic,readonly) NSArray * displayedPeople;                                                        //@synthesize displayedPeople=_displayedPeople - In the implementation block
@property (nonatomic,copy) NSArray * displayedProperties; 
@property (getter=isReadonly,readonly) bool readonly; 
@property (assign,nonatomic) bool showsPeoplePickerCancelButton;                                                 //@synthesize showsPeoplePickerCancelButton=_showsPeoplePickerCancelButton - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * reusableCancelButton; 
@property (assign,nonatomic) bool allowsSettingAsPreferredCardForName;                                           //@synthesize allowsSettingAsPreferredCardForName=_allowsSettingAsPreferredCardForName - In the implementation block
@property (assign,nonatomic) bool allowsAddingToAddressBook;                                                     //@synthesize allowsAddingToAddressBook=_allowsAddingToAddressBook - In the implementation block
@property (assign,nonatomic) bool isLocation;                                                                    //@synthesize isLocation=_isLocation - In the implementation block
@property (nonatomic,retain) <ABStyleProvider> * styleProvider;                                                  //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) bool savesNewContactOnSuspend;                                                      //@synthesize savesNewContactOnSuspend=_savesNewContactOnSuspend - In the implementation block
@property (assign,nonatomic) bool disablePopoverUpdates;                                                         //@synthesize disablePopoverUpdates=_disablePopoverUpdates - In the implementation block
@property (assign,nonatomic) ABPersonTableViewDataSource * dataSource;                                           //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) ABPersonTableViewLinkingDelegate * linkingDelegate;                                 //@synthesize linkingDelegate=_linkingDelegate - In the implementation block
@property (nonatomic,readonly) UITableView * controllerTableView;                                                //@synthesize controllerTableView=_controllerTableView - In the implementation block
@property (nonatomic,readonly) bool hasPopoverController; 
@property (nonatomic,readonly) <ABPersonViewControllerPrivateDelegate> * personViewDelegate; 
@property (nonatomic,readonly) <ABUnknownPersonViewControllerDelegate> * unknownPersonViewDelegate; 
@property (nonatomic,copy) NSString * addToPersonButtonTitle;                                                    //@synthesize addToPersonButtonTitle=_addToPersonButtonTitle - In the implementation block
@property (nonatomic,retain) NSIndexPath * popoverCellIndexPath;                                                 //@synthesize popoverCellIndexPath=_popoverCellIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * popoverViewInCellIndexPath;                                           //@synthesize popoverViewInCellIndexPath=_popoverViewInCellIndexPath - In the implementation block
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(id)displayedProperties;
-(void)updateRecord;
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(bool)isReadonly;
-(bool)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(bool)peoplePickerNavigationController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2 ;
-(void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2 ;
-(bool)allowsAddingToAddressBook;
-(double)ab_heightToFitForViewInPopoverView;
-(void)setSavesNewContactOnSuspend:(bool)arg1 ;
-(bool)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void*)arg2 insertProperty:(int*)arg3 copyInsertValue:(id*)arg4 copyInsertLabel:(id*)arg5 ;
-(void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2 informDelegate:(bool)arg3 ;
-(void)personWasDeleted;
-(void)peoplePickerNavigationController:(id)arg1 insertEditorDidConfirm:(bool)arg2 forPerson:(void*)arg3 ;
-(void)imageUpdatedForPerson:(void*)arg1 ;
-(void)preferredPersonDidChangeToPerson:(void*)arg1 ;
-(bool)shouldBeRemovedFromNavigationStack;
-(id)newPersonViewDelegate;
-(bool)savesNewContactOnSuspend;
-(id)initWithViewController:(id)arg1 style:(int)arg2 ;
-(void)setAutomaticallySetEditing:(bool)arg1 ;
-(bool)showsPeoplePickerCancelButton;
-(void)setShowsPeoplePickerCancelButton:(bool)arg1 ;
-(void)updateEditButton;
-(void)ignoreNextLocalChange;
-(id)reusableCancelButton;
-(void)loadViewWithPerson:(id)arg1 allowDeletion:(bool)arg2 allowActions:(bool)arg3 ;
-(id)linkingDelegate;
-(void)setEditDelegate:(id)arg1 ;
-(void)peoplePickerNavigationController:(id)arg1 requestedLinkForPerson:(id)arg2 ;
-(void)personTableViewDataSourceShouldIgnoreNextLocalChange:(id)arg1 ;
-(bool)personTableViewDataSourceShouldShowLinkedPeople:(id)arg1 ;
-(void)personTableViewDataSource:(id)arg1 didUpdateValueForProperty:(int)arg2 ;
-(bool)hasPopoverController;
-(id)viewControllerToPresentModal;
-(bool)disablePopoverUpdates;
-(void)setDisablePopoverUpdates:(bool)arg1 ;
-(void)setActiveDialog:(id)arg1 ;
-(id)viewForActionSheet;
-(void)client:(id)arg1 didDismissActionSheet:(id)arg2 ;
-(void)personTableViewDataSource:(id)arg1 presentActionSheet:(id)arg2 fromView:(id)arg3 ;
-(bool)personTableViewDataSource:(id)arg1 shouldShowAction:(id)arg2 ;
-(void)personTableViewDataSource:(id)arg1 selectedCallActionForPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3 ;
-(void)personTableViewDataSource:(id)arg1 selectedSMSActionForPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3 ;
-(void)personTableViewDataSource:(id)arg1 shareContact:(id)arg2 ;
-(void)personTableViewDataSource:(id)arg1 conference:(id)arg2 person:(id)arg3 property:(int)arg4 identifier:(int)arg5 ;
-(bool)personTableViewDataSourceIsLocation:(id)arg1 ;
-(void)conference:(id)arg1 person:(id)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)personTableViewDataSource:(id)arg1 selectedAddToFavoritesActionForPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3 entryType:(int)arg4 ;
-(void)personTableViewDataSource:(id)arg1 didDismissActionSheet:(id)arg2 ;
-(id)editDelegate;
-(void)personTableViewDataSource:(id)arg1 pushLinkedCardAtRow:(long long)arg2 ;
-(void)personTableViewDataSourceDidReloadData:(id)arg1 ;
-(void)personTableViewDataSourceHeaderHeightDidChange:(id)arg1 ;
-(void)personTableViewDataSource:(id)arg1 removeNonScrollableHeaderViewAnimated:(bool)arg2 ;
-(bool)personTableViewDataSourceShouldShowHeader:(id)arg1 ;
-(double)personTableViewDataSourceHeaderPadding:(id)arg1 ;
-(void)personTableViewDataSource:(id)arg1 addNonScrollableHeaderView:(id)arg2 animated:(bool)arg3 ;
-(void)personTableViewDataSource:(id)arg1 willUpdateForEditing:(bool)arg2 ;
-(void)personTableViewDataSourceSelectedDeletePerson:(id)arg1 ;
-(bool)personTableViewDataSource:(id)arg1 selectedPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3 withMemberCell:(id)arg4 forEditing:(bool)arg5 ;
-(void)personTableViewDataSource:(id)arg1 presentPickerViewController:(id)arg2 fromView:(id)arg3 forIndexPath:(id)arg4 ;
-(void)personTableViewDataSourceSelectedAddToContacts:(id)arg1 ;
-(void)presentPeoplePickerNavigationControllerForRelatedNames:(id)arg1 ;
-(bool)personTableViewDataSourceIsInPopover:(id)arg1 ;
-(void)personTableViewDataSourceDidSwipeToDelete:(id)arg1 ;
-(void)personTableViewDataSource:(id)arg1 scrollViewDidScroll:(id)arg2 ;
-(void)presentLinkingPeoplePickerForPersonTableViewDataSource:(id)arg1 ;
-(void)setLinkingDelegate:(id)arg1 ;
-(void)reloadNameData;
-(void)_updateDisplayedPeople;
-(void)setAllowsSettingAsPreferredCardForName:(bool)arg1 ;
-(void)personTableViewDataSource:(id)arg1 didBeginEditingProperty:(int)arg2 ;
-(void)personTableViewDataSource:(id)arg1 didFinishEditingProperty:(int)arg2 ;
-(bool)personTableViewDataSourceShouldPresentDatePickerViaDelegate:(id)arg1 ;
-(void)personTableViewDataSourceWillPresentDatePickerViewController:(id)arg1 ;
-(bool)isPresentingDatePickerViewControllerForPersonTableViewDataSource:(id)arg1 ;
-(void)personTableViewDataSource:(id)arg1 presentDatePickerViewController:(id)arg2 fromView:(id)arg3 passthroughViews:(id)arg4 forIndexPath:(id)arg5 ;
-(void)personTableViewDataSource:(id)arg1 dismissDatePickerViewController:(id)arg2 ;
-(void)personTableViewDataSource:(id)arg1 selectedImageForEditing:(bool)arg2 ;
-(id)personViewDelegate;
-(id)unknownPersonViewDelegate;
-(id)displayedPeople;
-(bool)isLocation;
-(id)controllerTableView;
-(bool)allowsSettingAsPreferredCardForName;
-(void)setCardContentProvider:(id)arg1 ;
-(void)addressBookChangedLocally:(CFDictionaryRef)arg1 ;
-(bool)makeFirstFieldBecomeFirstResponder;
-(void)didDismissModalViewController;
-(void*)existingAddressBook;
-(void)updateDisplayedPeopleAndReloadData;
-(void)ab_updatePopoverSize;
-(bool)updatePeopleDataForExternalChange;
-(void)updateTableDataForExternalChange;
-(bool)updateAllDataForExternalChange;
-(void)deleteDialog:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)_conferencingAvailabilityChanged:(id)arg1 ;
-(void)_favoritesListChanged:(id)arg1 ;
-(void)_updateCardContentProviderHeaderViewForEditing:(bool)arg1 ;
-(void)updateContentSwitchingTabs;
-(void)showSelectedContentView;
-(void)_updateBackgroundForCardContentProvider;
-(void)_setCardContentProvider:(id)arg1 ;
-(id)_personToUseForAddressBook;
-(id)personContainerView;
-(bool)_shouldHideContentSwitchingTabsWhenEditing:(bool)arg1 ;
-(void)updateAllowsSettingAsPreferredCardForName;
-(void)setDisplayedPeople:(id)arg1 forceReload:(bool)arg2 ;
-(void)_updateDisplayedPeopleForcingReloadData:(bool)arg1 ;
-(void)setAsPreferredCardForName:(id)arg1 ;
-(void)notifyScrollViewDidLoad;
-(void)contentSwitchingTabsTapped:(id)arg1 ;
-(void)presentNewContactViewControllerForAddToContacts:(id)arg1 ;
-(void)presentPeoplePickerNavigationControllerForAddToContacts:(id)arg1 ;
-(void)addUnknownPersonActionsIfNeeded;
-(id)prepareViewWithPerson:(id)arg1 ;
-(void)updateLinkBarButtonItem;
-(void)setDatePickerViewController:(id)arg1 ;
-(void)removeSelectedPersonFromBarButtonItem:(id)arg1 ;
-(void)removeDisplayedPeople;
-(void)_addProperties:(id)arg1 toPerson:(id)arg2 ;
-(id)_newContactViewControllerForAddToContacts;
-(id)_preparePeoplePicker;
-(void)_presentPeoplePickerNavigationController:(id)arg1 fromView:(id)arg2 inPopover:(bool)arg3 ;
-(bool)copyInsertValue:(id*)arg1 property:(int*)arg2 forPerson:(void*)arg3 ;
-(void)_mergeIntoDisplayedPerson:(void*)arg1 ;
-(void)peoplePickerNavigationController:(id)arg1 setRelatedPerson:(id)arg2 ;
-(bool)shouldShowAddToExistingContact;
-(void)twitterActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)openSocialProfile:(id)arg1 ;
-(void)weiboActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)showTweetSheetForPropertyValue:(id)arg1 ;
-(void)showWeiboSheetForPropertyValue:(id)arg1 ;
-(void)performAction:(int)arg1 forPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3 withContext:(void*)arg4 ;
-(void)performAction:(int)arg1 forPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3 ;
-(void)performTwitterActionForPropertyValue:(id)arg1 cell:(id)arg2 ;
-(void)performWeiboActionForPropertyValue:(id)arg1 cell:(id)arg2 ;
-(id)_chatURLWithPropertyValue:(id)arg1 ;
-(void)performSocialProfileActionForPropertyAtIndex:(long long)arg1 inPropertyGroup:(id)arg2 forCell:(id)arg3 ;
-(void)performInstantMessageActionForPropertyAtIndex:(long long)arg1 inPropertyGroup:(id)arg2 forCell:(id)arg3 ;
-(void)performDefaultActionForPropertyAtIndex:(long long)arg1 inPropertyGroup:(id)arg2 ;
-(void)performActionForPropertyAtIndex:(long long)arg1 inPropertyGroup:(id)arg2 forCell:(id)arg3 ;
-(void)removeSelectedPerson;
-(void)presentAddToContactsSheetIfNeeded:(id)arg1 ;
-(bool)shouldAnimateDatePickerInputView;
-(void)_datePickerInputViewDismissAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)setPopoverCellIndexPath:(id)arg1 ;
-(void)setPopoverViewInCellIndexPath:(id)arg1 ;
-(void)_presentDatePickerViewControllerAsInputView:(id)arg1 andScrollToIndexPath:(id)arg2 ;
-(void)presentModalViewController:(id)arg1 ;
-(void)_dismissDatePickerInputViewAnimated:(bool)arg1 ;
-(void)_attemptSave;
-(bool)_updatePeopleDataForExternalChangeWithFullReload:(bool)arg1 ;
-(id)popoverCellIndexPath;
-(id)popoverViewInCellIndexPath;
-(bool)personTableViewDataSourceShouldShowContactSources:(id)arg1 ;
-(void)dismissPickerViewController:(id)arg1 ;
-(id)viewToRepresentPopover:(id)arg1 ;
-(void)pushViewController:(id)arg1 ;
-(void)loadUnknownViewWithPerson:(id)arg1 allowActions:(bool)arg2 ;
-(bool)automaticallySetEditing;
-(void)setIsLocation:(bool)arg1 ;
-(id)addToPersonButtonTitle;
-(void)setAddToPersonButtonTitle:(id)arg1 ;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(void)reloadData;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(id)dataSource;
-(void)applicationWillSuspend;
-(void)applicationDidResume;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(id)viewController;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)pushViewController:(id)arg1 animated:(bool)arg2 ;
-(bool)popoverControllerShouldDismissPopover:(id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(id)displayedPerson;
-(void*)addressBook;
-(void)setAddressBook:(void*)arg1 ;
-(void)setDisplayedProperties:(id)arg1 ;
-(void)setDisplayedPerson:(id)arg1 ;
-(void)setAllowsActions:(bool)arg1 ;
-(void)setAllowsAddingToAddressBook:(bool)arg1 ;
@end

