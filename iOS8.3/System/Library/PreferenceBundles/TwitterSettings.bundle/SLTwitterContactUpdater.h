/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:15:37 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/TwitterSettings.bundle/TwitterSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SLTwitterContactUpdaterDelegate;
@class ACAccount, ACAccountStore, NSMutableDictionary, NSOperationQueue, NSMutableSet;

@interface SLTwitterContactUpdater : NSObject {

	void* _addressBook;
	ACAccount* _account;
	ACAccountStore* _accountStore;
	NSMutableDictionary* _personDictionary;
	NSOperationQueue* _operationQueue;
	NSMutableSet* _updatedPeople;
	int _expectedBatchJobs;
	int _completedBatchJobs;
	float _partialBatchJobsCompleted;
	int _expectedPhotoJobs;
	int _completedPhotoJobs;
	char _warnedOfFailure;
	id<SLTwitterContactUpdaterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SLTwitterContactUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)batchLookupProgress:(id)arg1 ;
-(void)batchLookupFinished:(id)arg1 ;
-(void)photoLookupFinished:(id)arg1 ;
-(void)updateContacts;
-(void)updatePhotos;
-(void)cancel;
-(void)dealloc;
-(void)setDelegate:(id<SLTwitterContactUpdaterDelegate>)arg1 ;
-(id<SLTwitterContactUpdaterDelegate>)delegate;
-(id)initWithAccount:(id)arg1 store:(id)arg2 ;
@end
