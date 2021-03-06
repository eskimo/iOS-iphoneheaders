/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:12 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABPersonLinkingUIDelegate.h>

@class NSMutableArray, ABPersonTableViewDataSource, ABPersonViewControllerHelper, NSArray;

@interface ABPersonTableViewLinkingDelegate : NSObject <ABPersonLinkingUIDelegate> {

	NSMutableArray* _linkedInfos;
	int _currentIndexInLinkedInfos;
	char _ignoresReloadLinkedInfos;
	char _shouldAllowLinkingAnotherContact;
	char _hasLinkChanges;
	char _shouldShowLinkingUIOnCard;
	char _showsLinkedPeople;
	char _appearsInLinkingPeoplePicker;
	char _updateShouldAllowLinkingAnotherContact;
	ABPersonTableViewDataSource* _dataSource;
	ABPersonViewControllerHelper* _helper;

}

@property (nonatomic,readonly) NSArray * linkedInfos;                                  //@synthesize linkedInfos=_linkedInfos - In the implementation block
@property (assign,nonatomic) char shouldShowLinkedPeople;                              //@synthesize showsLinkedPeople=_showsLinkedPeople - In the implementation block
@property (assign,nonatomic) char shouldShowLinkingUIOnCard;                           //@synthesize shouldShowLinkingUIOnCard=_shouldShowLinkingUIOnCard - In the implementation block
@property (assign,nonatomic) char appearsInLinkingPeoplePicker;                        //@synthesize appearsInLinkingPeoplePicker=_appearsInLinkingPeoplePicker - In the implementation block
@property (assign,nonatomic) char updateShouldAllowLinkingAnotherContact;              //@synthesize updateShouldAllowLinkingAnotherContact=_updateShouldAllowLinkingAnotherContact - In the implementation block
@property (nonatomic,readonly) char hasLinkChanges;                                    //@synthesize hasLinkChanges=_hasLinkChanges - In the implementation block
@property (assign,nonatomic) ABPersonTableViewDataSource * dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) ABPersonViewControllerHelper * helper;                  //@synthesize helper=_helper - In the implementation block
-(ABPersonViewControllerHelper *)helper;
-(void)setShouldShowLinkingUIOnCard:(char)arg1 ;
-(void)setAppearsInLinkingPeoplePicker:(char)arg1 ;
-(char)shouldShowLinkedPeople;
-(void)setUpdateShouldAllowLinkingAnotherContact:(char)arg1 ;
-(id)initWithHelper:(id)arg1 ;
-(char)shouldAllowLinkingAnotherContact;
-(int)numberOfLinkedCardRows;
-(char)shouldIncludeLinkingUISectionWhenEditing:(char)arg1 ;
-(id)sourceNameForCardAtRow:(int)arg1 ;
-(id)personNameForCardAtRow:(int)arg1 ;
-(char)manuallyUnlinkCardAtRow:(int)arg1 ;
-(char)canUnlinkCardAtRow:(int)arg1 ;
-(char)shouldShowLinkingUIOnCard;
-(int)indexOfLinkedInfoAtRow:(int)arg1 ;
-(id)newLinkedInfoForPerson:(id)arg1 ;
-(char)reloadLinkedInfos;
-(char)isLinkedCard;
-(void)_finalizeLinkChanges;
-(id)linkedInfoAtRow:(int)arg1 ;
-(char)appearsInLinkingPeoplePicker;
-(void)forceUseLinkedInfos:(id)arg1 currentIndexInLinkedInfos:(int)arg2 ;
-(char)manuallyLinkPerson:(id)arg1 ;
-(char)shouldAllowLinkingPersonWithRecordID:(int)arg1 ;
-(id)newPersonViewControllerForLinkedCardAtRow:(int)arg1 ;
-(id)newPeoplePickerForLinking;
-(id)sourceNameForCurrentCard;
-(void)reloadLinkingUI;
-(id)allNonUnifiedPeople;
-(char)hasLinkChanges;
-(NSArray *)linkedInfos;
-(char)updateShouldAllowLinkingAnotherContact;
-(void)dealloc;
-(void)setDataSource:(ABPersonTableViewDataSource *)arg1 ;
-(ABPersonTableViewDataSource *)dataSource;
-(void)setShouldShowLinkedPeople:(char)arg1 ;
@end

