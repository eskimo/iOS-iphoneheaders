/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MFContactsSearchConsumer.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol SKUIGiftContactSearchDelegate;
@class NSArray, MFContactsSearchResultsModel, MFContactsSearchManager, UIView, NSNumber, UITableView;

@interface SKUIGiftContactSearchController : NSObject <MFContactsSearchConsumer, UITableViewDataSource, UITableViewDelegate> {

	void* _addressBook;
	<SKUIGiftContactSearchDelegate>* _delegate;
	NSArray* _results;
	MFContactsSearchResultsModel* _resultsModel;
	MFContactsSearchManager* _searchManager;
	UIView* _searchResultsView;
	NSNumber* _searchTaskIdentifier;
	UITableView* _tableView;

}

@property (assign,nonatomic,__weak) <SKUIGiftContactSearchDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int numberOfResults; 
@property (nonatomic,readonly) UIView * searchResultsView; 
-(id)initWithAddressBook:(void*)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)delegate;
-(id)_tableView;
-(BOOL)cancelSearch;
-(int)numberOfResults;
-(void)consumeSearchResults:(id)arg1 type:(int)arg2 taskID:(id)arg3 ;
-(void)finishedSearchingForType:(int)arg1 ;
-(void)finishedTaskWithID:(id)arg1 ;
-(void)beganNetworkActivity;
-(void)endedNetworkActivity;
-(id)searchResultsView;
-(void)searchForText:(id)arg1 ;
-(void)resetSearch;
-(void)_setResults:(id)arg1 ;
-(void)_finishSearchWithResults:(id)arg1 ;
-(void).cxx_destruct;
@end

